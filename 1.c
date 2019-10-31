#include<stdio.h>
int main()
{
int a,b,c,d,x,y,z,h,m;
scanf("%d %d",&a,&b);
c=a/100; // 出发小时 
d=a%100; // 出发分钟
x=b/100; // 结束小时
y=b%100; // 结束分钟
z=(x*60+y)-(c*60+d);//间隔总分钟
h=z/60;
m=z-h*60;
printf("%02d:%d",h,m);
return 0;
}
