#include"OW.h"

void ad_login()
{
	int choice;
	int i;
	int mark=0;
	char name[20];
	char password[30];
	loadRecords(4);
	 
	system("cls");//清屏
	printf("\t\t\t\t\t#位置:主菜单->管理员登录      \n\n");
	
	//输入用户名 
	printf("\n\t\t\t O(∩_∩)O      请输入你的用户名>>");
	scanf("%s",name);
	for( ; ; )
	{
		i=findRecord(name,0,1,0);
		if(i==-1)
		{
			printf("\n\t\t\t╮(╯﹏╰）╭   用户不存在，请重新输入>>");
			scanf("%s",name);
		}
		else break;
	}
	
	
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
		land=4;
		printf("\n\t\t\t 罒ω罒    √√√√√管理员登陆成功!√√√√√\n");
		getchar();
		getchar();
		ad_menu();//登陆之后的东西
	} 
}
