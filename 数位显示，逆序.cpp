#include<stdio.h>
 int main()
 {
 	long m,a,b,c,d,e;
 	printf("������һ��������0~99999):\n"); 
 	scanf("%ld",&m);
 	e=m%10;
 	d=m/10%10;
 	c=m/100%10;
 	b=m/1000%10;
 	a=m/10000%10;
 	if(m>=10000)
 	{
 		printf("���������5λ��\n");
		printf("%ld,%ld %ld %ld %ld\n",a,b,c,d,e);
		printf("���������%ld\n",e*10000+d*1000+c*100+b*10+a); 
	 }
	else if(m>=1000)
	{
		printf("���������4λ��\n");
		printf("%ld %ld %ld %ld \n",b,c,d,e);
		printf("���������%ld\n",e*1000+d*100+c*10+b);
		
	}
	else if(m>=100)
	{
		printf("���������3λ��\n");
		printf("%ld %ld %ld\n",c,d,e);
		printf("���������%ld\n",e*100+d*10+b);
	 } 
	 else if(m>=10)
	 {
	 	printf("���������2λ��\n");
	 	printf("%ld %ld\n",d,e);
	 	printf("���������%ld\n",e*10+d);
	 }
	 else
	{
		printf("�������1λ��\n");
		printf("%ld\n",e);
		printf("%ld\n",e);
	}
	return 0;
 }
