#include<stdio.h>
int main(void)
{
	int n , hh , mm , flag;
	int a[10] = {6,2,5,5,4,5,6,3,7,6};
	flag = 0;
	scanf("%d",&n);
	for( hh = 0 ; hh <= 24 ; hh++ )
		{for ( mm = 0 ; mm <= 60 ; mm++ )
			{if(a[hh%10] + a[hh/10] + a[mm%10] + a[mm/10] == n)
				{printf("%02d:%02d\n", hh , mm );
				flag=1;
				}
			}
		}
	if(flag ==0)
		{printf("Error:Invalied input");}
		
	return 0;
}
