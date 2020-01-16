#include"head.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
#define MAX 101
int n, a[MAX][MAX];

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int MaxSum(int i, int j)
{
	if (i == n)
		return a[i][j];
	else
		return max(MaxSum(i + 1, j), MaxSum(i + 1, j + 1)) + a[i][j];
}

int main()
{
	int i, j, tem;
	cin >> n;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			cin >> a[i][j];
		}
	}
	cout << "数字之和最大路径是"<< MaxSum(1, 1) <<endl;
	system("pause");
	return 0;
}