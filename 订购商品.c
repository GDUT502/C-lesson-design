#include"OW.h" 

void o_water()//������Ʒ 
{
	int i,num;
	i=u_i;
//	time_t timep;//��ǰʱ��Ļ�ȡ 
//	time(&timep);
	getConvTime();//��õ�ǰ��ʱ�� 
	showTable(2);//��ʾ��Ʒ��ͷ 
	display(2);
	
	//������Ҫ��������Ʒ��� 
	printf("\n��ѡ����Ҫ��������Ʒ��ţ�");
	scanf("%d",&num);
		//�����Ʒ����Ƿ���� 
	while((num<=0 )|| (num>numWaters)){
		printf("������Ķ�����Ų���ȷ�����������!"); 
		printf("\n��ѡ����Ҫ��������Ʒ��ţ�");
		scanf("%d",&num);
	} 

	strcpy(o_temp.brand,w_records[num-1].brand);
	orderIndex = num;
	
	//���붩�������� 
	printf("\n��ѡ����Ҫ����������:");
	scanf("%d",&num);
		//������������ 
	while(num<=0){
		printf("������Ķ���������>0������ȷ�����������");
		printf("\n��ѡ����Ҫ����������:");
		scanf("%d",&num);
	}
	o_temp.amount = num;
	
	//���û��Ķ�����ӵ��û���¼���� 
	strcpy(o_temp.name,records[i].name);
	strcpy(o_temp.phone,records[i].phone);
	strcpy(o_temp.address,records[i].address);
	strcpy(o_temp.date,Time);
}
