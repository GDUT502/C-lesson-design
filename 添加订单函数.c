#include"OW.h"

void add_order()//��Ӷ������� 
{
	char str[5]; 
	int mark=0;
	system("cls");//����
	printf("\n\t\t\t\t������      �̶̡̡̡̡����ɹ�!�̡̡̡̡�\n\n");
	printf("\t\t\t\t\t*****************************************\n\n");
	printf("\t\t\t\t\t**λ��:���˵�->�û��˵�->ȷ�϶���      **\n\n");
	printf("\t\t\t\t\t**        $$Ͱװˮ����$$               **\n\n"); 
	printf("\t\t\t\t\t**     �û�����:%-15s         \n\n",o_temp.name);
	printf("\t\t\t\t\t**     �û��绰:%-15s         \n\n",o_temp.phone);
	printf("\t\t\t\t\t**     �û���ַ:%-15s         \n\n",o_temp.address);
	printf("\t\t\t\t\t**     �µ�����:%-15s         \n\n",o_temp.date);
	printf("\t\t\t\t\t**     ����Ʒ��:%-15s         \n\n",o_temp.brand);
	printf("\t\t\t\t\t**     Ͱװˮ����:%-.2f Ԫ/Ͱ  \n\n",w_records[orderIndex-1].price);
	printf("\t\t\t\t\t**     ��������:%d Ͱ      \n\n",o_temp.amount);
	printf("\t\t\t\t\t**     �ϼ��ܼ�:%-.2f Ԫ       \n\n",o_temp.total_prices);
	printf("\t\t\t\t\t*****************************************\n\n");
	
	/*	printf("%s",o_temp.name);
		getchar();
		getchar();*/
	printf("\t\t\t\t O(��_��)O      ȷ���µ�ô��(Y/N)>>");
	scanf("%s",str);
	//������ĸ��� 
	while(str[0]!='y' && str[0]!='Y' &&str[0]!='n' &&str[0]!='N'){
		printf("\n\t\t\t�r(�s�n�t���q   ���������ĸ����ȷ������������(Y/N)>>");
		scanf("%s",str);
	} 
	if(str[0]=='y'||str[0]=='Y')
	{
		mark=a_saveRecords(3);
	}
	if(mark==1) 
	{
		printf("\n\t\t\t\t ������      �̡̡̡̡��µ��ɹ�!�̡̡̡̡�\n\n");
	}
//	loadRecords(3);
	printf("\n\t\t\t\t ������      ���س��󷵻ع��ܲ˵�...");
	getchar();
	getchar();
}
