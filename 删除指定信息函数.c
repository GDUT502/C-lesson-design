#include"OW.h"

void removeRecord(int choice)//删除指定信息函数 1为用户，2为商品，3为订单 
{
	int i,j;
	char str[5];
	if(choice==1)
	{
		queryInfo(choice);
		printf("\n\t\t\t O(∩_∩)O      确定要删除此用户的信息么？(Y/N)>>");
		gets(str);
		if(str[0]=='y'||str[0]=='Y')
		{
			numUsers--;
			//将后面记录往前移动
			for(j=u_i;j<numUsers;j++) 
			{
				copyURecord(&records[j+1],&records[j]);
			}
			saveRecords(choice);
		}
	}
	if(choice==2)
	{
		queryInfo(choice);
		printf("\n\t\t\t O(∩_∩)O      确定要删除此商品的信息么？(Y/N)>>");
		gets(str);
		if(str[0]=='y'||str[0]=='Y')
		{
			numWaters--;
			//将后面记录往前移动
			for(j=w_i;j<numWaters;j++) 
			{
				copyWRecord(&w_records[j+1],&w_records[j]);
			}
			saveRecords(choice);
		}
	}
/*	if(choice==3)
	{
		queryInfo(choice);
		printf("确定要删除此订单的信息么？(Y/N)");
		gets(str);
		if(str[0]=='y'||str[0]=='Y')
		{
			numOrders--;
			//将后面记录往前移动
			for(j=o_i;j<numOrders;j++) 
			{
				copyORecord(&o_records[j+1],&o_records[j]);
			}
		}
	}*/
	printf("\n\t\t\t 罒ω罒      √√√√√删除成功!√√√√√\n");
	printf("\n\t\t\t 罒ω罒      按回车键后继续...");
	getchar();
	getchar();
//	savedTag=1;
 } 
