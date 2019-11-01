#include <stdio.h> 

int division(int *a, int n);

void rank(int *a, int left, int right)
{
	int base = a[0];
	int num = right+1;
	while (left != right) {
		while (right > 0 && left != right) {
			if (a[right] < base) {
					a[left] = a[right];
					break;
			}	
			right--;
		}
		while (left < num && left != right) {
			if (a[left] > base) {
				a[right] = a[left];	
				break;
			}	
			left++;	
		}
	}
	a[left] = base;
	division(a, left);
	division(a+left+1, num-right-1);
}

int division(int *a, int n)
{
	if (n <= 1)	
		return 0;
	rank(a, 0, n-1);	
}

int main (void)
{
	int a[7] = {1, 23, 51, 9, 41, 80, 2};	
	int n = sizeof(a)/sizeof(a[0]);
	for (int i = 0; i<n; i++) {
		printf("%d\t", a[i]);	
	}
	printf("\n");

	rank(a, 0, n-1);	
	for (int i = 0; i<n; i++) {
		printf("%d\t", a[i]);	
	}
	printf("\n");

	return 0;
}
