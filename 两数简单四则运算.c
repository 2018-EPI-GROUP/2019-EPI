#include <stdio.h>
int main()
{
	float a,b,n;
	char c;
	printf("ÊäÈëÄãµÄËãÊ½£º\n");
	scanf("%f%c%f",&a,&c,&b);
	switch(c)
	{
		case '+':
			n=a+b;
			break;
		case '-':
		    n=a-b;
			break;
		case '*':
		    n=a*b;
			break;
		case '/':
		    if(b==0)
			printf("error");
			else n=a/b;
			break;	
	}
    if(b!=0)
    	printf("%f%c%f=%f",a,n,b,c);
	return 0;
}
