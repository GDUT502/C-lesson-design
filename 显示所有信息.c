#include"OW.h"
//1Ϊ�û���2Ϊ��Ʒ��3Ϊ����
void display(int choice)//��ʾ���б�����Ϣ 
{
	int i,num;
	if(choice==1) 
	{
		loadRecords(choice);//�ȶ�ȡ������Ϣ 
		num=numUsers;
		if(num==0)
		{
			printf("û�пɹ���ʾ�ļ�¼��\n"); 
		}
		showTable(choice);
		for(i=0;i<num;i++)
		{
			printf("\t\t\t\t\t\n%s\t%s\t%s",records[i].name,records[i].phone,records[i].address);
		}
		//��ӡ��10����Ϣ����ͣһ�� 
		if(i%10==0&&i!=0)
		{
			printf("�س������...\n") ;
			getchar();
			getchar();
			printf("\n\n");
			showTable(choice);
		}
	}
	//��ӡ��Ʒ��Ϣ 
	if(choice==2) 
	{
		loadRecords(choice);//�ȶ�ȡ������Ϣ 
		num=numWaters;
		if(num==0)
		{
			printf("û�пɹ���ʾ�ļ�¼��\n"); 
		}
		
		printf("\t\t\t\t\t***********************************\n\n");
		printf("\t\t\t\t\t**λ��:���˵�->�û��˵�->������Ʒ**\n\n");
		printf("\t\t\t\t\t**        �ɶ�����Ͱװˮ         **\n\n");
		printf("\t\t\t\t\t**  ��Ʒ����           ��Ʒ�۸�  **\n\n");
		for(i=0;i<num;i++)
		{
			printf("\t\t\t\t\t**  %-d.%-8s         %-4.2fԪ   **\n\n",i+1,w_records[i].brand,w_records[i].price);//
		}
		printf("\t\t\t\t\t************************************\n\n");
		//��ӡ��10����Ϣ����ͣһ�� 
//		if(i%10==0&&i!=0)
//		{
//			printf("�س������...\n") ;
//			getchar();
//			getchar();
//			printf("\n\n");
//			showTable(choice);
//		}
	}
	if(choice==3) 
	{
		loadRecords(choice);//�ȶ�ȡ������Ϣ 
		num=numOrders;
		if(num==0)
		{
			printf("û�пɹ���ʾ�ļ�¼��\n"); 
		}
		showTable(choice);
		//�����˶����ܼ۸� 
		for(i=0;i<num;i++)
		{
			printf("\n%s\t%s\t%d\t%s\t%s\t%s%fԪ",o_records[i].name,o_records[i].brand,o_records[i].amount,o_records[i].phone,o_records[i].address,o_records[i].date,o_records[i].amount*w_records[i].price);
		}
		//��ӡ��100����Ϣ����ͣһ�� 
		if(i%100==0&&i!=0)
		{
			printf("�س������...\n") ;
			getchar();
			getchar();
			printf("\n\n");
			showTable(choice);
		}
	}
	printf("\n�س������...\n") ;
	getchar();
	getchar();
}
