#include"OW.h" 

void ad_order()//������ 
{
	int j;
	int mark=1;
	int choice=3;
	for( ; mark==1; )
	{
		switch(s_ad_order())
		{
			case 1:{
				display(choice);
				getchar();
				getchar(); 
				break;
			}break;
			case 2:queryInfo(choice);break;
			case 3:{
				queryInfo(choice); 
				printf("\n��ѡ����Ҫ�޸ĵĶ�����");
				scanf("%d",&j);
				modify_order(j-1);//�޸Ķ�����Ϣ���� 
				break;
			} break;
			case 4:{
				queryInfo(choice);
				printf("\n��ѡ����Ҫɾ���Ķ�����");
				scanf("%d",&j);
				removeOrder(j-1);
				break;
			}break;
			case 5:clear_txt(choice);break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n\t\t\t�r(�s�n�t���q   ������Ĳ��������ڣ�����������,����س�������....");getchar();getchar();
		}
	}
}

int s_ad_order()//��������ѡ�� 
{
	int choice=-1;
//	while(choice!=0)
//	{

		
		
		system("cls");//����
		printf("\t\t\t\t\t*****************************************\n\n");
		printf("\t\t\t\t\t**         >>>��ˮ����ϵͳ<<<           *\n\n");
		printf("\t\t\t\t\t**λ��:���˵�->����Ա�˵�->������Ϣ�˵�**\n\n");
		printf("\t\t\t\t\t**         1.��ʾ���ж�����Ϣ          **\n\n");
		printf("\t\t\t\t\t**         2.���Ҷ���                  **\n\n");
		printf("\t\t\t\t\t**         3.�޸Ķ�����Ϣ              **\n\n");
		printf("\t\t\t\t\t**         4.ɾ������                  **\n\n");
		printf("\t\t\t\t\t**         5.��ն���                  **\n\n");
		printf("\t\t\t\t\t**         9.������һ��                **\n\n");
		printf("\t\t\t\t\t**         0.�˳�����                  **\n\n");
		printf("\t\t\t\t\t*****************************************\n\n");
		printf("\t\t\t\t\t**     �������ֽ��в���>>");
		scanf("%d",&choice);
		return choice;
//}
 } 
