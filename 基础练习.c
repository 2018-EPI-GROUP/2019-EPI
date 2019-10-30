#include<stdio.h>
int main()
{
	int a,b,c;
	printf("输入第一个数\n"); 
	scanf("%d",&a);
	printf("输入第二个数\n");
	scanf("%d",&b);
	c=a*a+b*b;
	printf("平方和为%d",c);
	return 0;
}



#include<stdio.h>
int main()
{
	float r,c,s;
	printf("请输入半径");
	scanf("%f",&r); 
	c=2*3.14*r;
	s=3.14*r*r;
	if(r>=0)
	{
		printf("面积为%f，周长为%f",s,c);
	}
	else
	{
		printf("您输入的数有误"); 
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int x,y;
	printf("请输入x\n");
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
	printf("y的值为%d",y); 
	return 0;
}
#include<stdio.h>
int main()
{
	float a[4];
	float min;
	int i;
	printf("请输入第1个数\n");
	scanf("%f",&a[0]);
	printf("请输入第2个数\n");
	scanf("%f",&a[1]);
	printf("请输入第3个数\n");
	scanf("%f",&a[2]); 
	printf("请输入第4个数\n");
	scanf("%f",&a[3]);
	min=a[1];
	for(i=0;i<=3;i++)
	{
		if(a[i]<=a[i+1])
		{
			min=a[i];   
		}
	} 
	printf("最小的数为%d",min);
	
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
	
	printf("输入第一个数\n"); 
	scanf("%f",&a);
	printf("输入第二个数\n");
	scanf("%f",&b);
	printf("最大值为%f",max(a,b));
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
	
	printf("输入第一个年龄\n"); 
	scanf("%f",&a);
	printf("输入第二个年龄\n");
	scanf("%f",&b);
	printf("最大年龄为%f",max(a,b));
	return 0;
}


#include<stdio.h>
int main()
{
	float a;
	float b;
	float c; 
	printf("输入第一个数\n"); 
	scanf("%f",&a);
	printf("输入第二个数\n");
	scanf("%f",&b);
	printf("输入结果\n");
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
	printf("请输入小时数\n");
	scanf("%f",&x);
	if(x<=10)
	{
		printf("网费为30元"); 
	} 
	else if(50>=x>10)
	{
		y=3*x;
		printf("网费为%f元",y);
	}
	else if(x>50)
	{
		y=150+2.5*(x-50);
		printf("网费为%f元",y);
	}
	else
	printf("数据有误");
	return 0;
}


#include<stdio.h>
int main()
{
	float szx,qqt,x;
	printf("输入打电话的小时数\n");
	scanf("%f",&x);
	szx=0.6*x;
	qqt=0.4*x+50;
	printf("神州行通话费用为%f元\n全球通通话费用为%f元\n",szx,qqt);
	if(szx<qqt)
	{
		printf("神州行话费更低");
	}
	else
	{
		printf("全球通话费更低");
	} 
	return 0;
}
