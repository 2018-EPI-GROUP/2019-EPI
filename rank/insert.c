#include <stdio.h>

void rank(int *a, int n)
{
	for (int i = 1; i < n; i++) {
		int temp = a[i];	
		int j = i-1;
		for (j; j >= 0 && temp < a[j]; j--) {
				a[j+1] = a[j];
		}
		a[j+1] = temp;
		for (int i = 0; i<n; i++) {
			printf("%d\t", a[i]);
		}
		printf("\n");
	}

}			

int main(void)
{
	int a[7] = {21, 3 ,65, 23, 4, 47, 88};
	for (int i = 0; i<sizeof(a)/sizeof(a[0]); i++) {
		printf("%d\t", a[i]);
	}
	printf("\n");
	printf("\n");
	rank(a, sizeof(a)/sizeof(a[0])) ;	
	printf("\n");
}
