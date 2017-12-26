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
			default :printf("\n\t\t\t\t╮(╯﹏╰）╭   你输入的操作不存在，请重新输入,输入回车键继续....");getchar();getchar();
		}
	}
 } 

int s_ad_menu()//管理员菜单的选择
{
	int choice=-1;
//	while(choice!=0)
//	{		
		system("cls");//清屏
		printf("\t\t\t\t\t*************************************\n\n");
		printf("\t\t\t\t\t**       >>>订水管理系统<<<         *\n\n");
		printf("\t\t\t\t\t** 位置:主菜单->管理员菜单         **\n\n");
		printf("\t\t\t\t\t**       管理员 %s,欢迎您！        **\n\n",records[u_i].name);
		printf("\t\t\t\t\t**          1.管理商品信息         **\n\n");
		printf("\t\t\t\t\t**          2.管理订单信息         **\n\n");
		printf("\t\t\t\t\t**          3.管理用户信息         **\n\n");
		printf("\t\t\t\t\t**          9.退出登录             **\n\n");
		printf("\t\t\t\t\t**          0.退出程序             **\n\n");
		printf("\t\t\t\t\t*************************************\n\n");
		printf("\t\t\t\t\t**     输入数字进行操作>>");
		scanf("%d",&choice);

		return choice;
//	}
}

