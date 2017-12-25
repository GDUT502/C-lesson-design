#include"OW.h" 

void ad_menu()//管理员菜单 
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
			default :printf("\n输入错误，请重新选择:\n输入回车后继续");getchar();getchar();
		}
	}
 } 

int s_ad_menu()//管理员菜单的选择
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//清屏
		printf("管理员菜单\n");
		printf("1.管理商品信息\n");
		printf("2.管理订单信息\n");
		printf("3.管理用户信息\n");
		printf("9.退出登录\n");
		printf("0.退出程序\n");
		printf("输入数字进行选择:");
		scanf("%d",&choice);
		return choice;
//	}
}

