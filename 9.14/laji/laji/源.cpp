#include<stdio.h>
 

int main()
{
	//99乘法表
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (j <= i)
			{
				printf("%d*%d=%d\t", j, i, i*j);
			}	
		}
		printf("\n");
	}
















	/*puts("I LOVE China");*/




















	/*char a[10] = { 'I', 'L', 'o', 'v', 'e', 'C', 'h', 'i', 'n', 'a' };
	
	for (int i = 0; i < 10; i++)
	{
		printf("%c", a[i]);

	}*/

















	//int a[5];
	//for (int i = 0; i < 5; i++)
	//{
	//	scanf_s("%d", &a[i]); 
	//}
	//int sum = 0;

	//for (int i = 0; i < 5; i++)
	//{
	//	sum += a[i];
	//}
	//printf("总和=%d\n", sum);
	////平均值=总和除以10
	//float avg = sum / 5.00;
	//printf("平均数=%.2f", avg);




	//求和
	/*int sum=0;

	for (int i = 0; i < 5; i++)
	{
		sum += a[i];
	}
	printf("%d\n", sum);
*/
	/*int max = a[0];

    for (int i = 0; i < 5; i++)
	{
		if (max > a[i])
		{
			max = a[i];
		}			
	}
	printf("最大(xiao)的数是： %d", max);
	*/


	
















	/*int i = 1, sum = 0;
	while (i < 10)
	{
		sum = sum + i;
		i++;
	}
		
		printf("%d %d", i, sum);*/
 




	/*int sco;//
	printf("请输入你的成绩:\n");
	scanf_s("%d", &sco);
	if (sco >= 90 && sco < 100)
	{
		printf("你的等级为：A\n");
	}
	if (sco >= 80 && sco < 89)
	{
		printf("你的等级为：B\n");
	}
	if (sco >= 70 && sco < 79)
	{
		printf("你的等级为：C\n");
	}
	if (sco >= 60 && sco < 69)
	{
		printf("你的等级为：D\n");
	}
	if (sco <60)
	{
		printf("你的等级为：E\n");
	}

*/

	//int sum = 0;
	//int h = 1;
	//while (h <= 100)
	//{
	//	sum = sum + h;
	//	h++;	
	//}
	//printf("%d\n", sum);



	// 累加
	/*int sum =0;
	for (int  i = 1; i<= 10; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);*/ 


	//正三角
	/*for (int i = 0; i < 10; i++)
	{
		for (int m = 0; m < 9-i; m++)
		{
			printf(" ");
		}
		for (int j = 0; j < i+1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
*/


	//倒三角
	/*for (int i = 0; i < 10; i++)
	{
		for (int m = 0; m < i + 1; m++)
		{
			printf(" ");
		}
		for (int j = 0; j < 10-i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}*/
	//左直角
	/*for (int i = 0; i < 10; i++)
	{
	
	       for (int j = 0; j < 10-i; j++)
	{
	               printf("* ");
	}
	             printf("\n");
	}*/
	

	//右三角
/*
	for (int i = 0; i < 10; i++)
	{
		for (int m = 0; m < i; m++)
		{
			printf("  ");
		}
		for (int j = 0; j < 10 - i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}*/
	//菱形（正三角+倒三角）
	/*for (int i = 0; i < 10; i++)
	{
		for (int m = 0; m < 9 - i; m++)
		{
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 0; i < 10; i++)
	{
		for (int m = 0; m < i + 1; m++)
		{
			printf(" ");
		}
		for (int j = 0; j < 10 - i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
*/

	//左下三角
	/*for (int i = 0; i < 10; i++)
	{
		
		for (int j = 0; j < i+1; j++)
		{
			printf("* ");
		}
		for (int m = 0; m < 10-i; m++)
		{
			printf(" ");
		}
		printf("\n");
	}*/

	//右下三角
	/*for (int i = 0; i < 10; i++)
	{
		for (int m = 0; m < 10 - i; m++)
		{
			printf("  ");
		}
		for (int j = 0; j < i + 1; j++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
*/
//最小公倍数
   //int a, b;
   //int max;
   //printf("请输入两个数：\n");
   //scanf_s("%d%d", &a, &b);
   //
   //if (a < b)//将最大的数给b
   //{	  
	  // max = a;
	  // a = b;
	  // b = max;
   //}
   //for (int i = b;b>0; i++)
   //{
	  // if (i%a == 0 && i%b == 0)
	  // {
		 //  printf("这两个数的最小公倍数为：%d\n", i);
		 //  break;
	  // }
   //}





	return 0;
}