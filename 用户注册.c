#include"OW.h" 

void user_register()//用户注册 
{
	//for( ; ; )
	{
		printf("\n\t\t\t O(∩_∩)O     请输入需要创建的用户名：");
		printf("\n\t\t\t O(∩_∩)O     (由不到20个英文、数字及下划线组成：)>>");
		scanf("%s",temp.name);
	/*	for(i=0;;i++)
		{
			printf("您输入的用户名含非法字符或超出界限，请重新输入:");
		}
	*/	
	}
	//for( ; ; )
	{
		printf("\n\t\t\t O(∩_∩)O     请输入账户密码：");
		printf("\n\t\t\t O(∩_∩)O     (由不到20个英文、数字及下划线组成：)>>");
		scanf("%s",temp.password);
	//	printf("您输入的账户密码含非法字符或超出界限，请重新输入:");
	}
	//for( ; ; )
	{
		printf("\n\t\t\t O(∩_∩)O     请输入您的电话号码：");
		printf("\n\t\t\t O(∩_∩)O     (仅由数字组成，且最多20位)>>");
		scanf("%s",temp.phone);
	//	printf("您输入的电话号码非法，请重新输入");
	}
	printf("\n\t\t\t O(∩_∩)O     请输入收货地址(如E14-502)>>");
	scanf("%s",temp.address);
	a_saveRecords(1);
	printf("\n\t\t\t 罒ω罒      √√√√√注册成功!√√√√√\n");
	getchar();
	getchar();
}
