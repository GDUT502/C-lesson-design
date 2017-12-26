#include"OW.h"

void add_order()//添加订单函数 
{
	char str[5]; 
	int mark=0;
	system("cls");//清屏
	printf("\n\t\t\t\t罒ω罒      √√√√√订购成功!√√√√√\n\n");
	printf("\t\t\t\t\t*****************************************\n\n");
	printf("\t\t\t\t\t**位置:主菜单->用户菜单->确认订单      **\n\n");
	printf("\t\t\t\t\t**        $$桶装水订单$$               **\n\n"); 
	printf("\t\t\t\t\t**     用户名称:%-15s         \n\n",o_temp.name);
	printf("\t\t\t\t\t**     用户电话:%-15s         \n\n",o_temp.phone);
	printf("\t\t\t\t\t**     用户地址:%-15s         \n\n",o_temp.address);
	printf("\t\t\t\t\t**     下单日期:%-15s         \n\n",o_temp.date);
	printf("\t\t\t\t\t**     订购品牌:%-15s         \n\n",o_temp.brand);
	printf("\t\t\t\t\t**     桶装水单价:%-.2f 元/桶  \n\n",w_records[orderIndex-1].price);
	printf("\t\t\t\t\t**     订购数量:%d 桶      \n\n",o_temp.amount);
	printf("\t\t\t\t\t**     合计总价:%-.2f 元       \n\n",o_temp.total_prices);
	printf("\t\t\t\t\t*****************************************\n\n");
	
	/*	printf("%s",o_temp.name);
		getchar();
		getchar();*/
	printf("\t\t\t\t O(∩_∩)O      确认下单么？(Y/N)>>");
	scanf("%s",str);
	//输入字母检查 
	while(str[0]!='y' && str[0]!='Y' &&str[0]!='n' &&str[0]!='N'){
		printf("\n\t\t\t╮(╯﹏╰）╭   你输入的字母不正确，请重新输入(Y/N)>>");
		scanf("%s",str);
	} 
	if(str[0]=='y'||str[0]=='Y')
	{
		mark=a_saveRecords(3);
	}
	if(mark==1) 
	{
		printf("\n\t\t\t\t 罒ω罒      √√√√√下单成功!√√√√√\n\n");
	}
//	loadRecords(3);
	printf("\n\t\t\t\t 罒ω罒      按回车后返回功能菜单...");
	getchar();
	getchar();
}
