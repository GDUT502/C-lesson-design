#include"OW.h"

void modify_water()//�޸���Ʒ��Ϣ���� 
{
	int i;
	int choice=-1;
	loadRecords(2);
	if(numWaters==0)	
	{
		printf("û�пɹ��޸ĵļ�¼") ;
		return ;
	}
	for( ;choice!=9; )
	{
		int mark=0;
		//queryInfo(2);
		i=w_i;
		switch(s_m_water())
		{
			case 1:{
				printf("\n����������Ʒ���ƣ�");
				scanf("%s",w_records[i].brand);
				mark=1;
				break;
			}break;
			case 2:{
				printf("\n��������Ʒ�¼۸�");
				scanf("%f",&w_records[i].price);
				mark=1;
				break;
			}break;
			case 9:choice=9;break;
			case 0:quit() ;
			default:printf("\n\t\t\t�r(�s�n�t���q   ������Ĳ��������ڣ�����������,����س�������....");getchar();getchar();
		}
		if(mark==1)
		{
			saveRecords(2);
			printf("�޸ĳɹ���\n����س��󷵻���һ��") ;
			choice=9; 
			getchar();
			getchar();
		}
	}
} 


int s_m_water()//�޸���Ʒ��Ϣ�˵���ѡ��
{
	int choice=-1;
	while(choice!=0){
		
		system("cls");//����
		printf("\t\t\t\t\t*************************************\n\n");
		printf("\t\t\t\t\t**       >>>��ˮ����ϵͳ<<<         *\n\n");
		printf("\t\t\t\t\t**λ��:���˵�->����Ա�˵�->�޸���Ʒ**\n\n");
		printf("\t\t\t\t\t**          1.�޸���Ʒ����         **\n\n");
		printf("\t\t\t\t\t**          2.�޸���Ʒ�۸�         **\n\n");
		printf("\t\t\t\t\t**          9.������һ��           **\n\n");
		printf("\t\t\t\t\t**          0.�˳�����             **\n\n");
		printf("\t\t\t\t\t*************************************\n\n");
		printf("\t\t\t\t\t**     �������ֽ��в���>>");
		scanf("%d",&choice);
		return choice;
}

		
}
 
