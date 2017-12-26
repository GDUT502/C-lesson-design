#include"OW.h"
int a_saveRecords(int choice)//储存成功返回1； 
{
	FILE *fp;
//	char fname[30];
	fname=select_file(choice);//返回文件名 
	if((fp=fopen(fname,"ab"))==NULL)
	{
		printf("\n\t\t\t╮(╯﹏╰）╭   文件储存失败！");
		return -1;
	}
	//printf("\n存文件中。。。\n");
	if(choice==1||choice==4)
	{
		fwrite(&temp,sizeof(UserInfo)*1/*numUsers*/,1,fp);
		fclose(fp);
		}
	if(choice==2)
	{
		fwrite(&w_temp,sizeof(WtInfo)*1/*numWaters*/,1,fp);
		fclose(fp);
	}
	if(choice==3)
	{
	/*	printf("%s",o_temp.name);
		getchar();
		getchar();*/
		fwrite(&o_temp,sizeof(OrInfo)*1/*numOrders*/,1,fp);
		fclose(fp);
	}
	printf("\n\t\t\t\t 罒ω罒      √√√√√储存成功!√√√√√\n");
//	printf("%d条文件储存成功，请继续操作。\n",numUsers);
//	savedTag=0;
	return 1;
}
