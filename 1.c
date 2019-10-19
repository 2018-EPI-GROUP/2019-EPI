//本题集是在VS上测试运行的，保证可以正常运行
#include<stdio.h>
void main()
{
	printf("[1] crisps\n[2] popcorn\n[3] chocolate\n[4] cola\n[0] exit\n");
	int i = 0, m = 0;
loop:scanf_s("%d", &i); m++;
	if (0 <= i && i <= 4)printf("\0");
	else printf("price = 0.0\n");
	switch (i)
	{
	case 1:printf("price = 3.0\n"); break;
	case 2:printf("price = 2.5\n"); break;
	case 3:printf("price = 4.0\n"); break;
	case 4:printf("price = 3.5\n"); break;
	case 0:break;
	}
	if (m < 5 && i != 0)
	{
		goto loop;
	}
	printf("Thanks");
}//自动售卖机选择列表
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
#include<stdio.h>
void main()
{
	int N = 0, n = 0, i, j = 0, o = 0;
	scanf("%d\n", &N);
	if (N <= 1000 && N > 0)
	{
		for (i = 1; i <= N; i++)
		{
			scanf("%d", &n);
			if (n >= 0)
			{
				if (n % 2 == 0 || n == 0)o++;
				else j++;
			}
		}
		printf("%d %d", j, o);
	}
}//奇偶分家
#include<stdio.h>
void main()
{
	double x = 0, y = 0;
	scanf_s("%lf", &x);
	if (x <= 0)
	{
		printf("f(%.2lf) = 0.00", x);
	}
	if (x > 0 && x <= 15)
	{
		y = 4.0 * x / 3.0;
		printf("f(%.2lf) = %.2lf", x, y);
	}
	if (x > 15)
	{
		y = 2.5 * x - 10.5;
		printf("f(%.2lf) = %.2lf", x, y);
	}

}//居民生活水费
#include<stdio.h>
void main()
{
	int num = 38, guess = 0;
	scanf("%d", &guess);
	if (guess < 38)
	{
		printf("Too small!");
	}
	if (guess > 38)
	{
		printf("Too big!");
	}
	if ((guess - num) == 0)
	{
		printf("Good Guess!");
	}
}//猜数字小游戏
#include<stdio.h>
void main()
{
	int i, letter = 0, digit = 0, other = 0, k;
	char ch;
	for (k = 1; k <= 10; k++) \
	{

		ch = getchar();
		if (ch >= 65 && ch <= 123) {
			letter++;
		}
		else if (ch >= 48 && ch <= 64) {
			digit++;
		}
		else {
			if (ch != 0)other++;
		}
	}
	printf("letter = %d,digit = %d,other = %d", letter, digit, other);
}//判断字符和数字和其他是符号的个数
#include<stdio.h>
int main()
{
	int count = 0, i, n;
	double sum = 0;
	scanf("%d", &n);
	if (n == 0) { printf("average = %.2lf\ncount = %d", sum, count); }
	else
	{
		double arr[n];
		for (i = 0; i < n; i++)
		{
			scanf("%lf", &arr[i]);
		}
		for (i = 0; i < n; i++)
		{
			sum += arr[i];
			if (arr[i] < 60) { count++; }
		}
		sum /= n;
		printf("average = %.2lf\ncount = %d", sum, count);
	}
	return 0;
}
//统计学生平均成绩和不及格数
#include<stdio.h>
#include<string.h>
#define N 1000

struct yuan
{
	char name[11];
	double z1;
	double z2;
	double z3;
	double sum;

}ren[N];
int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %lf %lf %lf", ren[i].name, &ren[i].z1, &ren[i].z2, &ren[i].z3);
		ren[i].sum = ren[i].z1 + ren[i].z2 - ren[i].z3;
	}
	for (i = 0; i < n; i++)
	{
		printf("%s %.2lf\n", ren[i].name, ren[i].sum);
	}
	return 0;
}//初试结构体
#include<stdio.h>
int main()
{
	int i, j, a[20], t;
	for (i = 0; i <= 3; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4 - i - 1; j++)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i <= 3; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}//四数排序
#include<stdio.h>
int main()
{
	int count = 0, i, n;
	double sum = 0;
	scanf("%d", &n);
	if (n == 0) { printf("average = %.2lf\ncount = %d", sum, count); }
	else
	{
		double arr[n];
		for (i = 0; i < n; i++)
		{
			scanf("%lf", &arr[i]);
		}
		for (i = 0; i < n; i++)
		{
			sum += arr[i];
			if (arr[i] < 60) { count++; }
		}
		sum /= n;
		printf("average = %.2lf\ncount = %d", sum, count);
	}
	return 0;
}//关于成绩
