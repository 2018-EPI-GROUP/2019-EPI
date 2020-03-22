#include <stdio.h>
#include<stdlib.h>
#include<iostream>

void grow(char **a, int n, int m) {
	int i, j;
	int **b = (int**)malloc(sizeof(int*)*n);		//分配行首地址
	for (i = 0; i < n; i++)
		b[i] = (int*)malloc(sizeof(int)*m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			b[i][j] = 0;					//初始化
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (a[i][j] == 'g')
				b[i][j] = 1;				//记录长草的地方
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (b[i][j] == 1) {
				if (i == 0 && j == 0) {
					a[i][j + 1] = 'g';
					a[i + 1][j] = 'g';
				}
				else if (i == 0 && j == m - 1) {
					a[i][j - 1] = 'g';
					a[i + 1][j] = 'g';
				}
				else if (i == n - 1 && j == 0) {
					a[i][j + 1] = 'g';
					a[i - 1][j] = 'g';
				}
				else if (i == n - 1 && j == m - 1) {
					a[i][j - 1] = 'g';
					a[i - 1][j] = 'g';
				}
				else if (j == 0) {
					a[i][j + 1] = 'g';
					a[i + 1][j] = 'g';
					a[i - 1][j] = 'g';
				}
				else if (i == 0) {
					a[i][j + 1] = 'g';
					a[i][j - 1] = 'g';
					a[i + 1][j] = 'g';
				}
				else if (j == m - 1) {
					a[i][j - 1] = 'g';
					a[i + 1][j] = 'g';
					a[i - 1][j] = 'g';
				}
				else if (i == n - 1) {
					a[i][j + 1] = 'g';
					a[i][j - 1] = 'g';
					a[i - 1][j] = 'g';
				}
				else {
					a[i][j + 1] = 'g';
					a[i][j - 1] = 'g';
					a[i + 1][j] = 'g';
					a[i - 1][j] = 'g';
				}
			}
		}
	}
	for (i = 0; i < n; i++)
		free(b[i]);
	free(b);
	return;
}

int main(void) {
	int i, j, n, m, k, res = 0;
	scanf("%d %d", &n, &m);
	getchar();
	char **a = (char**)malloc(sizeof(char*)*n);		//分配行首地址
	for (i = 0; i < n; i++)
		a[i] = (char*)malloc(sizeof(char)*m);		//分配具体地址
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			scanf("%c", &a[i][j]);
		getchar();
	}
	scanf("%d", &k);
	for (i = 0; i < k; i++)
		grow(a, n, m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%c", a[i][j]);
		printf("\n");
	}
	for (i = 0; i < n; i++)
		free(a[i]);
	free(a);
	system("pause");
	return 0;
}