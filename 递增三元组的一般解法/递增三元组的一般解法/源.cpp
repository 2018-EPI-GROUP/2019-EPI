#include <stdio.h>
#include<iostream>
int find(int* a, int i, int n) {
	int tem, tem2;
	for (tem = 0; tem < i; tem++) {
		if (a[tem] < a[i]) {
			for (tem2 = i + 1; tem2 < n; tem2++) {
				if (a[tem2] > a[i])
					return 1;
			}
		}
	}
	return 0;
}
int main(void) {
	int i, n, res = 0, tem = 0;			//n->数组长度, res->已发现的递增三元组
	int a[1001];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 1; i < n - 1; i++)
		res += find(&a[0], i, n);
	printf("%d", res);
	system("pause");
	return 0;
}