#include <stdio.h>
int main (void)
{
	int a ,b;
	printf("please enter two numbers\n");
	scanf("%d %d", &a, &b);		
	int cnt = 1;
	int min;
	while(1)
	{
		if(a*cnt % b == 0) {
			min = a*cnt;
			break;	
		}	
		cnt++;
	}
	cnt = 1;
	int max_com = 0;
	while(1) {
		if (cnt > a || cnt> b)	
				break;
		int a_cnt = a%cnt;
		int b_cnt = b%cnt;
		if ( !a_cnt && !b_cnt ) {
		 		max_com = cnt;
		}				
		cnt++;
	}	
	printf("Minimum common multiple :%d\n",min);	
	printf("Max common factor : %d\n", max_com);

	return 0;
}
