#include<stdio.h>
int main(void)
{
	int a,b,R,P;
	int p[13] = { 0,13,44,72,103,133,164,194,225,256,286,317,347 };
	int r[13] = { 0,13,44,73,104,134,165,195,226,257,287,318,348 };
	scanf_s("%d", &a);
	R = ((a - 2000) / 4)+1;
	P = (a - 1997 - R);
	for (int i = 1; i < 13; i++)
	{
		if (a % 4 == 0)
		{
			b = r[i] + (R-1) * 366 + P * 365;
			if ((b - 2) % 7 == 0&&i!=0)
			{
				printf("%d年%d月13日\n", a, i);
			}
		}
		else if (a % 4 != 0)
		{
			int c;
			c = p[i] + R * 366 + (P - 1) * 365;
			if ((c - 2) % 7 == 0&&i!=0)
			{
				printf("%d年%d月13日\n", a, i);
			}
		}
	
	}
	getchar();
	return 0;
}