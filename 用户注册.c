#include"OW.h" 

void user_register()//�û�ע�� 
{
	char str[25];
	char t;
	int mark=0;
	int i,j,k;
	for( ;mark==0 ; )
	{
		printf("\n\t\t\t O(��_��)O     ��������Ҫ�������û�����");
		printf("\n\t\t\t O(��_��)O     (�ɲ���20��Ӣ�ġ����ּ��»�����ɣ�)>>");
		l1:	scanf("%s",str);
		if(str[0]=='#') rg_menu();
		k=strlen(str);
		if(k>20) {
			printf("\n\t\t\t�r(�s�n�t���q   �������ޣ�����������:");
			goto l1;
		}
	//	printf("%c\n",str[2]);
	//	printf("%d\n",k);
		for(i=0;;i++)
		{
			t=str[i];
			if(i<20&&t=='\0') break;
	//		printf("%c\n",t);
			j=(t<='Z'&&t>='A')||(t<='z'&&t>='a')||(t<='9'&&t>='1')||(t=='_');
	//		printf("%d\n",j);
			if(j!=1)
			{
				printf("\n\t\t\t�r(�s�n�t���q   ���Ƿ��ַ�������������:");
				goto l1;
			}
		//	else if(i<=20&&t=='\0') break;
			
		}
		mark=1;		
	}
	mark=0;
	for( ;mark==0 ; )
	{
		printf("\n\t\t\t O(��_��)O     �������˻����룺");
		printf("\n\t\t\t O(��_��)O     (�ɲ���20��Ӣ�ġ����ּ��»�����ɣ�)>>");
		l2:	scanf("%s",str);
		if(str[0]=='#') rg_menu();
		k=strlen(str);
		if(k>20) {
			printf("\n\t\t\t�r(�s�n�t���q   �������ޣ�����������:");
			goto l2;
		}
	//	printf("%c\n",str[2]);
	//	printf("%d\n",k);
		for(i=0;;i++)
		{
			t=str[i];
			if(i<20&&t=='\0') break;
	//		printf("%c\n",t);
			j=(t<='Z'&&t>='A')||(t<='z'&&t>='a')||(t<='9'&&t>='1')||(t=='_');
	//		printf("%d\n",j);
			if(j!=1)
			{
				printf("\n\t\t\t�r(�s�n�t���q   ���Ƿ��ַ�������������:");
				goto l2;
			}
		//	else if(i<=20&&t=='\0') break;
			
		}
		mark=1;	
	}
	mark=0;
	for( ;mark==0 ; )
	{
		printf("\n\t\t\t O(��_��)O     ���������ĵ绰���룺");
		printf("\n\t\t\t O(��_��)O     (����������ɣ������20λ)>>");
		l3:	scanf("%s",str);
		if(str[0]=='#') rg_menu();
		k=strlen(str);
		if(k>20) {
			printf("\n\t\t\t�r(�s�n�t���q   �������ޣ�����������:");
			goto l3;
		}
	//	printf("%c\n",str[2]);
	//	printf("%d\n",k);
		for(i=0;;i++)
		{
			t=str[i];
			if(i<20&&t=='\0') break;
	//		printf("%c\n",t);
			j=(t<='9'&&t>='1');
	//		printf("%d\n",j);
			if(j!=1)
			{
				printf("\n\t\t\t�r(�s�n�t���q   ���Ƿ��ַ�������������:");
				goto l3;
			}
		//	else if(i<=20&&t=='\0') break;
			
		}
		mark=1;	
	}
	mark=0;
	printf("\n\t\t\t O(��_��)O     �������ջ���ַ(��E14-502)>>");
	scanf("%s",temp.address);
	if(temp.address[0]=='#') rg_menu();
	a_saveRecords(1);
	printf("\n\t\t\t ������      �̡̡̡̡�ע��ɹ�!�̡̡̡̡�\n");
	getchar();
	getchar();
}
