#include"OW.h" 

void ad_register()//管理员注册 
{
	char i;
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
	a_saveRecords(4);
	printf("\n\t\t\t 罒ω罒      √√√√√注册成功!√√√√√\n");
	getchar();
	getchar();
}
