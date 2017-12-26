#include"OW.h" 

void my_order()//我的订单 
{
//	show_my_o();//显示我的所有订单
	int mark=1;
	int j=0;
	for( ; mark==1; )
	{
		switch(s_my_order())
		{
			case 1:{
				show_my_o();//显示我的所有订单
			}break;
			case 2:{
				show_my_o();
				printf("请选择你要修改的订单：");
				scanf("%d",&j);
				modify_order(j-1);//修改订单信息函数 
				break;
			};break;
			case 3:{
				show_my_o();
				printf("请选择你要删除的订单：");
				scanf("%d",&j);
				removeOrder(j-1);
				break;
			};break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n输入错误，请重新选择:\n输入回车后继续");getchar();getchar();
		 } 
	}
}

int s_my_order()//用户订单界面的选择
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//清屏
		printf("\t\t\t\t\t*************************************\n\n");
		printf("\t\t\t\t\t**       >>>订水管理系统<<<         *\n\n");
		printf("\t\t\t\t\t** 位置:主菜单->用户菜单->订单菜单 **\n\n");
		printf("\t\t\t\t\t**          1.显示最近订单         **\n\n");
		printf("\t\t\t\t\t**          2.修改订单             **\n\n");
		printf("\t\t\t\t\t**          3.取消订单             **\n\n");
		printf("\t\t\t\t\t**          9.返回上一层           **\n\n");
		printf("\t\t\t\t\t**          0.退出程序             **\n\n");
		printf("\t\t\t\t\t*************************************\n\n");
		printf("\t\t\t\t\t**     输入数字进行操作>>");
		scanf("%d",&choice);
		while(choice != 1 && choice != 2 && choice != 3 && choice != 9  && choice != 0){
			printf("\n\t\t\t╮(╯﹏╰）╭   你输入的操作不存在，请重新输入>>");
			scanf("%d",&choice);
		}
		return choice;
//	}
 } 
