#include"OW.h" 

void add_water()//添加商品品牌 
{
	int mark=0;
	char str[5];
	printf("\n请输入商品名称：");
	scanf("%s",w_temp.brand );
	printf("\n请输入商品价格：");
	scanf("%f",&w_temp.price );//注意地址符的使用。
	printf("\n请核对商品信息：") ;
	showTable(2);
	printf("\n%s\t%f",w_temp.brand,w_temp.price);
	printf("\n确认保存么？(Y/N)");
	scanf("%s",str);
	if(str[0]=='y'||str[0]=='Y')
	{
		printf("1");
		mark=a_saveRecords(2);	
	//	mark=1;
	}
	if(mark==1) 
	{
		printf("\n添加成功！");
	}
	else printf("\n添加失败!"); 
	printf("\n按回车后返回上一层...");
	getchar();
	getchar();
}
