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
			//default :printf("\n输入错误，请重新选择:\n输入回车后继续");getchar();getchar();
		}
	}
 } 
 
 
int s_u_menu()//用户菜单的选择
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//清屏
		printf("%s,欢迎您！",records[u_i].name);
		printf("\t\t\t\t\t*************************************\n\n");
		printf("\t\t\t\t\t**       >>>订水管理系统<<<         *\n\n");
		printf("\t\t\t\t\t** 位置:主菜单->用户菜单           **\n\n");
		printf("\t\t\t\t\t**          1.订购商品             **\n\n");
		printf("\t\t\t\t\t**          2.我的订单             **\n\n");
		printf("\t\t\t\t\t**          3.账户信息             **\n\n");
		printf("\t\t\t\t\t**          4.帮助                 **\n\n");
		printf("\t\t\t\t\t**          9.退出登录             **\n\n");
		printf("\t\t\t\t\t**          0.退出程序             **\n\n");
		printf("\t\t\t\t\t*************************************\n\n");
		printf("\t\t\t\t\t**     输入数字进行操作>>");
		scanf("%d",&choice);
		//序号输入检查 
		while(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 9 && choice != 0){
			printf("\n\t\t\t╮(╯﹏╰）╭   你输入的操作不存在，请重新输入>>");
			scanf("%d",&choice);
		}
		return choice;
//	}
}
