#include"OW.h"

void ad_login()
{
	int choice;
	int i;
	int mark=0;
	char name[20];
	char password[30];
	loadRecords(4);
	 
	system("cls");//����
	printf("\t\t\t\t\t#λ��:���˵�->����Ա��¼      \n\n");
	
	//�����û��� 
	printf("\n\t\t\t O(��_��)O      ����������û���>>");
	scanf("%s",name);
	for( ; ; )
	{
		i=findRecord(name,0,1,0);
		if(i==-1)
		{
			printf("\n\t\t\t�r(�s�n�t���q   �û������ڣ�����������>>");
			scanf("%s",name);
		}
		else break;
	}
	
	
	printf("\n\t\t\t O(��_��)O      �������������>>");
	scanf("%s",password);
	for( ; ; )
	{
		if(strcmp(password,records[i].password)!=0)
		{	
			printf("\n\t\t\t�r(�s�n�t���q   ���벻��ȷ������������>>");
			scanf("%s",password);
		}
		else 
		{
			mark=1;
			break;
			}
	}
	if(mark==1)
	{
		land=4;
		printf("\n\t\t\t ������    �̡̡̡̡̹���Ա��½�ɹ�!�̡̡̡̡�\n");
		getchar();
		getchar();
		ad_menu();//��½֮��Ķ���
	} 
}
