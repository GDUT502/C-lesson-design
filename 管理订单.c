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
			default :printf("\n输入错误，请重新选择:\n输入回车后继续");getchar();getchar();
		}
	}
}

int s_ad_order()//管理订单的选择 
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//清屏
		printf("订单信息菜单\n");
		printf("1.显示所有订单信息\n");
		printf("2.查找订单\n");
		printf("3.修改订单信息\n");
		printf("4.删除订单\n");
		printf("5.清空订单\n");
		printf("9.返回上一层\n");
		printf("0.退出程序\n");
		printf("\n输入数字进行选择:");
		scanf("%d",&choice);
		return choice;
//}
 } 
