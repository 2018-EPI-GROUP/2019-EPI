#include <stdio.h>
float jia(float a,float b)
{
	float m=a+b;
	return m;
} 
float jian(float a,float b)
{
	float m=a-b;
	return m;
}
float cheng(float a,float b)
{
	float m=a*b;
	return m;
}
float chu(float a,float b)
{
	float m;
	if(b==0)
	printf("error");
	else 
	m=a/b;
	return m;
}
int main()
{
	float a,b,c;
	char n;
	printf("ÊäÈëÄãµÄËãÊ½£º\n");
	scanf("%f%c%f",&a,&n,&b);
	switch(n)
	{
		case '+':
			c=jia(a,b);
			break;
		case '-':
			c=jian(a,b);
			break;
		case '*':
			c=cheng(a,b);
			break;
		case '/':
			c=chu(a,b);
			break;
	}
    if(b!=0)
    	printf("%f%c%f=%f",a,n,b,c);
	return 0;
}
