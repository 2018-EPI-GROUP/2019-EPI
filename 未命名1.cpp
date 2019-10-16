#include"stdio.h"
#include"math.h"
main()
{
	int i,j,t;
	for(i=3,i<=100,i++)
	{
		t=sqrt(i);
		for(j=2,j<=t,j++)
			if(i%j==0)
			break;
	}
}
