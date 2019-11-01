#include <stdio.h>

void rank(int *a, int n)
{
	for (int gap = 2; gap > 0; gap--) {
		for (int i = gap; i < n; i+=gap) {
			int temp = a[i];		
			int k = i - gap;
			for (k; k>=0 && temp<a[k]; k-=gap) {
				a[k+gap] = a[k];	
			}
			a[k+gap] = temp;
			for (int i = 0; i<n; i++) {
				printf("%d\t", a[i]);	
			}	
			printf("\n");
	    }
	}
}

int main (void)
{
	int a[7] = {25, 4, 73, 9, 89, 45, 54};
	int n = sizeof(a)/sizeof(a[0]);
	for (int i = 0; i<n; i++) {
		printf("%d\t", a[i]);	
	}
	printf("\n");
	rank(a, n);
	for (int i = 0; i<n; i++) {
		printf("%d\t", a[i]);	
	}
	printf("\n");
	return 0;
}
