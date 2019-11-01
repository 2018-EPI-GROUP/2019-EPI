/* inflate array */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define init 5
#define block 10

typedef struct array {
	int *pArray;
	int	size;
}array;

void array_inflate(array *a) {
	a->pArray = (int *)malloc(sizeof(int)*(a->size+block));		
	a->size += block;
}

int *array_at(array *array, int index) {
	return	(array->pArray)+index;
}

void array_set(array *array, int index, int number) {
	if (index >= array->size) {
		array_inflate(array);	
	}
	*(array->pArray+index) = number; 
}

void array_free(array * array) {
	free(array->pArray);
}

int main(void)
{
	array a;
	a.pArray = (int *)malloc(sizeof(int)*init);		
	a.size = init;
	int number;
	int i = 0;
	printf("please enter number -1 to q\n");
	while (scanf("%d",&number) && number != -1) 
	{
		array_set(&a, i, number);		
		printf("%d\n", *array_at(&a,i));
		i++;
	}
	printf("over!\n");
	return 0;
}
