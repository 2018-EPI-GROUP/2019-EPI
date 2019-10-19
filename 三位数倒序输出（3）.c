#include <stdio.h>
int main()
{
 int a,b,c,d,e;
 printf("请输入一个三位数");
 scanf("%d",&a);
 b=a/100;
 c=(a/10)*10-b*100;
 d=(a-(b*100+c))*100;
 e=b+c+d;
 printf("倒序输出该三位数%d",e);
 return 0;
} 
