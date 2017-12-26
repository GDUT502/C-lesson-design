#include"OW.h"

void ad_user()//管理用户 
{
	int mark=1;
	int choice=1;
	for( ; mark==1; )
	{
		switch(s_ad_user())
		{
			case 1:{
				showTable(choice);
				display(choice);
				break;
			}break;
			case 2:queryInfo(choice);break;
			case 3:queryInfo(choice);modify_user();break;
			case 4:removeRecord(choice);break;
			case 5:clear_txt(choice);break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n\t\t\t╮(╯﹏╰）╭   你输入的操作不存在，请重新输入,输入回车键继续....");getchar();getchar();
		}
	}
}

int s_ad_user()//管理用户的选择
{
	int choice=-1;
//	while(choice!=0)
//	{
		
	system("cls");//清屏
	printf("\t\t\t\t\t*****************************************\n\n");
	printf("\t\t\t\t\t**         >>>订水管理系统<<<           *\n\n");
	printf("\t\t\t\t\t**位置:主菜单->管理员菜单->用户信息菜单**\n\n");
	printf("\t\t\t\t\t**         1.显示所有用户信息          **\n\n");
	printf("\t\t\t\t\t**         2.查找用户                  **\n\n");
	printf("\t\t\t\t\t**         3.修改用户信息              **\n\n");
	printf("\t\t\t\t\t**         4.注销用户                  **\n\n");
	printf("\t\t\t\t\t**         5.清空用户信息              **\n\n");
	printf("\t\t\t\t\t**         9.返回上一层                **\n\n");
	printf("\t\t\t\t\t**         0.退出程序                  **\n\n");
	printf("\t\t\t\t\t*****************************************\n\n");
	printf("\t\t\t\t\t**     输入数字进行操作>>");
	scanf("%d",&choice);
	return choice;
//}
 } 
