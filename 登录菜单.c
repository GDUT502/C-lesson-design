#include"OW.h"

void rg_menu()//登录菜单 
{
	for( ; ; ){
		switch(s_rg_menu())
		{
			case 1:user_login();break;//用户登录 
			case 2:ad_login();break;//管理员登陆 
			case 3:user_register();break;//新用户注册 
			case 4:ad_register();break;//管理员注册 
			case 0:quit();break;
			//default:printf("\n输入错误，请重新选择：\n输入回车后继续");getchar();getchar();
		}
	}
} 

int s_rg_menu()//登录菜单的选择 
{	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//清屏
		printf("\t\t\t\t\t***********************************\n\n");
		printf("\t\t\t\t\t*             主菜单              *\n\n");
		printf("\t\t\t\t\t*          1.用户登录             *\n\n");
		printf("\t\t\t\t\t*          2.管理员登陆           *\n\n");
		printf("\t\t\t\t\t*          3.新用户注册           *\n\n");
		//printf("\t\t\t\t\t*          4.管理员注册           *\n\n");
		printf("\t\t\t\t\t*          0.退出程序             *\n\n");
		printf("\t\t\t\t\t***********************************\n\n");
		printf("\t\t\t\t\tO(∩_∩)O,您好!\n\n");
		printf("\t\t\t\t\t请输入您要进行的操作>>");
		scanf("%d",&choice);
		
		while(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 0){
			printf("\n\t\t\t╮(╯﹏╰）╭   你输入的操作不存在，请重新输入>>");
			scanf("%d",&choice);
		}
		return choice;
//	}
}
