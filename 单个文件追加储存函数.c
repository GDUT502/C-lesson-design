#include"OW.h"
int a_saveRecords(int choice)//����ɹ�����1�� 
{
	FILE *fp;
//	char fname[30];
	fname=select_file(choice);//�����ļ��� 
	if((fp=fopen(fname,"ab"))==NULL)
	{
		printf("\n\t\t\t�r(�s�n�t���q   �ļ�����ʧ�ܣ�");
		return -1;
	}
	//printf("\n���ļ��С�����\n");
	if(choice==1||choice==4)
	{
		fwrite(&temp,sizeof(UserInfo)*1/*numUsers*/,1,fp);
		fclose(fp);
		}
	if(choice==2)
	{
		fwrite(&w_temp,sizeof(WtInfo)*1/*numWaters*/,1,fp);
		fclose(fp);
	}
	if(choice==3)
	{
	/*	printf("%s",o_temp.name);
		getchar();
		getchar();*/
		fwrite(&o_temp,sizeof(OrInfo)*1/*numOrders*/,1,fp);
		fclose(fp);
	}
	printf("\n\t\t\t\t ������      �̴̡̡̡̡���ɹ�!�̡̡̡̡�\n");
//	printf("%d���ļ�����ɹ��������������\n",numUsers);
//	savedTag=0;
	return 1;
}
