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
}//�Զ�������ѡ���б�
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
}//��������
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
}//�¶�ת��1
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
}//�¶�ת��2
#include<stdio.h>
float froc(float f)
{
	return (5.0 / 9.0) * (f - 32);
}
int main()
{
	float f;
	printf("������һ�������¶ȣ�");
	scanf_s("%f", &f);
	printf("�����¶�Ϊ��%f", froc(f));
	return 0;
}//�¶�ת��3
//�ļ�1
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
//�ļ�2
int sub() {
	extern int x;
	x = x - 5;
	return (x);
}//�ⲿ������������
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
	printf("�������֣�\n");
	scanf_s("%u", &n);
	printf("%u!=%ld", n, fac(n));
	return 0;
}//�õݹ����n��
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
}//���0��-N��
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
}//������ˮ�۸�����
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
}//�������д������
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
}//1-n֮��
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
}//2�Ĵη���n�
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
}//���µ�����ת���б�
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
}//��1/2*n-1��ǰn���
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
}//��n�Ľ׳�
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
}//��ż�ּ�
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

}//��������ˮ��
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
}//������С��Ϸ
#include<stdio.h>
main()
{
	int  letter = 0, digit = 0, other = 0, k, blank = 0;
	char ch;
	for (k = 1; k <= 10; k++)
	{

		ch = getchar();
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
			letter++;
		}
		else if (ch >= '0' && ch <= '9') {
			digit++;
		}
		else if
			(ch == ' ' || ch == '\n') blank++;

		else other++;
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
	return 0;
}//�ж��ַ����ֿո�س�
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
//ͳ��ѧ��ƽ���ɼ��Ͳ�������
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
}//���Խṹ��
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
}//��������
#include<stdio.h>
void main()
{
	int a, b, c, d, t;
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	if (a > d)
	{
		t = a; a = b; b = t;
	}
	if (b > d)
	{
		t = b; b = d; d = t;
	}
	if (c > d)
	{
		t = c; c = d; d = t;
	}
	if (a > c)
	{
		t = a; a = c; c = t;
	}
	if (b > c)
	{
		t = b; b = c;	c = t;
	}
	if (a > c)
	{
		t = a; a = c; c = t;
	}
	if (a > b)
	{
		t = a; a = b; b = t;
	}
	printf("%d %d %d %d", a, b, c, d);
}//�ĸ����ɵ͵���
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
}//���ڳɼ�
#include<stdio.h>
void main()
{
	int n = 0, i, j, h, m = 0;
	scanf_s("%d", &n);
	char a[28] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b' };
	if (n >= 1 && n <= 7)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = i - 1; j < n; j++)
			{

				printf("%c ", a[m]);
				m += 1;
			}
			printf("\n");
		}
	}
	else {}
}//��ĸ��
#include<stdio.h>
void main()
{
	double m, s = 0;
	scanf_s("%lf", &m);
	if (m == 1600.0)printf("0.00");
	if (m > 1600 && m <= 2500) s = (m - 1600) * 0.05;
	if (m > 2500 && m <= 3500) s = (m - 1600) * 0.10;
	if (m > 3500 && m <= 4500) s = (m - 1600) * 0.15;
	if (m > 4500) s = (m - 1600) * 0.20;
	printf("%.2f", s);
}//��������
#include<stdio.h>
void main()
{
	int a, c;
	char b;
	scanf("%d %c %d", &a, &b, &c);
	switch (b)
	{
	case'+':printf("%d", a + c); break;
	case'-':printf("%d", a - c); break;
	case'*':printf("%d", a * c); break;
	case'/':
	{ if (c != 0)
	{printf("%d", a / c); break;
	}
	else {}}
	case'%':
	{if (c != 0)
	{printf("%d", a % c); break;
	}
	else {}}
	default:printf("ERROR");
	}
}//�������ַ��Ų�����
#include<stdio.h>
main()
{
	int  letter = 0, digit = 0, other = 0, k;
	char ch;
	for (k = 1; k <= 10; k++)
	{

		ch = getchar();
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
			letter++;
		}
		else if (ch >= '0' && ch <= '9') {
			digit++;
		}
		else {
			if (ch != '\0') other++;
		}
	}
	printf("letter = %d, digit = %d, other = %d", letter, digit, other);
	return 0;
}//����ĸ���ַ�����
#include<stdio.h>
void main()
{
	int n, i, j;
	int sum = 1, full = 0;
	scanf("%d", &n);
	if (n == 0)sum = 1;
	else {
		for (i = 1; i <= n; i++)
		{
			sum *= i;
			full += sum;
		}
	}
	printf("%d", full);
}//1��n�Ľ׳�
#include<stdio.h>
void main()
{
	int i, n, arr[100] = { 0 }, j, t;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
			else {}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
}//ð������
#include<stdio.h>
void main()
{
	long int i = 0, n, m, x, y, h;
	m = 1, n = 1;
	{
		printf("%d %d ", m, n);
		for (i; ; i++)
		{
			x = m + n;
			y = x + n;
			printf("%ld %ld ", x, y);
			m = x, n = y;
		}
	}
}//���쳲��������У�10λ��������Ϊʮ���ƣ�
#include<stdio.h>
int f(int i)
{
	if (i <= 1)
		return 1;
	else if (i == 2)
		return 2;
	else
		return f(i - 1) + f(i - 2);
}
void main()
{
	int n, i;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		printf("%d ", f(i));
}//�ݹ����쳲��������У�ǰn�
#include<stdio.h>
void main()
{
	int low = 0, high, n = 0, a[10], i, t;
	scanf_s("%d", &n);
	high = n - 1;
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	while (low < high)
	{
		for (i = low; i < high; i++)
		{
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}high--;
		for (i = high; i > low; i--)
		{
			if (a[i] < a[i - 1])
			{
				t = a[i - 1];
				a[i - 1] = a[i];
				a[i] = t;
			}
		}low++;
	}
	for (i = 0; i < n; i++)
		printf("%d  ", a[i]);
}//˫��ð������
#include<stdio.h>
int main()
{
	int i, s, count = 0, flag = 0;
	double c = 0, average = 0;
	for (i = 1;; i++)
	{
		scanf_s("%d", &s);
		if (s < 0) { break; }
		c++;
		average += s;
		if (s < 60 && s >= 0) {
			count++;
		}
	}
	if (i != 1) {
		printf("Average = %.2lf\n", average / c);
		printf("Count = %d", count);
	}
	else printf("Average = 0.00");
}
//ѧ��ƽ���ɼ�������������
#include<stdio.h>
void main()
{
	int  s, year = 0;
	printf("please enter a year after 1998:\n");
	scanf_s("%d", &year);
	s = (year - 1996) % 28;
	switch (s)
	{
	case 0:printf("%d��9��13��\n%d��12��13\n", year, year); break;
	case 1:printf("%d��6��13��\n", year); break;
	case 2:printf("%d��2��13��\n%d��3��13��\n%d��11��13��\n", year, year, year); break;
	case 3:printf("%d��8��13��\n", year); break;
	case 4:printf("%d��10��13��\n", year); break;
	case 5:printf("%d��4��13��\n%d7��13��\n", year, year); break;
	case 6:printf("%d��9��13��\n%d12��13��\n", year, year); break;
	case 7:printf("%d��6��13��\n", year); break;
	case 8:printf("%d��2��13��\n%d��8��13��\n", year, year); break;
	case 9:printf("%d��5��13��\n", year); break;
	case 10:printf("%d��1��13��\n%d��10��13��\n", year, year); break;
	case 11:printf("%d��4��13��%d7��13��\n", year, year); break;
	case 12:printf("%d��6��13��\n", year); break;
	case 13:printf("%d��2��13��\n%d��3��13��\n%d��11��13��\n", year, year, year); break;
	case 14:printf("%d��8��13��\n", year); break;
	case 15:printf("%d��5��13��\n", year); break;
	case 16:printf("%d��1��13��\n%d��4��13\n", year, year); break;
	case 17:printf("%d��9��13��\n%d��12��13��\n", year, year); break;
	case 18:printf("%d��6��13��\n", year); break;
	case 19:printf("%d��2��13��\n%d��3��13��\n%d��11��13��\n", year, year, year); break;
	case 20:printf("%d��5��13��\n", year); break;
	case 21:printf("%d��1��13��\n%d��10��13��\n", year, year); break;
	case 22:printf("%d��4��13��\n%d��7��13��\n", year, year); break;
	case 23:printf("%d��9��13��\n%d��12��13��\n", year, year); break;
	case 24:printf("%d��11��13��\n%d��3��13��\n", year, year); break;
	case 25:printf("%d��8��13��\n", year); break;
	case 26:printf("%d��5��13��\n", year); break;
	case 27:printf("%d��1��13��\n%d��10��13��\n", year, year); break;
	case 28:printf("%d��9��13��\n%d��12��13��\n", year, year); break;
	}
}//��ɫ�����塣������������������
#include<stdio.h>
void main()
{
	int s;
	scanf("%d", &s);
	if (s < 60)printf("E");
	if (s < 70 && s >= 60)printf("D");
	if (s < 80 && s >= 70)printf("C");
	if (s < 90 && s >= 80)printf("B");
	if (s <= 100 && s >= 90)printf("A");
}//�ɼ�ת��
#include<stdio.h>
void main()
{
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	switch (c)
	{
	case '+':printf("%d", a + b); break;
	case '-':printf("%d", a - b); break;
	case '*':printf("%d", a * b); break;
	case '/':printf("%d", a / b); break;
	case '%':printf("%d", a % b); break;
	default:printf("ERROR");
	}
}//���ַ��ż���
#include<stdio.h>
void main()
{
	int year, month, days;
	scanf("%d %d", &year, &month);
	switch (month)
	{
	case 1:days = 31; break;
	case 2:if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		days = 28; break;
	}
		  else { days = 29; break; }
	case 3:days = 31; break;
	case 4:days = 30; break;
	case 5:days = 31; break;
	case 6:days = 30; break;
	case 7:days = 31; break;
	case 8:days = 31; break;
	case 9:days = 30; break;
	case 10:days = 31; break;
	case 11:days = 30; break;
	case 12:days = 31; break;
	}
	printf("year = %d month = %d days=%d", year, month, days);
}//�������£����������
#include<stdio.h>
void main()
{
	double Pi, sum = 1, s = 1, eps, n = 1, h, i;
	scanf("%lf", &eps);
	if (eps > 4)printf("Pi = 4.0000");
	else for (i = 1;; i++)
	{
		n = n + 2;
		s = -s;
		sum += 1 / n * s;
		h = 4 * sum;
		if (1 / n < eps)
			break;
	}
	printf("Pi = %.4lf", h);
}//��ȷPiֵ
#include<stdio.h>
#include"math.h"
int  main()
{
	long long a, i, b;
	scanf("%lld", &a);
	if (a == -2 || a == 0 || a == 1 || a < 0)printf("No");
	else if (a == 2)printf("Yes");

	else {
		for (i = 3; i <= sqrt(a); i++)
		{
			b = a % i;
			if (b == 0) { printf("No"); goto loop; }

			else {}
		}
		printf("Yes");
	loop:return 0;
	}
}//�ж�һ�����ǲ�������
#include<stdio.h>
int main()
{
	int num, s, i = 0;
	scanf("%d", &num);
	while (1)
	{
		scanf("%d", &s);
		i++;
		if (i > 7) { printf("Game Over!"); break; }
		if (s > num)printf("Too big\n");
		if (s < num)printf("Too small\n");
		if (s == num) {
			printf("Lucky You!\n"); break;
		}
	}
}//������С��Ϸ
#include<stdio.h>
#define R 1000
void main()
{
	int n, a[R], i, j, t;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	printf("%d", a[n - 1]);
}//����߷�
#include<stdio.h>
#define N 100000
void main()
{
	char a[N];
	int i, count = 0, j, t = 0;
	for (i = 0;; i++)
	{
		scanf("%d", &a[i]);
		count++;
		if (a[i] < 0)break;
	}
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	printf("%d", a[count - 1]);
}//��һȺѧ����߷�
#include<stdio.h>
main()
{
	long a, s, i, t = 10, j = 1;
	scanf("%d", &a);
	if (a < 10)printf("%d ", a);
	else {
		for (i = 1;; i++)
		{

			s = a / j;
			if (s == 0) break;
			else
			{
				printf("%d ", s % t);
				j *= 10;
			}
		}
	}
}//�������һ����
#include<stdio.h>
void main()
{
	int n = 0, i;
	double m, w, c;
	scanf("%d", &n);
	if (n < 3)printf("None");
	else {
		for (m = 0; m <= n; m++)
		{
			for (w = 0; w <= n; w++)
			{

				for (c = 0; c <= n; c++)
				{
					if (m + w + c == n && 3 * m + 2 * w + 0.5 * c == n)
					{
						printf("men = %.0lf, women = %.0lf, child = %.0lf\n", m, w, c);
					}

				}
			}
		}
	}
}//��ٰ�ש
#include<stdio.h>

