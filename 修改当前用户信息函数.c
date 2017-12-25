#include"OW.h"

void modify_user()//修改用户信息函数 
{
	int i;
	int choice=-1;
	if(numUsers==0)	
	{
		printf("\n没有可供修改的记录") ;
		return ;
	} 
	for( ;choice!=9 ; )
	{
		int mark=0;
		i=u_i;
		switch(s_m_user())
		{
			case 1:{
				printf("\n原用户名为：%s",records[i].name);
				printf("\n请输入新用户名：");
				scanf("%s",records[i].name);
				mark=1;
				break;
			}break;
			case 2:{
				printf("\n原密码为：%s",records[i].password );
				printf("\n请输入新密码：");
				scanf("%s",records[i].password );
				mark=1;
				break;
			}break;
			case 3:{
				printf("\n原号码为：%s",records[i].phone );
				printf("\n请输入新号码：");
				scanf("%s",records[i].phone );
			/*	printf("%s",records[i].phone);
				getchar();
				getchar();*/
				mark=1;
				break;
			}break;
			case 4:{
				printf("\n原地址为：%s",records[i].address );
				printf("\n请输入新地址：");
				scanf("%s",records[i].address );
				mark=1;
				break;
			}break;
			case 9:choice=9;break;
			case 0:quit() ;
			default:printf("\n输入错误，请重新选择:\n输入回车后继续");getchar();getchar();
		}
		if(mark==1)
		{
			saveRecords(1);
			printf("\n修改成功！\n输入回车后返回上一层") ;
			getchar();
			getchar();
		}
	}
	
}

int s_m_user()//修改用户信息菜单的选择 
{
	int choice=-1;
	while(choice!=0){
		system("cls");//清屏
		printf("\n修改菜单");
		printf("\n1.修改用户名");
		printf("\n2.修改密码");
		printf("\n3.修改电话号码");
		printf("\n4.修改收货地址");
		printf("\n9.返回上一层");
		printf("\n0.退出程序\n");
		printf("\n输入数字进行选择:");
		scanf("%d",&choice);
		return choice;
}
}
