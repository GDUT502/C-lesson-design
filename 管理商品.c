#include"OW.h"

void ad_brand()//管理商品 
{
	int mark=1;
	int choice=2;
	for( ; mark==1; )
	{
		switch(s_ad_brand())
		{
			case 1:system("cls") ;display(choice);break;
			case 2:queryInfo(choice);break;
			case 3:modify_water();break;
			case 4:add_water();break;
			case 5:removeRecord(choice);break;
			case 6:clear_txt(choice);break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n\t\t\t╮(╯﹏╰）╭   你输入的操作不存在，请重新输入,输入回车键继续....");getchar();getchar();
		}
	}
}

int s_ad_brand()//管理商品选择 
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//清屏		
		printf("\t\t\t\t\t**************************************\n\n");
		printf("\t\t\t\t\t**       >>>订水管理系统<<<          *\n\n");
		printf("\t\t\t\t\t** 位置:主菜单->管理员菜单->商品菜单**\n\n");
		printf("\t\t\t\t\t**          1.显示所有商品信息      **\n\n");
		printf("\t\t\t\t\t**          2.查找商品              **\n\n");
		printf("\t\t\t\t\t**          3.修改商品信息          **\n\n");
		printf("\t\t\t\t\t**          4.增加商品              **\n\n");
		printf("\t\t\t\t\t**          5.下架商品              **\n\n");
		printf("\t\t\t\t\t**          6.清空商品信息          **\n\n");
		printf("\t\t\t\t\t**          9.返回上一层            **\n\n");
		printf("\t\t\t\t\t**          0.退出程序              **\n\n");
		printf("\t\t\t\t\t**************************************\n\n");
		printf("\t\t\t\t\t**     输入数字进行操作>>");
		scanf("%d",&choice);
		return choice;		
//}
}