void  main()
{
	char a[100] = { '\0' };
	int count = 0;
	gets(a);
	for (int i = 0; i < strlen(a); i++)
	{
		count++;
		if (a[i] == '-')count--;
	}
	printf("%d", count);
}//ͳ��һ��������λ��
#include<stdio.h>
#include"math.h"
int  main()
{
	long long a, i, b;
	scanf("%lld", &a);
	if (a == -2 || a == 0 || a == 1 || a < 0)printf("No");
	else if (a == 2)printf("Yes");

	else {
		for (i = 3; i <= sqrt(a); i++)
		{
			b = a % i;
			if (b == 0) { printf("No"); goto loop; }

			else {}
		}
		printf("Yes");
	loop:return 0;
	}
}//�ж�һ�����Ƿ�Ϊ����
#include<stdio.h>
#define N 100000
void main()
{
	char a[N];
	int i, count = 0, j, t = 0;
	for (i = 0;; i++)
	{
		scanf("%d", &a[i]);
		count++;
		if (a[i] < 0)break;
	}
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	printf("%d", a[count - 1]);
}//��һ��ѧ����߷�
#include<stdio.h>
main()
{
	long a, s, i, t = 10, j = 1;
	scanf("%d", &a);
	if (a < 10)printf("%d ", a);
	else {
		for (i = 1;; i++)
		{

			s = a / j;
			if (s == 0) break;
			else
			{
				printf("%d ", s % t);
				j *= 10;
			}
		}
	}
}//�����������
#include<stdio.h>
#include<math.h>
main()
{
	long n = 0, i, j, flag, count = 0;
	scanf("%ld", &n);
	for (i = 2; i <= n; i++)
	{
		if (i == 2) { printf("%6ld", i); count++; }
		else
		{
			flag = 1;
			for (j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0)
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				printf("%6ld", i);
				count++;
				if (count % 10 == 0) printf("\n");
			}
		}
	}
}//���2-n��������
#include<stdio.h>
#define PI 3.1415926
double cylinder(double r, double h)
{
	double volume;
	volume = PI * r * r * h;
	return(volume);
}
void main()
{
	double r, h, volume;
	scanf("%lf %lf", &r, &h);
	volume = cylinder(r, h);
	printf("Volume = %.3lf", volume);
}//Բ�����
#include<stdio.h>
int main()
{
	int i, j, t;
	for (i = 1; i <= 5; i++)
	{
		for (j = 4 - i; j >= 0; j--)
		{
			printf(" ");
		}
		for (t = 1; t <= i; t++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}//���ֽ�����
#include<stdio.h>
void main()
{
	double x1, y1, x2, y2, a, b, c, d;
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	a = x1 + x2;
	b = y1 + y2;
	c = x1 * x2 - y1 * y2;
	d = x1 * y2 + x2 * y1;
	printf("addition of complex is %.6lf+%.6lfi\nproduct of complex is %.6lf+%.6lfi", a, b, c, d);
}//�����ĺ����
#include<stdio.h>
int main()
{
	char a[10];
	int i = 0;
	scanf("%s", a);

	for (i = 0; i < 6; i++)
		printf("%c->%c->%d\n", a[i], a[i] - 32, (a[i] - 32) % 10);
}//���ʽ�������
