#include "OW.h" 

void getConvTime(){
	char str[24],*result,delims[]=" "; 
	time_t timep;//��ǰʱ��Ļ�ȡ 
	time(&timep);
	strcpy(str,ctime(&timep));
	int i = 0;
	char segTime[4][20];//��ά����ֱ𴢴� �� �� �� ʱ 
	char month[12][4] = {"Jan","Feb","Mar","Apr","May","June","July","Aug","Sept","Oct","Nov","Dec"};
	//�ָ�ʱ���ַ��� ˳��Ϊ�� �� �� ʱ��  
	result = strtok( str, delims );
    while( result != NULL ) {
    	switch(i){
	       	case 1:strcpy(segTime[1],result);break;//�� 
	       	case 2:strcpy(segTime[2],result);strcat(segTime[2],"��");break;//�� 
	       	case 3:strcpy(segTime[3],result);break;//ʱ�� 
	       	case 4:strcpy(segTime[0],result);segTime[0][4]='\0';strcat(segTime[0],"��");break;//�� 
	   }
       //printf( "result is \"%s\"\n", result );
       result = strtok( NULL, delims );
	   i++;
   }
   //��Ӣ�ĵ��·ݸ�Ϊ���� 
   for(i=0;i<12;i++){
   		if(!strcmp(month[i],segTime[1])){
		   		itoa(i+1,segTime[1],10);//������ת��Ϊ�ַ���
				strcat(segTime[1],"��");	
		   } 
   }
   segTime[3][5]='\0';//��ʱ�����ǰ���Ͻ������� Ҫ�õ����ű�ʾ�����ַ�
   strcpy(Time,segTime[0]);
   for(i=1;i<4;i++){
   		strcat(Time,segTime[i]);
   }
}
 
