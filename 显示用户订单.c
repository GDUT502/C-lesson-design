#include"OW.h" 

void show_my_o()//显示我的最近五个订单
{
	char target[50];
//	char *p=target;
	int i=0,j=0;
	int k;
	int choice=3;
	loadRecords(choice);//先读取所有信息 
		if(numOrders==0)	
	{
		printf("没有记录可供查找");
		return ;
	}
	//	printf("\n请输入欲查询的下单用户名：");
	//	gets(target);
		strcpy(target,records[u_i].name);
		/*o_i*/i=findRecord(target,0/*默认查找方式为用户名*/,choice,0);
		j=0;
		o_i[j]=i;
		if(i==-1) 
		{
			printf("您没有订单记录！\n");
			getchar();
			getchar();
			return ;
		}
		showTable(choice);
		while(i!=-1)
		{
		//	printf("\n%d.%s\t%s\t%d\t%s",j+1,o_records[i].name,o_records[i].brand,o_records[i].amount,o_records[i].date);
			i=findRecord(target,0,choice,i+1);
			if(i!=-1)
			{
			//	j=(j+1)%N;//取模计数法，如j=0,N=5,那么新j=(0+1)%5=1..2..3..4..0..1..2..3..4..0..1; 
			//	o_i[j]=i;
				if(j<N-1) {
					j++;
					o_i[j]=i;
				//	j++; 
				}
				else {
					for(j=0;j<N-1;j++)
					{
						o_i[j]=o_i[j+1];
					}
					o_i[N-1]=i;
				}
			}
		}
		for(k=0;k<j+1;k++)
		{
			i=o_i[k];
			printf("\n%d.%s\t%s\t%d\t%f\t%s\t%s\t%s",k+1,o_records[i].name,o_records[i].brand,o_records[i].amount,o_records[i].total_prices,o_records[i].phone,o_records[i].address,o_records[i].date);
		}
		printf("\n输入回车后继续：");
		getchar();
		getchar();
} 
