#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,flag;
	float x1,x2;
	printf("������һԪ���η��̵�ϵ��\n");
	scanf("%d%d%d",&a,&b,&c);
	flag=b*b-4*a*c;
	if(flag>0)
	{
		x1=(-b-sqrt(flag))/2*a;
		x2=(-b+sqrt(flag))/2*a;
		printf("���̵�������Ϊ\n");
		printf("%f %f",x1,x2);
	}
	else if(flag==0)
	{
		x1=x2=(-b+sqrt(flag))/2*a;
		printf("���̵�һ����Ϊ\n");
		printf("%f",x1);
	}
	else if(flag<0)
	{
		printf("�÷����޽�\n");
	}
	return 0;
 } 
