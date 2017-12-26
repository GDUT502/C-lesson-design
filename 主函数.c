#include"OW.h" 
//初始化
int numUsers=0;//用户信息数量 
int numWaters=0;//商品信息数量 
int numOrders=0;//订单信息数量 
UserInfo *records=NULL;//记录用户信息的数组 
WtInfo *w_records=NULL;//记录商品信息的数组 
OrInfo *o_records=NULL;//记录订单信息的数组 
char savedTag=0;//信息是否已经保存的标志，1为未保存，0为以保存 
int arraySize;//数组大小

//主函数
int main() 
{
	//初始化数组
	records=(UserInfo*)malloc(sizeof(UserInfo)*INITIAL_SIZE);
	if(records==NULL)
	{
		printf("memory fail!");
		exit(-1);
	}
	w_records=(WtInfo*)malloc(sizeof(WtInfo)*INITIAL_SIZE);
	if(w_records==NULL)
	{
		printf("memory fail!");
		exit(-1);
	}
	o_records=(OrInfo*)malloc(sizeof(OrInfo)*INITIAL_SIZE);
	if(o_records==NULL)
	{
		printf("memory fail!");
		exit(-1);
	}
	arraySize=INITIAL_SIZE;
	printf("\n");
	printf("\t\t\t\t\t********************************************\n\n");
	printf("\t\t\t\t\t*           >>>订水管理系统<<<             *\n\n");
	printf("\t\t\t\t\t*  O(∩_∩)O   欢迎使用本系统   O(∩_∩)O  *\n\n");
	printf("\t\t\t\t\t*             指导老师:张  静              *\n\n");
	printf("\t\t\t\t\t*   16级电子一班C语言课程设计 第五小组     *\n\n");
	printf("\t\t\t\t\t*  郭冰冰、杜均锋、陈振森、陈振杰、陈敏珊  *\n\n");
	printf("\t\t\t\t\t********************************************\n\n");
	printf("\t\t\t\t\t回车后进入系统...\n\n");
	getchar();
	rg_menu();
}
