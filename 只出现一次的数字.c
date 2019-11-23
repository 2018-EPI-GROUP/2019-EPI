#include<stdio.h>
int main(void)
{
	int a[20] , book[20];
	int n, i = 0, j , tem ;
	for (j = 0; j < 20; j++) {
		book[j] = 0;                   //初始化
	}
	while (scanf("%d,", &a[i])) {
		i++;
	}
	tem = i ;  //一共有tem个数
	for (i = 0; i < tem; i++) {
		n = a[i];
		book[n]++;
	}
	for (i = 0; i < tem; i++) {
		if (book[i] == 1) {
			printf("%d", i);
		}
	}
	return 0;
}

//In leetcode
int singleNumber(int* nums, int numsSize) {
	int book[20];    //a[20]-> nums
	int n, i;
	for (i = 0; i < 20; i++) {
		book[i] = 0;                   //初始化
	}                                  //一共有tem个数  
	for (i = 0; i < numsSize; i++) {
		book[nums[i]]++;
	}
	for (i = 0; i < numsSize; i++) {
		if (book[i] == 1) {
			return i;
		}
	}
	return 0;
}
