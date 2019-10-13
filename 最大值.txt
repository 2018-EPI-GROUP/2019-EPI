#include <stdio.h>
#pragma warning(disable : 4996)
		int main()
		 {
			int arr[10];
			for (int i = 0; i < 10; i++)
			{
				scanf("%d", &arr[i]);
			}
			int max = 0;
			for (int i = 0; i < 10; i++)
			{
				if (arr[i] > max)
				{
					max = arr[i];
					
				}
			}
			printf("%d\n", max);

		}