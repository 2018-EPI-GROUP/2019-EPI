#include <stdio.h>

int ans(int n,int i) {
	int a, res = 1, tem;			
	a = fabs(n - i);
	a--;
	for (tem = 2; tem <= a; tem++) {
		res *= tem;				// res = a!(½×³Ë)
	}
	return res;
}

int main(void) {
	int i, n, res = 0;			
	scanf("%d", &n);
	for (i = 1; i < n-1; i++) {		// i -> µÚ¶şÎ»
		res += ans(n,i);
	}
	res += n ;
	res %= 10000;
	printf("%d", res);
	return 0;
}
