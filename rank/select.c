#include <stdio.h>

void rank (int *a, int n)
{
	for (int i = 0; i<n-1; i++) {
		int min = a[i];
		int minIndex = i;
		for (int k = i+1; k<n; k++) {
			if (a[k] < min) { 
				min = a[k];	
				minIndex = k;
			}
		}
		a[minIndex] = a[i];
		a[i] = min;
	}	
}

int main (void)
{
	int a[7] = {42, 31, 3, 89, 2, 21, 66};
	int n = sizeof(a)/sizeof(a[0]);
	rank (a,n);
	for (int i=0; i<n; i++) {
		printf("%d\t", a[i]);	
	}
	printf("\n");
	return 0;
}
