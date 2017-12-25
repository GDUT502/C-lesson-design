#include"OW.h"

void my_info()//账户信息
{
	int i;
	int mark=1;
	for( ; mark==1; )
	{
		switch(s_m_info())
		{
			case 1:{
				i=u_i;
				showTable(1);
				printf("\n%s\t%s\t%s",records[i].name,records[i].phone,records[i].address);//已对齐//√ 
				printf("\n回车后继续...\n") ;
				getchar();
				getchar();
				break;
			}break;
			case 2:modify_user();break;//√
			case 9:mark=0;break;//√
			case 0:quit();break;//√
			default :printf("\n输入错误，请重新选择:\n输入回车后继续");getchar();getchar();
		 } 
	}
 } 
 
 
int s_m_info()//账户信息选择 
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//清屏
		printf("账户信息菜单\n");
		printf("1.显示我的账户信息\n");//√ 
		printf("2.修改我的账户信息\n");//√ 
		printf("9.返回上一层\n");//√
		printf("0.退出程序\n");//√
		printf("\n输入数字进行选择:");//√
		scanf("%d",&choice);
		return choice;
//	}
}
