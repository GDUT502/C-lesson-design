#include"OW.h" 

void user_register()//�û�ע�� 
{
	//for( ; ; )
	{
		printf("\n\t\t\t O(��_��)O     ��������Ҫ�������û�����");
		printf("\n\t\t\t O(��_��)O     (�ɲ���20��Ӣ�ġ����ּ��»�����ɣ�)>>");
		scanf("%s",temp.name);
	/*	for(i=0;;i++)
		{
			printf("��������û������Ƿ��ַ��򳬳����ޣ�����������:");
		}
	*/	
	}
	//for( ; ; )
	{
		printf("\n\t\t\t O(��_��)O     �������˻����룺");
		printf("\n\t\t\t O(��_��)O     (�ɲ���20��Ӣ�ġ����ּ��»�����ɣ�)>>");
		scanf("%s",temp.password);
	//	printf("��������˻����뺬�Ƿ��ַ��򳬳����ޣ�����������:");
	}
	//for( ; ; )
	{
		printf("\n\t\t\t O(��_��)O     ���������ĵ绰���룺");
		printf("\n\t\t\t O(��_��)O     (����������ɣ������20λ)>>");
		scanf("%s",temp.phone);
	//	printf("������ĵ绰����Ƿ�������������");
	}
	printf("\n\t\t\t O(��_��)O     �������ջ���ַ(��E14-502)>>");
	scanf("%s",temp.address);
	a_saveRecords(1);
	printf("\n\t\t\t ������      �̡̡̡̡�ע��ɹ�!�̡̡̡̡�\n");
	getchar();
	getchar();
}
