#include"OW.h"

void ad_user()//�����û� 
{
	int mark=1;
	int choice=1;
	for( ; mark==1; )
	{
		switch(s_ad_user())
		{
			case 1:{
				showTable(choice);
				display(choice);
				break;
			}break;
			case 2:queryInfo(choice);break;
			case 3:queryInfo(choice);modify_user();break;
			case 4:removeRecord(choice);break;
			case 5:clear_txt(choice);break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n\t\t\t�r(�s�n�t���q   ������Ĳ��������ڣ�����������,����س�������....");getchar();getchar();
		}
	}
}

int s_ad_user()//�����û���ѡ��
{
	int choice=-1;
//	while(choice!=0)
//	{
		
	system("cls");//����
	printf("\t\t\t\t\t*****************************************\n\n");
	printf("\t\t\t\t\t**         >>>��ˮ����ϵͳ<<<           *\n\n");
	printf("\t\t\t\t\t**λ��:���˵�->����Ա�˵�->�û���Ϣ�˵�**\n\n");
	printf("\t\t\t\t\t**         1.��ʾ�����û���Ϣ          **\n\n");
	printf("\t\t\t\t\t**         2.�����û�                  **\n\n");
	printf("\t\t\t\t\t**         3.�޸��û���Ϣ              **\n\n");
	printf("\t\t\t\t\t**         4.ע���û�                  **\n\n");
	printf("\t\t\t\t\t**         5.����û���Ϣ              **\n\n");
	printf("\t\t\t\t\t**         9.������һ��                **\n\n");
	printf("\t\t\t\t\t**         0.�˳�����                  **\n\n");
	printf("\t\t\t\t\t*****************************************\n\n");
	printf("\t\t\t\t\t**     �������ֽ��в���>>");
	scanf("%d",&choice);
	return choice;
//}
 } 
