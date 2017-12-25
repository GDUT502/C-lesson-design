#include"OW.h"

void showTable(int choice)//输出表头信息 1为用户表头，2位商品表头，3为订单表头 
{
	if(choice==1)
	{
		printf("\n用户名\t电话号码\t收货地址\n");
	 } 
	if(choice==2)
	{
		printf("\n商品名称\t商品价格\n"); 
	}
	if(choice==3)
	{
		printf("\n下单用户\t商品名称\t商品数量\t用户电话\t收货地址\t下单时间\n");
	}
}
