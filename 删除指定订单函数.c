#include"OW.h"

void removeOrder(int j)//删除指定订单函数
{
	int i,k;
	char str[5];
	int choice=3;
//	queryInfo(choice);
	printf("确定要删除此订单的信息么？(Y/N)");
	scanf("%s",str);
	if(str[0]=='y'||str[0]=='Y')
	{
		numOrders--;
		//将后面记录往前移动
		for(k=o_i[j];k<numOrders;k++) 
		{
			copyORecord(&o_records[k+1],&o_records[k]);
		}
		saveRecords(choice);
	}
 } 
