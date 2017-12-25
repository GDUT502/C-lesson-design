#include"OW.h"

void user_login()
{
	int i,mark=0;
	int choice;
	char name[20];
	char password[30];
	loadRecords(1);//读取用户信息文件 
	for( ; ; )
	{
		system("cls");//清屏
		printf("\n请输入您的用户名：");
		scanf("%s",name);
		u_i=findRecord(name,0,1,0);//查找该用户名 
		i=u_i;
		if(i==-1)
		{
			printf("\n该用户名不存在，请重新输入\n按回车后继续：");
			getchar();
			getchar();
		}
		else break;
	}
	for( ; ; )
	{
		printf("\n请输入您的密码：");
		scanf("%s",password);
		if(strcmp(password,records[i].password)!=0)
		{	
			printf("\n密码不正确，请重新输入：\n按回车后继续");
			getchar();
			getchar();
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
		printf("\n登陆成功!\n按回车后继续");
		getchar();
		getchar();
		u_menu();//登陆之后的东西。
	} 
}
