#include<stdio.h > 
#include<math.h>
int main()
{
	double a,b,c,disc,x1,x2,q,p;
	scanf("%lf%lf%lf",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc<0)
		printf("�޽�");
	else
		{
		p=-b/(2*a);
		q=sqrt(disc) /(a*2);
		x1=p+q;
		x2=p-q;
		printf("����:\nx1=%7.2f\nx2=%7.2f\n",x1,x2);
  		}
	return 0;
 } 
