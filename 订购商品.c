#include"OW.h" 

void o_water()//订购商品 
{
	int i;
	i=u_i;
	time_t timep;//当前时间的获取 
	time(&timep);
	showTable(2);
	display(2);
	printf("\n请选择您要订购的商品：");
	scanf("%s",o_temp.brand);
	printf("\n请选择您要订购的数量:");
	scanf("%d",&o_temp.amount);
	strcpy(o_temp.name,records[i].name);
	strcpy(o_temp.phone,records[i].phone);
	strcpy(o_temp.address,records[i].address);
	strcpy(o_temp.date,ctime(&timep));
}
