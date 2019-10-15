#include <stdio.h>
int main(void)
{
	float weight;
	float value;
	printf("Are you worth your weight in platinum?\n");
	printf("Let us check it out.\n");
	printf("Please enter your weight in pounds:  ");
	scanf_s("%f", &weight);
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that!If platinum prices drop .\n");
	printf("eat more to maintain your value.\n");
	if (weight >= 200)
	{
		printf("You are a little fat.");
	}
	else if (weight <= 100)
	{
		printf("You are a little thin.");
	}
	else
	{
		printf("You are ok.");
	}
	return 0;
}//关于体重
#include<stdio.h>
int s(int F)
{
	int k;
	k = 5 * (F - 32) / 9;
	return k;
}
int main()
{
	int C, F = 100;
	C = s(100);
	printf("When fahr = 100,celsius=%d", C);
	return 0;
}//温度转换1
#include<stdio.h>
double s(double F)
{
	double k;
	k = 5.0 * (F - 32) / 9.0;
	return k;
}
int main()
{
	double C, F;
	scanf_s("%lf", &F);
	C = s(F);
	printf("When fahr = %.2lf ,celsius = %.4lf", F, C);
	return 0;
}//温度转换2
#include<stdio.h>
float froc(float f)
{
	return (5.0 / 9.0) * (f - 32);
}
int main()
{
	float f;
	printf("请输入一个华氏温度：");
	scanf_s("%f", &f);
	printf("摄氏温度为：%f", froc(f));
	return 0;
}//温度转换3
//文件1
#include<stdio.h>
int x = 10;
int y = 10;
int add()
{
	y = 10 + x;
	x = x * 2;
	return x, y;
}
int main()
{
	extern int sub();
	x = x + 5;
	add();
	sub;
	printf("x=%d,y=%d\n", x, y);
}
//文件2
int sub() {
	extern int x;
	x = x - 5;
	return (x);
}//外部变量声明测试
#include<stdio.h>
long int fac(unsigned int n)
{
	long int f;
	if (n == 0)return 1;
	f = fac(n - 1) * n;
	return(f);
}
int  main()
{
	unsigned  int n;
	printf("输入数字：\n");
	scanf_s("%u", &n);
	printf("%u!=%ld", n, fac(n));
	return 0;
}//用递归计算n！
#include <stdio.h>
double fact(int n);
int main()
{
	int i, n;
	double result;

	scanf("%d", &n);
	for (i = 0; i <= n; i++) {
		result = fact(i);
		printf("%d! = %.0f\n", i, result);
	}

	return 0;
}
double fact(int n)
{
	int m, k = 1, j;

	if (n >= 0)
	{

		if (m = 0) { k = 1; }
		for (m = 1; m <= n; m++)
			k *= m;
		return (k);
	}
	else {}
}//输出0！-N！
#include<stdio.h>
float f(float x)
{
	float y;
	if (x <= 15 && x > 0)
	{
		y = 4.0 * x / 3.0;
	}

	if (x > 15) {
		y = 2.5 * x - 10.5;
	}return y;
}
void main()
{
	float x;

	scanf_s("%f", &x);
	printf("f(%.2f) = %.2f", x, f(x));
}//居民用水价格问题
#include<stdio.h>
#include"math.h"
void main()
{
	int year, i;
	double rate, money, c;
	scanf_s("%lf %d %lf", &money, &year, &rate);
	c = pow(1 + rate, year);
	money *= c;
	printf("sum = %.2lf", money);
}//计算银行存款利润
#include<stdio.h>
void main()
{
	int N, i, sum = 0;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		sum += i;
	}
	printf("sum = %d", sum);
}//1-n之和
#include<stdio.h>
#include"math.h"
void main()
{
	int n = 0, i, a;
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
	{
		a = pow(2, i);
		printf("pow(2,i) = %d\n", a);
	}
}//2的次方表（n项）
#include<stdio.h>
void main()
{
	int lower, upper;
	scanf("%d %d", &lower, &upper);
	if (lower <= upper && upper <= 100)
	{
		float C;
		printf("fahr celsius\n");
		for (lower; lower - upper <= 0; lower++)
		{
			C = 5.0 * (lower - 32.0) / 9;
			printf("%4d%6.1f\n", lower, C);
		}
	}
	else printf("Invalid.");
}//华温到摄温转换列表
#include<stdio.h>
#include<math.h>
void main()
{
	int i, N;
	double c, sum = 0;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		c = pow(-1, i - 1) * 1 / (2 * i - 1);
		sum += c;
	}
	printf("sum = %.6lf", sum);
}//求1/2*n-1的前n项和
#include<stdio.h>
void main()
{
	int n, i;
	double product = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		product *= i;
	}

	printf("product = %.0lf", product);
}//求n的阶乘
