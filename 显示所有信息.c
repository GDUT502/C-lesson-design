#include"OW.h"
//1为用户，2为商品，3为订单
void display(int choice)//显示所有表内信息 
{
	int i,num;
	if(choice==1) 
	{
		loadRecords(choice);//先读取所有信息 
		num=numUsers;
		if(num==0)
		{
			printf("没有可供显示的记录！\n"); 
		}
		showTable(choice);
		for(i=0;i<num;i++)
		{
			printf("\t\t\t\t\t\n%s\t%s\t%s",records[i].name,records[i].phone,records[i].address);
		}
		//打印满10个信息后暂停一下 
		if(i%10==0&&i!=0)
		{
			printf("回车后继续...\n") ;
			getchar();
			getchar();
			printf("\n\n");
			showTable(choice);
		}
	}
	//打印商品信息 
	if(choice==2) 
	{
		loadRecords(choice);//先读取所有信息 
		num=numWaters;
		if(num==0)
		{
			printf("没有可供显示的记录！\n"); 
		}
		
		printf("\t\t\t\t\t***********************************\n\n");
		printf("\t\t\t\t\t**位置:主菜单->用户菜单->订购商品**\n\n");
		printf("\t\t\t\t\t**        可订购的桶装水         **\n\n");
		printf("\t\t\t\t\t**  商品名称           商品价格  **\n\n");
		for(i=0;i<num;i++)
		{
			printf("\t\t\t\t\t**  %-d.%-8s         %-4.2f元   **\n\n",i+1,w_records[i].brand,w_records[i].price);//
		}
		printf("\t\t\t\t\t************************************\n\n");
		//打印满10个信息后暂停一下 
//		if(i%10==0&&i!=0)
//		{
//			printf("回车后继续...\n") ;
//			getchar();
//			getchar();
//			printf("\n\n");
//			showTable(choice);
//		}
	}
	if(choice==3) 
	{
		loadRecords(choice);//先读取所有信息 
		num=numOrders;
		if(num==0)
		{
			printf("没有可供显示的记录！\n"); 
		}
		showTable(choice);
		//增加了订单总价格 
		for(i=0;i<num;i++)
		{
			printf("\n%s\t%s\t%d\t%s\t%s\t%s%f元",o_records[i].name,o_records[i].brand,o_records[i].amount,o_records[i].phone,o_records[i].address,o_records[i].date,o_records[i].amount*w_records[i].price);
		}
		//打印满100个信息后暂停一下 
		if(i%100==0&&i!=0)
		{
			printf("回车后继续...\n") ;
			getchar();
			getchar();
			printf("\n\n");
			showTable(choice);
		}
	}
	printf("\n回车后继续...\n") ;
	getchar();
	getchar();
}
