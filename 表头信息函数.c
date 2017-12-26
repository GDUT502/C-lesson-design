#include"OW.h"

void showTable(int choice)//输出表头信息 1为用户表头，2位商品表头，3为订单表头 
{
	if(choice==1)
	{
		printf("\n用户名\t电话号码\t收货地址\n");
	 } 
	if(choice==2)
	{
		printf("\n\t\t\t\t\t商品名称\t商品价格\n"); 
	}
	if(choice==3)
	{
		printf("订单信息"); 
		printf("\n下单用户   商品名称   数量   用户电话     收货地址   下单时间               总价格\n");
	}
}
