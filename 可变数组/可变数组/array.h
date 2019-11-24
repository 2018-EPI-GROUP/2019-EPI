#ifndef __ARRAY_H__
#define __ARRAY_H__

typedef struct {
	int *array;
	int size;
}Array;

Array array_create(int init_size);
void array_free(Array *a);
int array_getsize(const Array *a);
int *array_at(Array *a, int index);
int array_getnum(Array *a, int index);
void array_set(Array *a, int index , int value);
void array_inflate(Array *a, int more_aize);

#endif // !__ARRAY_H__