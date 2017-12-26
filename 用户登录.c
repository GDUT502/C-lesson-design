#include"OW.h"

void user_login()
{
	int i,mark=0;
	int choice;
	char name[20];
	char password[30];
	loadRecords(1);//读取用户信息文件 
	
	system("cls");//清屏
	printf("\t\t\t\t\t#位置:主菜单->用户登录        \n\n");
	
	//输入用户名 
	printf("\n\t\t\t O(∩_∩)O      请输入你的用户名>>");
	scanf("%s",name);
	for( ; ; )
	{
		u_i=findRecord(name,0,1,0);//查找该用户名 
		i=u_i;
		if(i==-1)
		{
			printf("\n\t\t\t╮(╯﹏╰）╭   用户不存在，请重新输入>>");
			scanf("%s",name);
		}
		else break;
	}
	
	//输入密码 
	printf("\n\t\t\t O(∩_∩)O      请输入你的密码>>");
	scanf("%s",password);
	for( ; ; )
	{
		
		if(strcmp(password,records[i].password)!=0)
		{	
			printf("\n\t\t\t╮(╯﹏╰）╭   密码不正确，请重新输入>>");
			scanf("%s",password);
		}
		else 
		{
			mark=1;
			break;
			}
	}
	if(mark==1)
	{
		land=1;
		printf("\n\t\t\t 罒ω罒      √√√√√登陆成功!√√√√√\n");
		printf("\n\t\t\t\t\t按回车后继续...");
		getchar();
		getchar();
		u_menu();//登陆之后的东西。
	} 
}
