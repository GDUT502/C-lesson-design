#include"OW.h"
//1为用户信息，2为商品，3为订单 ,4是管理员 
int loadRecords(int choice)
{
	FILE *fp;
//	char fname[30];
	numUsers=0;
	numWaters=0;
	numOrders=0;
	if(choice==1||choice==4)
	{
		fname=select_file(choice);
		if((fp=fopen(fname,"rb"))==NULL)
		{
			printf("\n\t\t\t╮(╯﹏╰）╭   打不开文件！");
			return -1;
		}
		printf("\n读取文件中。。。\n");
		while(!feof(fp))
		{
			//空间不足重新申请空间 
			if(numUsers>=arraySize)
			{
				records=realloc(records,(arraySize+INCR_SIZE)*sizeof(UserInfo));
				if(records==NULL)
				{
					printf("\n\t\t\t╮(╯﹏╰）╭   读取失败!");
					exit(-1);
				}
			}
			if(fread(&records[numUsers],sizeof(UserInfo),1,fp)!=1) break;
			numUsers++;
		}
		if(choice==1) land=1;
		if(choice==4) land=4;
		fclose(fp);
		//printf("现在共有%d条信息。",numUsers);
		return 0;
		}
	if(choice==2)
	{
		fname=select_file(choice);
		if((fp=fopen(fname,"rb"))==NULL)
		{
			//printf("打不开文件！\n");
			return -1;
		}
		//printf("\n读取文件中。。。\n");
		while(!feof(fp))//检测是否读到文件尾 
		{
			//空间不足重新申请空间 
			if(numWaters>=arraySize)
			{
				w_records=realloc(w_records,(arraySize+INCR_SIZE)*sizeof(WtInfo));
				if(w_records==NULL)
				{
					printf("\n\t\t\t╮(╯﹏╰）╭   读取失败!");
					exit(-1);
				}
			}
			if(fread(&w_records[numWaters],sizeof(WtInfo),1,fp)!=1) break;
			numWaters++;
		}
		
		fclose(fp);
		//printf("现在共有%d条信息。",numWaters);
		return 0;
		}	
	if(choice==3)
	{
		fname=select_file(choice);
		if((fp=fopen(fname,"rb"))==NULL)
		{
			printf("\n\t\t\t╮(╯﹏╰）╭   打不开文件！");
			return -1;
		}
		//printf("\n读取文件中。。。\n");
		while(!feof(fp))
		{
			//空间不足重新申请空间 
			if(numOrders>=arraySize)
			{
				o_records=realloc(o_records,(arraySize+INCR_SIZE)*sizeof(OrInfo));
				if(o_records==NULL)
				{
					printf("\n\t\t\t╮(╯﹏╰）╭   读取失败!");
					exit(-1);
				}
			}
			if(fread(&o_records[numOrders],sizeof(OrInfo),1,fp)!=1) break;
			numOrders++;
		}
		
		fclose(fp);
		//printf("现在共有%d条信息。",numOrders);
		return 0;
		}	
}
