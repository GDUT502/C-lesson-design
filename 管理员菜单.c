#include"OW.h" 

void ad_menu()//����Ա�˵� 
{
	int mark=1; 
	for( ; mark==1; )
	{
	
		switch(s_ad_menu())
		{
			case 1:ad_brand();break;
			case 2:ad_order();break;
			case 3:ad_user();break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n\t\t\t\t�r(�s�n�t���q   ������Ĳ��������ڣ�����������,����س�������....");getchar();getchar();
		}
	}
 } 

int s_ad_menu()//����Ա�˵���ѡ��
{
	int choice=-1;
//	while(choice!=0)
//	{		
		system("cls");//����
		printf("\t\t\t\t\t*************************************\n\n");
		printf("\t\t\t\t\t**       >>>��ˮ����ϵͳ<<<         *\n\n");
		printf("\t\t\t\t\t** λ��:���˵�->����Ա�˵�         **\n\n");
		printf("\t\t\t\t\t**       ����Ա %s,��ӭ����        **\n\n",records[u_i].name);
		printf("\t\t\t\t\t**          1.������Ʒ��Ϣ         **\n\n");
		printf("\t\t\t\t\t**          2.��������Ϣ         **\n\n");
		printf("\t\t\t\t\t**          3.�����û���Ϣ         **\n\n");
		printf("\t\t\t\t\t**          9.�˳���¼             **\n\n");
		printf("\t\t\t\t\t**          0.�˳�����             **\n\n");
		printf("\t\t\t\t\t*************************************\n\n");
		printf("\t\t\t\t\t**     �������ֽ��в���>>");
		scanf("%d",&choice);

		return choice;
//	}
}

