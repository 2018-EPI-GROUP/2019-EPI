#include<stdio.h>
#include<time.h>
#include<stdlib.h>

	
int main01 (void)
{
	for( int i=1; i<5; i++ )
	{
		for( int j=1; j<5; j++ )	
		{
			for( int k=1; k<5; k++ )		
			if ( i!=j && i!=k && k!=j )	
				printf("%d\t%d\t%d\n", i, j, k);	
		}	
	}
	return 1;
}

int main (void)
{
	int a,b,c;
	srand( (unsigned)time(NULL) );	
	while(1)
	{
		b = rand()%4+1;	
		c = rand()%4+1;	
		a = c-b;

		if ( c>b && a!=b )
			break;	
	}
	printf("%d %d %d", a, b, c);

	return 0;
}
