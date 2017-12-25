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
			default :printf("\n输入错误，请重新选择:\n输入回车后继续");getchar();getchar();
		}
	}
}

int s_ad_user()//管理用户的选择
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//清屏
		printf("用户信息菜单\n");
		printf("1.显示所有用户信息\n");
		printf("2.查找用户\n");
		printf("3.修改用户信息\n");
		printf("4.注销用户\n");
		printf("5.清空用户信息\n");
		printf("9.返回上一层\n");
		printf("0.退出程序\n");
		printf("\n输入数字进行选择:");
		scanf("%d",&choice);
		return choice;
//}
 } 
