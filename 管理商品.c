#include"OW.h"

void ad_brand()//管理商品 
{
	int mark=1;
	int choice=2;
	for( ; mark==1; )
	{
		switch(s_ad_brand())
		{
			case 1:{
				showTable(choice);
				display(choice);
				getchar();
				getchar();
				break;
			}break;
			case 2:queryInfo(choice);break;
			case 3:modify_water();break;
			case 4:add_water();break;
			case 5:removeRecord(choice);break;
			case 6:clear_txt(choice);break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n输入错误，请重新选择:\n输入回车后继续");getchar();getchar();
		}
	}
}

int s_ad_brand()//管理商品选择 
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//清屏
		printf("商品信息菜单\n");
		printf("1.显示所有商品信息\n");
		printf("2.查找商品\n");
		printf("3.修改商品信息\n");
		printf("4.增加商品\n");
		printf("5.下架商品\n");
		printf("6.清空商品信息\n");
		printf("9.返回上一层\n");
		printf("0.退出程序\n");
		printf("\n输入数字进行选择:");
		scanf("%d",&choice);
		return choice;
//}
}
