#include<stdio.h>
#define PI 3.141592656
double t(int r)
{
   double s;
   s=PI*r*r;
   return(s);
 } 
 main()
 {
 	int r;
 	double a;
 	printf("������뾶\n");
 	scanf("%d",&r);
 	if(r<0)
 	printf("���󣬰뾶����Ϊ����");
	else 
 	{
	   a=t(r);
 	   printf("Բ�����Ϊ%lf\n",a);
    }
 }
