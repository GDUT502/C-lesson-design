#include"OW.h"

void ad_brand()//������Ʒ 
{
	int mark=1;
	int choice=2;
	for( ; mark==1; )
	{
		switch(s_ad_brand())
		{
			case 1:system("cls") ;display(choice);break;
			case 2:queryInfo(choice);break;
			case 3:modify_water();break;
			case 4:add_water();break;
			case 5:removeRecord(choice);break;
			case 6:clear_txt(choice);break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n\t\t\t�r(�s�n�t���q   ������Ĳ��������ڣ�����������,����س�������....");getchar();getchar();
		}
	}
}

int s_ad_brand()//������Ʒѡ�� 
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//����		
		printf("\t\t\t\t\t**************************************\n\n");
		printf("\t\t\t\t\t**       >>>��ˮ����ϵͳ<<<          *\n\n");
		printf("\t\t\t\t\t** λ��:���˵�->����Ա�˵�->��Ʒ�˵�**\n\n");
		printf("\t\t\t\t\t**          1.��ʾ������Ʒ��Ϣ      **\n\n");
		printf("\t\t\t\t\t**          2.������Ʒ              **\n\n");
		printf("\t\t\t\t\t**          3.�޸���Ʒ��Ϣ          **\n\n");
		printf("\t\t\t\t\t**          4.������Ʒ              **\n\n");
		printf("\t\t\t\t\t**          5.�¼���Ʒ              **\n\n");
		printf("\t\t\t\t\t**          6.�����Ʒ��Ϣ          **\n\n");
		printf("\t\t\t\t\t**          9.������һ��            **\n\n");
		printf("\t\t\t\t\t**          0.�˳�����              **\n\n");
		printf("\t\t\t\t\t**************************************\n\n");
		printf("\t\t\t\t\t**     �������ֽ��в���>>");
		scanf("%d",&choice);
		return choice;		
//}
}
