#include<stdio.h>
#include<math.h>
int main()
{
	int n,k,i,m=0;
	for(n=101;n<=200;n=n+2)
	//偶数一定不是素数，所以一次加2 
		{k=sqrt(n);
		for(i=2;i<=k;i++)
		 if(n%i==0)break;
		 if(i>=k+1)
		 {printf("%d\t",n); 
		 m=m+1;}
		 //控制一行显示10个数 
		 if(m%10==0) printf("\n");
		}	
	printf("\n");
	return 0; 
}
