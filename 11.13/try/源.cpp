#include<stdio.h>


int Fun(int n, int m)//��n�ŵ�m��
{
	if (n == m||m==1)//���ұߵ�
	{
		return 1;
	}
	else
	{
		return Fun(n - 1, m - 1) + Fun(n - 1, m);
	}
}
int main()
{
	int nums = 0;
	int n;
	int m;
	printf("�����������ӡ��������");
		scanf("%d", &nums);
	for (n = 1; n <= nums; n++)
	{
		for (int i = 0; i<nums - n; i++)
		{
			printf(" ");
		}
		for (m = 1; m <= n; m++)
		{
			printf(" %d", Fun(n, m));
		}
		printf("\n");
	}
	




	return 0;
}








//#include<stdio.h>
//
//
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j <9-i ; j++)
//		{
//			printf(" ");//����ÿ��ǰ��ӡһ���ո�
//		}
//		for (int b = 1; b <= i+1; b++)
//		{
//			if (i == 9||i==0||i==1)//��һ�ź͵ڶ��ź����һ��ȫ��ӡ����i+1��=��
//			{
//				printf("* ");
//			}
//			else if (b==1||b==i+1)//��ӡ��һ����ÿ�����һ��
//			{
//				printf("* ");
//			}	
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//	
//	printf("\n");
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j <i; j++)
//		{
//			printf(" ");
//		}
//		for (int b = 0; b < 4-i; b++)
//		{
//			printf("* ");
//		}
//		
//		printf("\n");
//	}
//
//
//
//
//
//	return 0;
//}








//#include<stdio.h>
//
//int main()
//{
//	int nums[] = { 2, 4, 5, 7, 13 };
//	int target = 12;
//	int i, j;//��¼
//	int n = sizeof(nums) / nums[0];//����Ԫ�ظ���
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (i<j)//�����ظ��������������ͬ����Ԫ�ء�
//			{
//				if (nums[i] + nums[j] == target)
//				{
//					printf("[%d,%d]\t", i+1, j+1);
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//
//

//
//
//

//����
//#include<stdio.h>
//
//
//int main()
//{
//
//	
//
//	int a[50];//��������
//	
//	//printf("������һ������");
//	//scanf("%d", &n);
//	for (int i = 1; i < 1000; i++)
//	{
//		for (int k = 0; k<50; k++)//��������
//			a[k] = 0;
//
//		int sum = 0;
//		int count = 0;//���Ӹ���
//		for (int j = 1; j <i; j++)//�ҵ�factors
//		{
//			
//			if (i %j == 0)
//			{
//				a[count] = j;
//				count++;
//			}
//		}
//		for (int h = 0; h < count; h++)
//		{
//			if (a[h] == 0)
//				break;
//			else
//			    sum += a[h];
//		}
//		if (sum == i)
//		{
//			printf("%d its factor are   ", i);
//			for (int n = 0; n < count;n++)
//			{
//				if (a[n] == 0)
//					break;
//				printf(" %d", a[n]);
//			}
//			printf("\n");
//		}		
//	}
//
//
//
//	return 0;
//}

/*

#include <stdio.h>
#define MAXSIZE 50
#define RANGE 1000
void fun(int n,int arr[])//�ж�n�Ƿ�Ϊ����
{
	int i,sum=0,count=0;
	for(i=1;i<n;i++)//�����洢n������������
		if(n%i==0) 
		{
			arr[count]=i;
			count++;
		}

	for(i=0;i<MAXSIZE;i++)
	{
		if(arr[i]!=0) 
			sum+=arr[i];//�������
		else break;//������Ԫ��Ϊ0ʱ�����ۼ�
	}

	if(n==sum)
	{	
		printf("%d,Its factors are  ",n);
		for(i=0;;i++)
		{
			if(arr[i]==0) break;//������Ԫ��Ϊ0ʱ������ӡ
			printf("%4d",arr[i]);
		}
		putchar('\n');
	}
}

void main()
{
	int n,arr[MAXSIZE],j;
	for(n=1;n<RANGE;n++)	
	{
		for(j=0;j<MAXSIZE;j++)//��������
			arr[j]=0;
		fun(n,arr);//�ж�n�Ƿ�Ϊ����
	}
}*/