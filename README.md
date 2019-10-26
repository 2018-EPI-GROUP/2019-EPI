# 2019Freshman
2019届大一提交任务仓库
#include<stdio.h>
int  main()
{
	//整型变量
	int a = 10;
	//短整型变量
	short b = 20;

	//长整型变量
	long c = 30;
	//长长整型变量
	long long d = 40；

		printf("%d\n", a);
	//占位符 表示输出一个短整型数据
	printf("%hd\n", b)；
	//占位符 表示输出一个长整型数据
		printf("%ld\n", c);
	//占位符 表示输出一个长长整型数据
	printf("%lld\n", d);
	return 0；
   
}
#include<stdio.h>
int main()
{
	char grade;
	 scanf("% c", &grade);
	printf("Your score：");
	switch (grade)
	{
	case 'A' :printf("85~100\n");break;
	case 'B':printf("70~84\n");break;
	case 'C' :printf("60~69\n");break;
	case 'D':printf("<60\n");break;
	default:printf("enter data error!\n");
	}

	return 0;
}
#include<stdio.h>
int main()
{
	int a, n, Sn;  //a为一个数字，n表示a的位数,Sn是代数和
	while (n <= 5);
	{
		Sn = a;
		n++;

	}
	printf("Sn=%d\n", Sn);

	return 0;
}
#include <stdio.h>
int main()
{
	float a, b, c, t;
	scanf("%f,%f,%f", &a, &b, &c);
	
	if (a > b)
	{
		t = a;
			a = b;
			b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%5.2f,%5.2f,%5.2f\n", a, b, c);




	return 0;
}
#include<stdio.h>
 int main()
{
	int a[2][3] = { {1,2,3},{4,5,6} };
	int b[3][2], i, j;
	printf("array a:\n");
	for (i = 0;i <= 1;i++)             //处理a数组中的一行中各元素
	{
		for (j = 0;j <= 2;j++)              //处理a数组中某一列中各元素
		{
			printf("%5d", a[i][j]);        //输出a数组的一个元素
			b[j][i] = a[i][j];             //将a数组元素的值赋给b数组相应元素
		}
		printf("\n");
	}
	printf("array b:\n");                 //输出b数组各元素
	for (i = 0;i<= 2:i++);                //处理b数组中一行中各元素
	{
		for (j = 0;j <= 1, j++)           //处理b数组中一列中各元素
			printf("%5d", b[i][j]);       //输出b数组的一个元素
		printf("\n");
	}

	return 0;
}

#include<stdio.h>
int main()
{
	int i, j;
	int a[6][6] = { 1 }, { 1,1 }, { 1,2,1 }, { 1,3,3,1 }
	{1, 4, 6, 4, 1}, { 1,5,10,10,5,1 };
	printf("%d", i, j);
	printf("\n");
	return 0;
}
#include<string.h>
int main()
{
	char str[3][20];                     //定义二维字符数组

	char string[20];                     //定义一维字符数组，作为交换字符串时的临时字符数组
	int i;
	for (i = 0;i < 3;i++)
		gets(str[i]);                       //读入3个字符串，分别给str[0],str[i],str[2]
	if (strcmp(str[0], str[1] > 0))
		strcpy(string, str[0]);
	else
		strcpy(string, str[1]);
	if (strcmp(str[2], string) > 0)
		strcpy(string, str[2]);
	printf("\nthe largest string is:\n%s\n", string);
	return 0;


}

{
	int max4(int a, int b, int c, int d);
	int a, b, c, d, max;
	printf("Please enter 4 interger numbers:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	max = max4(a, b, c, d);
	printf("max=%d\n", max);
	return 0;
}

int max(int a, int b, int c, int d)
{
	int max2(int a, int b);
	int m;
	m = max2(a, b);
	m = max2(m, c);
	m = max2(m, d);
	return(m);


}


int max2(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;

}

#include<stdio.h>
 int main()
{
	int a[2][3] = { {1,2,3},{4,5,6} };
	int b[3][2], i, j;
	printf("array a:\n");
	for (i = 0;i <= 1;i++)             //处理a数组中的一行中各元素
	{
		for (j = 0;j <= 2;j++)              //处理a数组中某一列中各元素
		{
			printf("%5d", a[i][j]);        //输出a数组的一个元素
			b[j][i] = a[i][j];             //将a数组元素的值赋给b数组相应元素
		}
		printf("\n");
	}
	printf("array b:\n");                 //输出b数组各元素
	for (i = 0;i<= 2:i++);                //处理b数组中一行中各元素
	{
		for (j = 0;j <= 1, j++)           //处理b数组中一列中各元素
			printf("%5d", b[i][j]);       //输出b数组的一个元素
		printf("\n");
	}

	return 0;
}
#include<stdio.h>
int main(void)
{
	int age(int  n);
	printf("NO.5,age:%d\n", age(5));
	return 0;
}
int age(int n)
{
	int c;
	if (n == 1)
		c = 10;
	else
		c = age(n - 1) + 2;
	return(c);
}
#include<stdio.h>
int main()
{
	int i, a[10];
	for (i = 0;i <= 9;i++)   //对数组元素a[0]~a[9]赋值
		a[i] = i;
	for (i = 9;i = 0;i--)         //输出a[9]~a[0]共10个数组元素
		printf("%d", a[i]);
	printf("\n");
	return 0;
}
