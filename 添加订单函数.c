#include"OW.h"

void add_order()//添加订单函数 
{

	char str[5]; 
	int mark=0; 
	printf("\n请核对订单信息：");
	//输出表头、输出o_temp 
	showTable(3);
	printf("\n%s\t%s\t%d\t%s\t%s\t%s",o_temp.name,o_temp.brand,o_temp.amount,o_temp.phone,o_temp.address,o_temp.date);
	printf("\n确认下单么？(Y/N)");
	scanf("%s",str);
	if(str[0]=='y'||str[0]=='Y')
	{
		mark=a_saveRecords(3);	
	}
	if(mark==1) 
	{
		printf("\n下单成功！");
	}
//	loadRecords(3);
	printf("\n按回车后返回功能菜单...");
	getchar();
	getchar();
}
