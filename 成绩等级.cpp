#include <stdio.h>
main()
{
	int x;
	printf("«Î ‰»Î≥…º®:");
	scanf("%d",&x);
	if(x<60)
	 printf("E");
	 else if(x<70) printf("D");
	 else if(x<80) printf("C");
	 else if(x<90) printf("B");
	 else if(x<=100) printf("A");
}
