#include<stdio.h>

int main(void)
{
	double a, b;
	char c;

	scanf_s("%lf", &a);
	c = getchar();
	scanf_s("%lf", &b);
	switch (c)
	{
	case '+':
		printf("%.2lf", a + b);
		break;
	case '-':
		printf("%.2lf", a - b);
		break;
	case '*':
		printf("%.2lf", a * b);
		break;
	case '/':
		printf("%.2lf", a / b);
		break;
	}

	return 0;
}