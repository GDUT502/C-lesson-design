#include"OW.h" 

void add_water()//�����ƷƷ�� 
{
	int mark=0;
	char str[5];
	printf("\n\t\t\t O(��_��)O      ��������Ʒ����>>");
	scanf("%s",w_temp.brand );
	printf("\n\t\t\t O(��_��)O      ��������Ʒ�۸�>>");
	scanf("%f",&w_temp.price );//ע���ַ����ʹ�á�
	printf("\n\t\t\t O(��_��)O      �˶���Ʒ��Ϣ");
	showTable(2);
	printf("\n%s\t%f",w_temp.brand,w_temp.price);
	printf("\n\t\t\t O(��_��)O      �ϱ���ô��(Y/N)>>");
	scanf("%s",str);
	if(str[0]=='y'||str[0]=='Y')
	{
		printf("1");
		mark=a_saveRecords(2);	
	//	mark=1;
	}
	if(mark==1) 
	{
		printf("\n\t\t\t ������      �̡̡̡̡���ӳɹ����̡̡̡̡�\n");
	}
	else printf("\n\t\t\t�r(�s�n�t���q   ���ʧ��!");
	printf("\n\t\t\t ������      ���س��󷵻ع��ܲ˵�...");
	getchar();
	getchar();
}
