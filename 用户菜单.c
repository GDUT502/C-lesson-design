#include"OW.h"

void u_menu()//�û��˵�
{
	int mark=1;
	for( ; mark==1; )
	{
	
		switch(s_u_menu())
		{
			case 1:o_water();add_order();break;
			case 2:my_order();break;
			case 3:my_info();break;
			case 4:help();break;
			case 9:mark=0;break;
			case 0:quit();break;
			//default :printf("\n�������������ѡ��:\n����س������");getchar();getchar();
		}
	}
 } 
 
 
int s_u_menu()//�û��˵���ѡ��
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//����
		printf("%s,��ӭ����",records[u_i].name);
		printf("\t\t\t\t\t*************************************\n\n");
		printf("\t\t\t\t\t**       >>>��ˮ����ϵͳ<<<         *\n\n");
		printf("\t\t\t\t\t** λ��:���˵�->�û��˵�           **\n\n");
		printf("\t\t\t\t\t**          1.������Ʒ             **\n\n");
		printf("\t\t\t\t\t**          2.�ҵĶ���             **\n\n");
		printf("\t\t\t\t\t**          3.�˻���Ϣ             **\n\n");
		printf("\t\t\t\t\t**          4.����                 **\n\n");
		printf("\t\t\t\t\t**          9.�˳���¼             **\n\n");
		printf("\t\t\t\t\t**          0.�˳�����             **\n\n");
		printf("\t\t\t\t\t*************************************\n\n");
		printf("\t\t\t\t\t**     �������ֽ��в���>>");
		scanf("%d",&choice);
		//��������� 
		while(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 9 && choice != 0){
			printf("\n\t\t\t�r(�s�n�t���q   ������Ĳ��������ڣ�����������>>");
			scanf("%d",&choice);
		}
		return choice;
//	}
}
