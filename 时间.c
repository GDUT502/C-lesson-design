#include "OW.h" 

void getConvTime(){
	char str[24],*result,delims[]=" "; 
	time_t timep;//当前时间的获取 
	time(&timep);
	strcpy(str,ctime(&timep));
	int i = 0;
	char segTime[4][20];//二维数组分别储存 年 月 日 时 
	char month[12][4] = {"Jan","Feb","Mar","Apr","May","June","July","Aug","Sept","Oct","Nov","Dec"};
	//分割时间字符串 顺序为年 月 日 时间  
	result = strtok( str, delims );
    while( result != NULL ) {
    	switch(i){
	       	case 1:strcpy(segTime[1],result);break;//月 
	       	case 2:strcpy(segTime[2],result);strcat(segTime[2],"日");break;//日 
	       	case 3:strcpy(segTime[3],result);break;//时间 
	       	case 4:strcpy(segTime[0],result);segTime[0][4]='\0';strcat(segTime[0],"年");break;//年 
	   }
       //printf( "result is \"%s\"\n", result );
       result = strtok( NULL, delims );
	   i++;
   }
   //把英文的月份改为数字 
   for(i=0;i<12;i++){
   		if(!strcmp(month[i],segTime[1])){
		   		itoa(i+1,segTime[1],10);//将数字转换为字符串
				strcat(segTime[1],"月");	
		   } 
   }
   segTime[3][5]='\0';//在时间的秒前加上结束符号 要用单引号表示单个字符
   strcpy(Time,segTime[0]);
   for(i=1;i<4;i++){
   		strcat(Time,segTime[i]);
   }
}
 
