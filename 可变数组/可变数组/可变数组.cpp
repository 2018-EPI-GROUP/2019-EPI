#include"array.h"
#include<stdio.h>
#include<stdlib.h>

/*
typedef struct {
	int *array;
	int size;
}Array;
*/

int BLOCK_SIZE = 20;

Array array_create(int init_size)
{
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int)*a.size);
	return a;
}

void array_free(Array *a)
{
	free(a->array);
	a->array = NULL;
	a->size = 0;
}

//封装  ->  保护函数，易于升级
int array_getsize(const Array *a)
{
	return a->size;
}

int *array_at(Array *a, int index)
{
	if (index >= a->size) {
		array_inflate(a, (index/BLOCK_SIZE+1)*BLOCK_SIZE - a->size);
	}
	return &(a->array[index]);
}

int array_getnum(Array *a, int index)
{
	return a->array[index];
}

void array_set(Array *a, int index ,int value)
{
	a->array[index] = value;
}

void array_inflate(Array *a, int more_aize)
{
	int *p = (int*)malloc(sizeof(int)*(a->size + more_aize));
	int i;
	for (i = 0; i < a->size + more_aize; i++) {
		p[i] = a->array[i];
	}
	free(a->array);
	a->array = p;
	a->size += more_aize;
}

int main(void)
{
	Array a = array_create(5);

	*array_at(&a, 0) = 50;

	printf("%d\n", *array_at(&a,0) );

	printf("Before scanf a.size = %d\n", a.size);

	int i , cnt = 0;

	while ( scanf("%d", array_at(&a, cnt++)) ) {
		;
	}

	for (i = 0; i < a.size; i++) {
		printf("a->array[%d] = %d\n", i, a.array[i]);
	}

	printf("a->size = %d\n", a.size);

	array_free(&a);

	return 0;
}


