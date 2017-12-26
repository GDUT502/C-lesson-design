#include"OW.h" 

void o_water()//订购商品 
{
	int i,num;
	i=u_i;
	getConvTime();//获得和转换当前的时间
	system("cls");//清屏 
	display(2);//显示商品信息（包含表头） 
	 
	printf("\n\t\t\t O(∩_∩)O     请选择需要订购的商品序号>>");
	scanf("%d",&num);
	//检查商品序号是否错误 
	while((num<=0 )|| (num>numWaters)){
		printf("\n\t\t\t╮(╯﹏╰）╭  订购序号不存在，请从新输入>>");
		scanf("%d",&num);
	} 

	strcpy(o_temp.brand,w_records[num-1].brand);
	orderIndex = num;//当前订购的商品序号 
	
	//输入订购的数量 
	printf("\n\t\t\t O(∩_∩)O     请输入要订购的数量>>");
	scanf("%d",&num);
		//检查输入的数量 
	while(num<=0){
		printf("\n\t\t\t╮(╯﹏╰）╭  订购数量不正确，请从新输入>>");
		scanf("%d",&num);
	}
	o_temp.amount = num;
	
	//把用户的订单添加到用户记录当中 
	strcpy(o_temp.name,records[i].name);
	strcpy(o_temp.phone,records[i].phone);
	strcpy(o_temp.address,records[i].address);
	strcpy(o_temp.date,Time);
	o_temp.total_prices=o_temp.amount*w_records[orderIndex-1].price;
}
