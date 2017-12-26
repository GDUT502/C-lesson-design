#include"OW.h" 

void o_water()//订购商品 
{
	int i,num;
	i=u_i;
//	time_t timep;//当前时间的获取 
//	time(&timep);
	getConvTime();//获得当前被时间 
	showTable(2);//显示商品表头 
	display(2);
	
	//输入需要订购的商品序号 
	printf("\n请选择您要订购的商品序号：");
	scanf("%d",&num);
		//检查商品序号是否错误 
	while((num<=0 )|| (num>numWaters)){
		printf("你输入的订购序号不正确，请从新输入!"); 
		printf("\n请选择您要订购的商品序号：");
		scanf("%d",&num);
	} 

	strcpy(o_temp.brand,w_records[num-1].brand);
	orderIndex = num;
	
	//输入订购的数量 
	printf("\n请选择您要订购的数量:");
	scanf("%d",&num);
		//检查输入的数量 
	while(num<=0){
		printf("你输入的订购数量（>0）不正确，请从新输入");
		printf("\n请选择您要订购的数量:");
		scanf("%d",&num);
	}
	o_temp.amount = num;
	
	//把用户的订单添加到用户记录当中 
	strcpy(o_temp.name,records[i].name);
	strcpy(o_temp.phone,records[i].phone);
	strcpy(o_temp.address,records[i].address);
	strcpy(o_temp.date,Time);
}
