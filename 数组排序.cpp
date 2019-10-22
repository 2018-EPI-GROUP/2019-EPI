#include<stdio.h>
void main()
{
	int n[7] = {2,1,3,4,5,6,7};
	int a,
		b,
		c;
	for	( a = 0 ; a <= 6 ; ++a )
	{
		for ( b = 0 ; b < 6 ; ++b )
		{
			if ( n[b] > n[b+1] )
			{
				c = n[b+1];
				n[b+1] = n[b];
				n[b] = c;
			}
		}
	}
    for ( b = 0 ; b <= 6 ; ++b )
    {
    	printf ("%d\t", n[b]);
	}
}
}
