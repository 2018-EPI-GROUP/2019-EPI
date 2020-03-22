#include <stdio.h>
#include<iostream>

int isswitch (char* a, int i) {
	if ((a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') && (a[i + 1] != 'a' && a[i + 1] != 'e' && a[i + 1] != 'i' && a[i + 1] != 'o' && a[i + 1] != 'u'))
		return 1;
	if ((a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u') && (a[i + 1] == 'a' || a[i + 1] == 'e' || a[i + 1] == 'i' || a[i + 1] == 'o' || a[i + 1] == 'u'))
		return 1;
	return 0;
}

int main(void) {
	int i, res = 0, tem = 0;
	char a[101];
	scanf("%s", a);
	if (a[0] == 'a' || a[0] == 'e' || a[0] == 'i' || a[0] == 'o' || a[0] == 'u')
		printf("no");
	else
		for (i = 0; i < 99; i++) {
			if (res == 3) {
				printf("yes");
				tem = 1;
				break;
			}
			res += isswitch(&a[0], i);
		}
	if(tem == 0)
		printf("no\n");
	printf("%d", res);
	system("pause");
	return 0;
}
