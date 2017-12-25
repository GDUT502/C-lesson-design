#include"OW.h"

void u_menu()//用户菜单
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
			default :printf("\n输入错误，请重新选择:\n输入回车后继续");getchar();getchar();
		}
	}
 } 
 
 
int s_u_menu()//用户菜单的选择
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//清屏
		printf("主菜单>>用户菜单\n");
		printf("1.订购商品\n");
		printf("2.我的订单\n");
		printf("3.账户信息\n");
		printf("4.帮助\n");
		printf("9.退出登录\n");
		printf("0.退出程序\n");
		printf("\n输入数字进行选择:");
		scanf("%d",&choice);
		return choice;
//	}
}
