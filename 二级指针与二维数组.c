#include<stdio.h>

int main(void)
{
	int i, j, a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	
	int *p[3];                  //�������ָ�����飬��size����ÿ�������ά��
	
/*	int **pp = NULL;
	
	*pp = a[0];

	printf("%d ", *(*(pp + 1) + 2) );
*/
	for (i = 0; i < 3; i++) {
		
		p[i] = a[i];
	}
	for (i = 0; i < 3; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("%d ", *(*(p + i) + j) );
		}
		printf("\n");
	}
	return 0;

}
