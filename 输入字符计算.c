#include<stdio.h>
int main()
{
	int a,b,x;
	char c;
	
	scanf("%d%*c%c%d",&a,&c,&b);
	if(c!='+'&&c!='-'&&c!='*'&&c!='/'&&c!='%')
		printf("ERROR");
	else 
	{
	if(c=='+')
		x=a+b;
	if(c=='-')
		x=a-b;
    if(c=='/')
		x=a/b;
	if(c=='*')
		x=a*b;
    if(c=='%')
        x=a%b;
	
	printf("%d",x);
	}

	

	return 0;
}
