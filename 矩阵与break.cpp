#include<stdio.h>
int main()
{
	int i,j,n=0;
	for(i=1;i<=4;i++)
		for(j=1;j<=5;j++,n++)
			{if(n%5==0)printf("\n");
				if(i==3&&j==1)break;
				//[Error] break statement not within loop or switch
				/*********
								��Ҫ��FOR����д;;;;;;;;
												********/ 
			printf("%d\t",i*j);
			}
		printf("\n");
	return 0;
}
