#include<stdio.h>
#include<math.h>
int main()
{
	int sign=1;
	double pi=0.0,n=1.0,term=1.0;
	while(fabs(term)>=1e-8)//检查term是否小于10^-6
/*text 10^-6  0.0167s
		10^-8* 0.256s 计算量大了很多*/
	{ pi=pi+term;
	 n=n+2;
	 sign=-sign;
	 term=sign/n;
    }
pi=pi*4;
printf("pi=%10.8lf\n",pi);
return 0;
}
