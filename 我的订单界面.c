#include"OW.h" 

void my_order()//�ҵĶ��� 
{
//	show_my_o();//��ʾ�ҵ����ж���
	int mark=1;
	int j=0;
	for( ; mark==1; )
	{
		switch(s_my_order())
		{
			case 1:{
				show_my_o();//��ʾ�ҵ����ж���
			}break;
			case 2:{
				show_my_o();
				printf("��ѡ����Ҫ�޸ĵĶ�����");
				scanf("%d",&j);
				modify_order(j-1);//�޸Ķ�����Ϣ���� 
				break;
			};break;
			case 3:{
				show_my_o();
				printf("��ѡ����Ҫɾ���Ķ�����");
				scanf("%d",&j);
				removeOrder(j-1);
				break;
			};break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n�������������ѡ��:\n����س������");getchar();getchar();
		 } 
	}
}

int s_my_order()//�û����������ѡ��
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//����
		printf("\t\t\t\t\t*************************************\n\n");
		printf("\t\t\t\t\t**       >>>��ˮ����ϵͳ<<<         *\n\n");
		printf("\t\t\t\t\t** λ��:���˵�->�û��˵�->�����˵� **\n\n");
		printf("\t\t\t\t\t**          1.��ʾ�������         **\n\n");
		printf("\t\t\t\t\t**          2.�޸Ķ���             **\n\n");
		printf("\t\t\t\t\t**          3.ȡ������             **\n\n");
		printf("\t\t\t\t\t**          9.������һ��           **\n\n");
		printf("\t\t\t\t\t**          0.�˳�����             **\n\n");
		printf("\t\t\t\t\t*************************************\n\n");
		printf("\t\t\t\t\t**     �������ֽ��в���>>");
		scanf("%d",&choice);
		while(choice != 1 && choice != 2 && choice != 3 && choice != 9  && choice != 0){
			printf("\n\t\t\t�r(�s�n�t���q   ������Ĳ��������ڣ�����������>>");
			scanf("%d",&choice);
		}
		return choice;
//	}
 } 
