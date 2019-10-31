#include<stdio.h>
int Fib(int n);
int main()
{
	int n;
	printf("请输入你想要输出的项：  ");
	scanf_s("%d", &n);

	printf("项为：\n");
	for (int i = 1; i <= n; i++)
	{
		int ret = Fib(i);
		printf(" %d\t", ret);
	}

	return 0;
}
int Fib(int n)
{
	if (n == 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}

	return Fib(n - 1) + Fib(n - 2);
}























	/*int a[5] = { 8, 3, 4, 6, 2 };
	int t;


	for (int i = 1; i <5; i++)
	{
		
		for (int j = 4; j>=i; j--)
		{
			
			if (a[j] < a[j - 1])
			{
				t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", a[i]);

	}*/



	//int a[5] = {11,23,22,23,1};
	//int max;
	//

	//for (int i = 0; i < 4; i++)
	//{		
	//	max = a[i];
	//	int t=i;
	//	for (int j = i + 1; j < 5; j++)
	//	{
	//		if (max < a[j])
	//		{
	//			max = a[j];//第j项最大
	//			t = j;
	//		}			
	//	}
	//	a[t] = a[i];//当前项 给 第j项
	//	a[i] = max;//最大值给当前项
	//	
	//}

	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d\t", a[i]);
	//}


	//int i = 1, sum = 0;
	//while (i < 10)
	//{
	//	sum = sum + 1;
	//	i++;
	//}
	//	
	//printf("i=%d,sum=%d",i, sum);
	/*int x;
	x = 5 > 1 + 2 && 2 || 2 * 4 < 4 - !0;
		printf("%d", x);*/
	/*
		int i, j, a = 0;
		for (i = 0; i<2; i++)
		{
			for (j = 0; j<4; j++)
			{
				if (j % 2)break;
				{
					a++;
				}
			}
			a++;
		}
		printf("%d\n", a);*/
	






//
//	return 0;
//}





































//{
//	int n;
//	printf("请输入你想要输出的项：  ");
//	scanf_s("%d", &n);
//
//	printf("项为：\n");
//	for (int i = 1; i <= n; i++)
//	{		
//		int ret = Fib(i);
//		printf(" %d\t",ret);
//	}
//	
//	return 0;
//}
//int Fib(int n)
//{
//	if (n == 1)
//	{
//		return 0;
//	}
//	if (n == 2)
//	{
//		return 1;
//	}
//	
//	return Fib(n - 1) + Fib(n - 2);
//}


//{
//	int n;
//	printf("请输入你想要的项数：\n");
//	scanf_s("%d", &n);
//	
//	for (int i = 1; i <= n; i++)
//	{
//		int ret = Fib(i);
//		printf("%d\t", ret);
//	}
//	return 0;
//
//
//}
//int Fib(int n)//递归
//{
//	if (n == 1)
//	{
//		return 0;
//	}
//	if (n == 2)
//	{
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
