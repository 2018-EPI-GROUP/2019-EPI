#include"head.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<math.h>
using namespace std;

#define EPS 1e-6

double a[5];		//���������

bool iszero(double n);
bool count24(double  a[], int n);

int main()
{
	int i;

	cin >> a[0] >> a[1] >> a[2] >> a[3];

	cout << endl;

	if (count24(a, 4))
		cout << "���Լ����24" << endl;
	else
		cout << "�����Լ����24" << endl;

	system("pause");

	return 0;
}

bool iszero(double n)
{
	return fabs(n) <= EPS;
}

bool count24(double  a[], int n)
{										//���������n��������24
	if (n == 1) {

		if ( iszero(a[0] - 24) )
			return true;
									//�߽�����
		else
			return false;
	}

	//ѡ������������������������������
	//Ȼ��������Ľ����ʣ�µ�n-2��������24

	double b[5];		//�����ʱ����

	for (int i = 0; i < n - 1; i++) {		
												//��ѡ��������,�ö���ѭ��
		for (int j = i + 1; j < n; j++) {

			int m = 0;
										
			for (int k = 0; k < n; k++) {

				if (k != i && k != j)			//��ʣ��n-2�����浽b������
					b[m++] = a[k];
			}

			//�ֱ��о�+-*/����������ݹ��������

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