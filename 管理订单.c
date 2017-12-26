#include"OW.h" 

void ad_order()//管理订单 
{
	int j;
	int mark=1;
	int choice=3;
	for( ; mark==1; )
	{
		switch(s_ad_order())
		{
			case 1:{
				display(choice);
				getchar();
				getchar(); 
				break;
			}break;
			case 2:queryInfo(choice);break;
			case 3:{
				queryInfo(choice); 
				printf("\n请选择你要修改的订单：");
				scanf("%d",&j);
				modify_order(j-1);//修改订单信息函数 
				break;
			} break;
			case 4:{
				queryInfo(choice);
				printf("\n请选择你要删除的订单：");
				scanf("%d",&j);
				removeOrder(j-1);
				break;
			}break;
			case 5:clear_txt(choice);break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n\t\t\t╮(╯﹏╰）╭   你输入的操作不存在，请重新输入,输入回车键继续....");getchar();getchar();
		}
	}
}

int s_ad_order()//管理订单的选择 
{
	int choice=-1;
//	while(choice!=0)
//	{

		
		
		system("cls");//清屏
		printf("\t\t\t\t\t*****************************************\n\n");
		printf("\t\t\t\t\t**         >>>订水管理系统<<<           *\n\n");
		printf("\t\t\t\t\t**位置:主菜单->管理员菜单->订单信息菜单**\n\n");
		printf("\t\t\t\t\t**         1.显示所有订单信息          **\n\n");
		printf("\t\t\t\t\t**         2.查找订单                  **\n\n");
		printf("\t\t\t\t\t**         3.修改订单信息              **\n\n");
		printf("\t\t\t\t\t**         4.删除订单                  **\n\n");
		printf("\t\t\t\t\t**         5.清空订单                  **\n\n");
		printf("\t\t\t\t\t**         9.返回上一层                **\n\n");
		printf("\t\t\t\t\t**         0.退出程序                  **\n\n");
		printf("\t\t\t\t\t*****************************************\n\n");
		printf("\t\t\t\t\t**     输入数字进行操作>>");
		scanf("%d",&choice);
		return choice;
//}
 } 
