#include"OW.h"

void user_login()
{
	int i,mark=0;
	int choice;
	char name[20];
	char password[30];
	loadRecords(1);//��ȡ�û���Ϣ�ļ� 
	
	system("cls");//����
	printf("\t\t\t\t\t#λ��:���˵�->�û���¼        \n\n");
	
	//�����û��� 
	printf("\n\t\t\t O(��_��)O      ����������û���>>");
	scanf("%s",name);
	for( ; ; )
	{
		u_i=findRecord(name,0,1,0);//���Ҹ��û��� 
		i=u_i;
		if(i==-1)
		{
			printf("\n\t\t\t�r(�s�n�t���q   �û������ڣ�����������>>");
			scanf("%s",name);
		}
		else break;
	}
	
	//�������� 
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
		land=1;
		printf("\n\t\t\t ������      �̵̡̡̡̡�½�ɹ�!�̡̡̡̡�\n");
		printf("\n\t\t\t\t\t���س������...");
		getchar();
		getchar();
		u_menu();//��½֮��Ķ�����
	} 
}
