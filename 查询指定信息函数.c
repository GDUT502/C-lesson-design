#include"OW.h" 
void queryInfo(int choice)//��ѯָ����Ϣ����
{
	char target[50];
	int i,j=0;
	int k;
/*	numUsers=0;
	numWaters=0;
	numOrders=0;*/
	if(choice==1)
	{
		loadRecords(choice);//�ȶ�ȡ������Ϣ 
		if(numUsers==0)	
	{
		printf("\n\t\t\t�r(�s�n�t���q   û�м�¼�ɹ�����");
		return ;
	}
		printf("\n\t\t\t\t\t**   ����������ѯ���û�����>>");
		scanf("%s",target);
	/*	u_i*/i=findRecord(target,0/*Ĭ�ϲ��ҷ�ʽΪ�û���*/,choice,0);
		u_i=i;
		if(i==-1) 
		{
			printf("\n\t\t\t�r(�s�n�t���q   û������û���");
			getchar();
			getchar();
			return ; 
		}
		showTable(choice);
		printf("\n%s\t%s\t%s",records[i].name,records[i].phone,records[i].address);
	} 
	
	if(choice==2)
	{
		loadRecords(choice);//�ȶ�ȡ������Ϣ 
		if(numWaters==0)	
	{
		printf("\n\t\t\t�r(�s�n�t���q   û�м�¼�ɹ����ң�");
		return ;
	}
		//printf("\t\t\t\t\t**          1.������Ʒ             **\n\n");
		printf("\n\t\t\t\t\t**   ����������ѯ����Ʒ����>>");
		scanf("%s",target);
		/*w_i*/i=findRecord(target,0/*Ĭ�ϲ��ҷ�ʽΪ��Ʒ��*/,choice,0);
		w_i=i;
		
		if(i==-1) 
		{
			printf("\n\t\t\t�r(�s�n�t���q   û�������Ʒ��");
			getchar();
			getchar();
			return ;
		}
		//showTable(choice);
		printf("\n\t\t\t\t\t%s\t%-5.2fԪ",w_records[i].brand,w_records[i].price);
	} 
	if(choice==3)
	{
		loadRecords(choice);//�ȶ�ȡ������Ϣ 
		if(numOrders==0)	
	{
		printf("\n\t\t\t�r(�s�n�t���q   û�м�¼�ɹ����ң�");
		return ;
	}
		printf("\n����������ѯ���µ��û�����");
		printf("\n\t\t\t\t\t**   ����������ѯ����Ʒ����>>");
		scanf("%s",target);
		/*o_i*/i=findRecord(target,0/*Ĭ�ϲ��ҷ�ʽΪ�û���*/,choice,0);
		j=0;
		o_i[j]=i;
		if(i==-1) 
		{
			printf("\n\t\t\t�r(�s�n�t���q   ���û��޶�����¼��");
			getchar();
			getchar();
			return ;
		}
		showTable(choice);
		while(i!=-1)
		{
		//	printf("\n%d.%s\t%s\t%d\t%s",j+1,o_records[i].name,o_records[i].brand,o_records[i].amount,o_records[i].date);
			i=findRecord(target,0,choice,i+1);
			if(i!=-1)
			{
			//	j=(j+1)%N;//ȡģ����������j=0,N=5,��ô��j=(0+1)%5=1..2..3..4..0..1..2..3..4..0..1; 
			//	o_i[j]=i;
				if(j<N-1) {
					j++;
					o_i[j]=i;
				//	j++; 
				}
				else {
					for(j=0;j<N-1;j++)
					{
						o_i[j]=o_i[j+1];
					}
					o_i[N-1]=i;
				}
			}
		}
		for(k=0;k<j+1;k++)
		{
			i=o_i[k];
			printf("\n%d.%s\t%s\t%d\t%f\t%s\t%s\t%s",k+1,o_records[i].name,o_records[i].brand,o_records[i].amount,o_records[i].total_prices,o_records[i].phone,o_records[i].address,o_records[i].date);
		}
	}
	printf("\n\t\t\t\t\t����س������...."); 
	getchar();
	getchar();
}
