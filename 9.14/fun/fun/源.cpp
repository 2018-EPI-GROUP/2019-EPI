#include<stdio.h>

int main()
{
	return 0;
}

//������ ʧ�ܡ���������
//int Sum(int m, int n);
//int main()
//{
//	int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//
//	Sum(3, 3);
//	printf("%d\n", Sum(3, 3));
//	return 0;
//}
//
//int Sum(int m, int n)
//{
//	if (m==0&&n==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return Sum(2, 2) + Sum((m - 1), (n - 1));
//	}
//}
//
//int Sum(int m);
//int main()
//{
//	int n;
//	printf("������һ������\n");
//	scanf_s("%d",&n);
//
//	Sum(n);
//	printf("%d", Sum(n));
//	return 0; 
//}
//
//int Sum(int m)
//{
//	//9999���µļ���
//	int a, b, c, d;
//	a = m / 1000;
//	b = m / 100 % 10;
//	c = m / 10 % 10;
//	d = m % 10;
//
//	return a + b + c + d;
//}
//
//

//int Num(int m);
//int main()
//{
//	int n=0;
//	printf("��������Ҫ�������� ");
//	scanf_s("%d", &n);
//
//	Num(n);
//	printf("�����Ϊ�� %d\n", Num(n));
//
//
//	return 0;
//}
//int Num(int m)
//{
//	if (m == 0)
//	{
//		return 0;
//	}
//	if (m == 2 || m == 3)
//		return 1;
//	else
//	{			
//		return  Num(m - 1)+Num(m-2);
//	}
//}
////0 1 1 2 3 5 8 13 21 34 55 89 144
////1 2 3 4 5 6 7 8  9  10 11 12 13  14


//��ӡ����
//int Time(int m);
//int main()
//{
//	printf("��Ҫ��ӡ���Σ�\n");
//	int n;
//	scanf_s("%d", &n);
//	Time(n);
//
//	return 0;
//}
//int Time(int m)
//{
//	if (m<1)
//	{
//		return 0;
//	}
//	else
//	{
//		printf("�����͵ݹ� get  ������!\n");//hello world
//		return Time(m - 1);
//	}
//}



//int Fact(int m);
//int main()
//{
//	int n;
//	printf("����һ�����Ľ׳ˡ�\n");
//	printf("������������� ");
//	scanf_s("%d", &n);
//
//	Fact(n);
//	printf("%d\n", Fact(n));
//	return 0;
//}
//int Fact(int m)
//{
//	if (m ==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return m*Fact(m - 1);
//	}
//}


//int Max(int a, int b);
//int main()
//{
//	int a, b;
//	printf("��������Ҫ�Ƚϵ���������");
//	scanf_s("%d%d", &a, &b);
//	Max(a, b);//����int max=Max(a, b);
//
//	printf("�ϴ����Ϊ�� %d",Max(a,b));
//
//	return 0;
//}
//int Max(int a, int b)
//{
//	if (a > b)	
//		return a;
//	else
//		return b;
//}




