#include"OW.h" 

void user_register()//用户注册 
{
	char str[25];
	char t;
	int mark=0;
	int i,j,k;
	for( ;mark==0 ; )
	{
		printf("\n\t\t\t O(∩_∩)O     请输入需要创建的用户名：");
		printf("\n\t\t\t O(∩_∩)O     (由不到20个英文、数字及下划线组成：)>>");
		l1:	scanf("%s",str);
		if(str[0]=='#') rg_menu();
		k=strlen(str);
		if(k>20) {
			printf("\n\t\t\t╮(╯﹏╰）╭   超出界限，请重新输入:");
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
				printf("\n\t\t\t╮(╯﹏╰）╭   含非法字符，请重新输入:");
				goto l1;
			}
		//	else if(i<=20&&t=='\0') break;
			
		}
		mark=1;		
	}
	mark=0;
	for( ;mark==0 ; )
	{
		printf("\n\t\t\t O(∩_∩)O     请输入账户密码：");
		printf("\n\t\t\t O(∩_∩)O     (由不到20个英文、数字及下划线组成：)>>");
		l2:	scanf("%s",str);
		if(str[0]=='#') rg_menu();
		k=strlen(str);
		if(k>20) {
			printf("\n\t\t\t╮(╯﹏╰）╭   超出界限，请重新输入:");
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
				printf("\n\t\t\t╮(╯﹏╰）╭   含非法字符，请重新输入:");
				goto l2;
			}
		//	else if(i<=20&&t=='\0') break;
			
		}
		mark=1;	
	}
	mark=0;
	for( ;mark==0 ; )
	{
		printf("\n\t\t\t O(∩_∩)O     请输入您的电话号码：");
		printf("\n\t\t\t O(∩_∩)O     (仅由数字组成，且最多20位)>>");
		l3:	scanf("%s",str);
		if(str[0]=='#') rg_menu();
		k=strlen(str);
		if(k>20) {
			printf("\n\t\t\t╮(╯﹏╰）╭   超出界限，请重新输入:");
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
				printf("\n\t\t\t╮(╯﹏╰）╭   含非法字符，请重新输入:");
				goto l3;
			}
		//	else if(i<=20&&t=='\0') break;
			
		}
		mark=1;	
	}
	mark=0;
	printf("\n\t\t\t O(∩_∩)O     请输入收货地址(如E14-502)>>");
	scanf("%s",temp.address);
	if(temp.address[0]=='#') rg_menu();
	a_saveRecords(1);
	printf("\n\t\t\t 罒ω罒      √√√√√注册成功!√√√√√\n");
	getchar();
	getchar();
}
