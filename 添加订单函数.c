#include"OW.h"

void add_order()//��Ӷ������� 
{
	char str[5]; 
	int mark=0; 
	printf("\n��˶Զ�����Ϣ��");
	//�����ͷ�����o_temp 
	showTable(3);
	printf("\n%-11s%-11s%-7d%-13s%-11s%-23s%-5.2fԪ",o_temp.name,o_temp.brand,o_temp.amount,o_temp.phone,o_temp.address,o_temp.date,w_records[orderIndex-1].price*o_temp.amount);
	printf("\nȷ���µ�ô��(Y/N)");
	scanf("%s",str);
	if(str[0]=='y'||str[0]=='Y')
	{
		mark=a_saveRecords(3);	
	}
	if(mark==1) 
	{
		printf("\n�µ��ɹ���");
	}
//	loadRecords(3);
	printf("\n���س��󷵻ع��ܲ˵�...");
	getchar();
	getchar();
}



