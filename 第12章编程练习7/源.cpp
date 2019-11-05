#include<stdio.h>
#include<stdlib.h>
int* make_array(int elem, int val);
void show_array(const int ar[], int n);
int main(void)
{
	int* pa;
	int size;
	int value;

	printf("Enter the number of elements: ");
	while (scanf_s("%d", &size) == 1 && size > 0)
	{
		printf("Enter the initialization value: ");
		scanf_s("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elements(<1 to quit): ");
	}
	printf("Done.\n");
	return 0;
}
//设计make_array()和show_array()函数
int* make_array(int elem, int val)
{
	int a;
	int* pt;
	pt = (int*)malloc(elem * sizeof(int));
	for (a = 0; a < elem; a++)
	{
		pt[a] = val;
	}
	return pt;
}
void show_array(const int ar[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", ar[i]);
		if ((i + 1) % 8 == 0)
			printf("\n");
	}
	if (i % 8 != 0)
		printf("\n");
}