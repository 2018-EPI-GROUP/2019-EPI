#include<stdio.h>
max(int b[][4])
{
	int i,
	    j,
	    k,
	    max1;
	max1=b[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		if(b[i][j]>max1)
		{
			max1=b[i][j];
		 } 
		
	 } 
	  return (max1);
}

main()
{
	int m,
	    a[3][4]={5,16,22,23,45,56,78,12,24,35,45,9};
	m=max(a);
	printf("max is %d",m);
}
