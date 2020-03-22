#include <stdio.h>

int isup(int i) {
	int a, b, c, d, e, f;			//个,十,百,千,万,十万
	if (i == 1000000)
		return 0;
	a = i % 10;
	b = (i % 100 - a)/10;
	c = (i % 1000 - a - b * 10)/100;
	d = (i % 10000 - a - b * 10 - c * 100)/1000;
	e = (i % 100000 - a - b * 10 - c * 100 - d * 1000)/10000;
	f = (i % 1000000 - a - b * 10 - c * 100 - d * 1000 - e * 10000)/100000;
	if (a >= b && b >= c && c >= d && d >= e && e >= f)
		return 1;
	else
		return 0;
}

int main(void) {
	int i, n, res = 0;			
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		res += isup(i);
	}
	printf("%d", res);
	return 0;
}
