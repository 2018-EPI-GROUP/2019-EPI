#include<stdio.h>
 int main()
 {
 	long m,a,b,c,d,e;
 	printf("请输入一个整数（0~99999):\n"); 
 	scanf("%ld",&m);
 	e=m%10;
 	d=m/10%10;
 	c=m/100%10;
 	b=m/1000%10;
 	a=m/10000%10;
 	if(m>=10000)
 	{
 		printf("你输入的是5位数\n");
		printf("%ld,%ld %ld %ld %ld\n",a,b,c,d,e);
		printf("逆序输出；%ld\n",e*10000+d*1000+c*100+b*10+a); 
	 }
	else if(m>=1000)
	{
		printf("你输入的是4位数\n");
		printf("%ld %ld %ld %ld \n",b,c,d,e);
		printf("逆序输出：%ld\n",e*1000+d*100+c*10+b);
		
	}
	else if(m>=100)
	{
		printf("你输入的是3位数\n");
		printf("%ld %ld %ld\n",c,d,e);
		printf("逆序输出：%ld\n",e*100+d*10+b);
	 } 
	 else if(m>=10)
	 {
	 	printf("你输入的是2位数\n");
	 	printf("%ld %ld\n",d,e);
	 	printf("逆序输出：%ld\n",e*10+d);
	 }
	 else
	{
		printf("你输入的1位数\n");
		printf("%ld\n",e);
		printf("%ld\n",e);
	}
	return 0;
 }
