#include<stdio.h>
int main()
{
	int a,b,c;
	printf("�����һ����\n"); 
	scanf("%d",&a);
	printf("����ڶ�����\n");
	scanf("%d",&b);
	c=a*a+b*b;
	printf("ƽ����Ϊ%d",c);
	return 0;
}



#include<stdio.h>
int main()
{
	float r,c,s;
	printf("������뾶");
	scanf("%f",&r); 
	c=2*3.14*r;
	s=3.14*r*r;
	if(r>=0)
	{
		printf("���Ϊ%f���ܳ�Ϊ%f",s,c);
	}
	else
	{
		printf("�������������"); 
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int x,y;
	printf("������x\n");
	scanf("%d",&x);
	if(x>0)
	{
		y=2*x+1;
	}
	else if(x==0)
	{
		y=0;
	}
	{
		y=2*x-1;
	}
	printf("y��ֵΪ%d",y); 
	return 0;
}
#include<stdio.h>
int main()
{
	float a[4];
	float min;
	int i;
	printf("�������1����\n");
	scanf("%f",&a[0]);
	printf("�������2����\n");
	scanf("%f",&a[1]);
	printf("�������3����\n");
	scanf("%f",&a[2]); 
	printf("�������4����\n");
	scanf("%f",&a[3]);
	min=a[1];
	for(i=0;i<=3;i++)
	{
		if(a[i]<=a[i+1])
		{
			min=a[i];   
		}
	} 
	printf("��С����Ϊ%d",min);
	
	return 0;
}


#include<stdio.h>
int main()
{
	float x;
	if(x>0)
	{
		printf("y=3");
	}
	else if(x==0)
	{
		printf("y=5");
	}
	else if(x<0)
	{
		printf("y=1");
	}
	return 0;
}


#include<stdio.h>
float max(float a,float b)
{
	if(b-a)
	a=b;
	return a; 
}

int main()
{
	float a;
	float b;
	
	printf("�����һ����\n"); 
	scanf("%f",&a);
	printf("����ڶ�����\n");
	scanf("%f",&b);
	printf("���ֵΪ%f",max(a,b));
	return 0;
}


#include<stdio.h>
float max(float a,float b)
{
	if(b-a)
	a=b;
	return a; 
}

int main()
{
	float a;
	float b;
	
	printf("�����һ������\n"); 
	scanf("%f",&a);
	printf("����ڶ�������\n");
	scanf("%f",&b);
	printf("�������Ϊ%f",max(a,b));
	return 0;
}


#include<stdio.h>
int main()
{
	float a;
	float b;
	float c; 
	printf("�����һ����\n"); 
	scanf("%f",&a);
	printf("����ڶ�����\n");
	scanf("%f",&b);
	printf("������\n");
	scanf("%f",&c);
	if(c=a+b)
	printf("right");
	else 
	printf("false");
	return 0;
}


#include<stdio.h>
int main()
{
	float x,y;
	printf("������Сʱ��\n");
	scanf("%f",&x);
	if(x<=10)
	{
		printf("����Ϊ30Ԫ"); 
	} 
	else if(50>=x>10)
	{
		y=3*x;
		printf("����Ϊ%fԪ",y);
	}
	else if(x>50)
	{
		y=150+2.5*(x-50);
		printf("����Ϊ%fԪ",y);
	}
	else
	printf("��������");
	return 0;
}


#include<stdio.h>
int main()
{
	float szx,qqt,x;
	printf("�����绰��Сʱ��\n");
	scanf("%f",&x);
	szx=0.6*x;
	qqt=0.4*x+50;
	printf("������ͨ������Ϊ%fԪ\nȫ��ͨͨ������Ϊ%fԪ\n",szx,qqt);
	if(szx<qqt)
	{
		printf("�����л��Ѹ���");
	}
	else
	{
		printf("ȫ��ͨ���Ѹ���");
	} 
	return 0;
}
