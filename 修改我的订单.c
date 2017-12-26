#include"OW.h" 

void modify_my_o(int j)//修改我的订单
{
	int i;
	int choice=-1;
//	loadRecords(3);
	if(numOrders==0)	
	{
		printf("没有可供修改的记录");
		return ;
	}
	for( ;choice!=9; )
	{
		system("cls");//清屏
		int mark=0;
//		queryInfo(3);
		i=o_i[j];
		showTable(3);
		printf("\n%d.%s\t%s\t%d\t%s\t%s\t%s",j+1,o_records[i].name,o_records[i].brand,o_records[i].amount,o_records[i].phone,o_records[i].address,o_records[i].date);
		switch(s_m_order())
		{
			case 1:{
				printf("\n请输入商品名称：");
				scanf("%s",&o_records[i].name);
				mark=1;
				break;
			}break;
			case 2:{
				printf("\n请输入新的数量：");
				scanf("%d",&o_records[i].amount);
				mark=1;
				break;
			}break;
			case 3:{
				printf("\n请输入新的电话号码");
				scanf("%s",o_records[i].phone);
				mark=1;
				break;
			}break;
			case 4:{
				printf("\n请输入新的收货地址");
				scanf("%s",o_records[i].address);
				mark=1;
				break;
			}break;
			case 9:choice=9;break;
			case 0:quit() ;
			default:printf("\n输入错误，请重新选择:\n输入回车后继续");getchar();getchar();
		}
		if(mark==1)
		{
			saveRecords(3);
			printf("\n修改成功！\n输入回车后返回上一层") ;
			getchar();
			getchar();
		}
	}
}
