#include<stdio.h>
#include<math.h>
#define PI 3.14
main() 
{
	int r;
	double l,s;
	printf("������Բ�İ뾶\n");
	scanf("%d",&r);
	if(r<=0)
	printf("�뾶����Ϊ��������\n");
	if(r>0)
	{
		l=2*r*PI;
		s=PI*r*r;
		printf("��Բ���ܳ�Ϊ%4f\n���Ϊ%4f",l,s);
	 } 
 } 
