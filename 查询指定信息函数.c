#include"OW.h" 

void queryInfo(int choice)//查询指定信息函数
{
	char target[50];
	int i,j=0,m;
	int k;
/*	numUsers=0;
	numWaters=0;
	numOrders=0;*/
	if(choice==1)
	{
		loadRecords(choice);//先读取所有信息 
		if(numUsers==0)	
	{
		printf("\n\t\t\t╮(╯﹏╰）╭   没有记录可供查找");
		return ;
	}
		printf("\n\t\t\t\t\t**   请输入欲查询的用户名：>>");
		scanf("%s",target);
	/*	u_i*/i=findRecord(target,0/*默认查找方式为用户名*/,choice,0);
		u_i=i;
		if(i==-1) 
		{
			printf("\n\t\t\t╮(╯﹏╰）╭   没有这个用户！");
			getchar();
			getchar();
			return ; 
		}
		showTable(choice);
		printf("\n%s\t%s\t%s",records[i].name,records[i].phone,records[i].address);
	} 
	
	if(choice==2)
	{
		loadRecords(choice);//先读取所有信息 
		if(numWaters==0)	
	{
		printf("\n\t\t\t╮(╯﹏╰）╭   没有记录可供查找！");
		return ;
	}
		//printf("\t\t\t\t\t**          1.订购商品             **\n\n");
		printf("\n\t\t\t\t\t**   请输入欲查询的商品名称>>");
		scanf("%s",target);
		/*w_i*/i=findRecord(target,0/*默认查找方式为商品名*/,choice,0);
		w_i=i;

		if(i==-1) 
		{
			printf("\n\t\t\t╮(╯﹏╰）╭   没有这个商品！");
			getchar();
			getchar();
			return ;
		}
		//showTable(choice);
		printf("\t\t\t\t\t**  商品名称           商品价格  **\n\n");
		printf("\t\t\t\t\t**  %-d.%-8s         %-4.2f元   **\n\n",i+1,w_records[i].brand,w_records[i].price);//
		
	} 
	if(choice==3)
	{
		loadRecords(choice);//先读取所有信息 
		if(numOrders==0)	
	{
		printf("\n\t\t\t╮(╯﹏╰）╭   没有记录可供查找！");
		return ;
	}
	
		printf("\n\t\t\t\t\t**   请输入欲修改订单的用户名>>");
		scanf("%s",target);
		/*o_i*/i=findRecord(target,0/*默认查找方式为用户名*/,choice,0);
		j=0;
		o_i[j]=i;
		if(i==-1) 
		{
			printf("\n\t\t\t╮(╯﹏╰）╭   该用户无订单记录！");
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
		printf("\n\t\t\t\t       $$$订单信息$$$  \n"); 
		printf("  下单用户   商品名称   数量   用户电话       收货地址      下单时间               总价格");
		for(k=j,m=1;k>=0;k--,m++)
		{
			i=o_i[k];
	  printf("\n\n%d.%-s        %-11s%-d      %-s     %-s     %-s    %-5.2f元",m,o_records[i].name,o_records[i].brand,o_records[i].amount,o_records[i].phone,o_records[i].address,o_records[i].date,o_records[i].total_prices);
		}
	}
	printf("\n\t\t\t\t\t输入回车后继续...."); 
	getchar();
	getchar();
}
