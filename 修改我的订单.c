#include"OW.h" 

void modify_my_o(int j)//�޸��ҵĶ���
{
	int i;
	int choice=-1;
//	loadRecords(3);
	if(numOrders==0)	
	{
		printf("û�пɹ��޸ĵļ�¼");
		return ;
	}
	for( ;choice!=9; )
	{
		system("cls");//����
		int mark=0;
//		queryInfo(3);
		i=o_i[j];
		showTable(3);
		printf("\n%d.%s\t%s\t%d\t%s\t%s\t%s",j+1,o_records[i].name,o_records[i].brand,o_records[i].amount,o_records[i].phone,o_records[i].address,o_records[i].date);
		switch(s_m_order())
		{
			case 1:{
				printf("\n��������Ʒ���ƣ�");
				scanf("%s",&o_records[i].name);
				mark=1;
				break;
			}break;
			case 2:{
				printf("\n�������µ�������");
				scanf("%d",&o_records[i].amount);
				mark=1;
				break;
			}break;
			case 3:{
				printf("\n�������µĵ绰����");
				scanf("%s",o_records[i].phone);
				mark=1;
				break;
			}break;
			case 4:{
				printf("\n�������µ��ջ���ַ");
				scanf("%s",o_records[i].address);
				mark=1;
				break;
			}break;
			case 9:choice=9;break;
			case 0:quit() ;
			default:printf("\n�������������ѡ��:\n����س������");getchar();getchar();
		}
		if(mark==1)
		{
			saveRecords(3);
			printf("\n�޸ĳɹ���\n����س��󷵻���һ��") ;
			getchar();
			getchar();
		}
	}
}
