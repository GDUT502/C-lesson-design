#include"OW.h" 

void o_water()//������Ʒ 
{
	int i,num;
	i=u_i;
	getConvTime();//��ú�ת����ǰ��ʱ��
	system("cls");//���� 
	display(2);//��ʾ��Ʒ��Ϣ��������ͷ�� 
	 
	printf("\n\t\t\t O(��_��)O     ��ѡ����Ҫ��������Ʒ���>>");
	scanf("%d",&num);
	//�����Ʒ����Ƿ���� 
	while((num<=0 )|| (num>numWaters)){
		printf("\n\t\t\t�r(�s�n�t���q  ������Ų����ڣ����������>>");
		scanf("%d",&num);
	} 

	strcpy(o_temp.brand,w_records[num-1].brand);
	orderIndex = num;//��ǰ��������Ʒ��� 
	
	//���붩�������� 
	printf("\n\t\t\t O(��_��)O     ������Ҫ����������>>");
	scanf("%d",&num);
		//������������ 
	while(num<=0){
		printf("\n\t\t\t�r(�s�n�t���q  ������������ȷ�����������>>");
		scanf("%d",&num);
	}
	o_temp.amount = num;
	
	//���û��Ķ�����ӵ��û���¼���� 
	strcpy(o_temp.name,records[i].name);
	strcpy(o_temp.phone,records[i].phone);
	strcpy(o_temp.address,records[i].address);
	strcpy(o_temp.date,Time);
	o_temp.total_prices=o_temp.amount*w_records[orderIndex-1].price;
}
