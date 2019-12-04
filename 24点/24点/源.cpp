#include"head.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<math.h>
using namespace std;

#define EPS 1e-6

double a[5];		//输入的数据

bool iszero(double n);
bool count24(double  a[], int n);

int main()
{
	int i;

	cin >> a[0] >> a[1] >> a[2] >> a[3];

	cout << endl;

	if (count24(a, 4))
		cout << "可以计算出24" << endl;
	else
		cout << "不可以计算出24" << endl;

	system("pause");

	return 0;
}

bool iszero(double n)
{
	return fabs(n) <= EPS;
}

bool count24(double  a[], int n)
{										//用数组里的n个数计算24
	if (n == 1) {

		if ( iszero(a[0] - 24) )
			return true;
									//边界条件
		else
			return false;
	}

	//选出两个数，并对这两个数进行运算
	//然后用算出的结果和剩下的n-2个数计算24

	double b[5];		//存放临时数据

	for (int i = 0; i < n - 1; i++) {		
												//先选出两个数,用二重循环
		for (int j = i + 1; j < n; j++) {

			int m = 0;
										
			for (int k = 0; k < n; k++) {

				if (k != i && k != j)			//将剩余n-2个数存到b数组里
					b[m++] = a[k];
			}

			//分别列举+-*/的情况，并递归调用自身

			b[m] = a[j] + a[i];

			if (count24(b, m + 1))
				return true;

			b[m] = a[j] - a[i];

			if (count24(b, m + 1))
				return true;

			b[m] = a[i] - a[j];

			if (count24(b, m + 1))
				return true;

			b[m] = a[j] * a[i];

			if (count24(b, m + 1))
				return true;
			
			if (!iszero(a[i])) {
				b[m] = a[j] / a[i];

				if (count24(b, m + 1))
					return true;
			}

			if (!iszero(a[j])) {
				b[m] = a[i] / a[j];

				if (count24(b, m + 1))
					return true;
			}
		}
	}
	return false;
}