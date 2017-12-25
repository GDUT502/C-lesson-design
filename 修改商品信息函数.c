#include"OW.h"

void modify_water()//修改商品信息函数 
{
	int i;
	int choice=-1;
	loadRecords(2);
	if(numWaters==0)	
	{
		printf("没有可供修改的记录") ;
		return ;
	}
	for( ;choice!=9; )
	{
		int mark=0;
		queryInfo(2);
		i=w_i;
		switch(s_m_water())
		{
			case 1:{
				printf("\n请输入新商品名称：");
				scanf("%s",w_records[i].brand);
				mark=1;
				break;
			}break;
			case 2:{
				printf("\n请输入商品新价格：");
				scanf("%f",&w_records[i].price);
				mark=1;
				break;
			}break;
			case 9:choice=9;break;
			case 0:quit() ;
			default:printf("\n输入错误，请重新选择:\n输入回车后继续");getchar();getchar();
		}
		if(mark==1)
		{
			saveRecords(2);
			printf("修改成功！\n输入回车后返回上一层") ;
			choice=9; 
			getchar();
			getchar();
		}
	}
} 


int s_m_water()//修改商品信息菜单的选择
{
	int choice=-1;
	while(choice!=0){
		system("cls");//清屏
		printf("\n修改菜单");
		printf("\n1.修改商品名称");
		printf("\n2.修改商品价格");
		printf("\n9.返回上一层");
		printf("\n0.退出程序\n");
		printf("\n输入数字进行选择:");
		scanf("%d",&choice);
		return choice;
}
}
 
