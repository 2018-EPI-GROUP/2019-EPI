#include"head.h"
#include<stdio.h>
#include<stdlib.h>

double exp(void)
{
	char a[20];

	scanf("%s", a);

	switch (a[0])
	{
	case('+'):
		return exp() + exp();
		break;
	case('-'):
		return exp() - exp();
		break;
	case('*'):
		return exp() * exp();
		break;
	case('/'):
		return exp() / exp();
		break;
	default:
		return atof(a);
		break;
	}
}

int main(void)
{
	printf("%lf\n" , exp());

	system("pause");

	return 0;
}