#include"OW.h"

void rg_menu()//��¼�˵� 
{
	for( ; ; ){
		switch(s_rg_menu())
		{
			case 1:user_login();break;//�û���¼ 
			case 2:ad_login();break;//����Ա��½ 
			case 3:user_register();break;//���û�ע�� 
			case 4:ad_register();break;//����Աע�� 
			case 0:quit();break;
			//default:printf("\n�������������ѡ��\n����س������");getchar();getchar();
		}
	}
} 

int s_rg_menu()//��¼�˵���ѡ�� 
{	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//����
		printf("\t\t\t\t\t***********************************\n\n");
		printf("\t\t\t\t\t*             ���˵�              *\n\n");
		printf("\t\t\t\t\t*          1.�û���¼             *\n\n");
		printf("\t\t\t\t\t*          2.����Ա��½           *\n\n");
		printf("\t\t\t\t\t*          3.���û�ע��           *\n\n");
		//printf("\t\t\t\t\t*          4.����Աע��           *\n\n");
		printf("\t\t\t\t\t*          0.�˳�����             *\n\n");
		printf("\t\t\t\t\t***********************************\n\n");
		printf("\t\t\t\t\tO(��_��)O,����!\n\n");
		printf("\t\t\t\t\t��������Ҫ���еĲ���>>");
		scanf("%d",&choice);
		
		while(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 0){
			printf("\n\t\t\t�r(�s�n�t���q   ������Ĳ��������ڣ�����������>>");
			scanf("%d",&choice);
		}
		return choice;
//	}
}
