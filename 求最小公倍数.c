#include <stdio.h>
int main()
{
 int a,b,i,e;
 printf("请输入两个数");
 scanf("%d%d",&a,&b);
 if(a<b)//如果a<b，则将a，b对换
 {
  e=a;
  a=b;
  b=e;
 }
 for(i=b;i>0;i++)
 if(i%a==0 && i%b==0)
 break;
 {
  printf("%d和%d的最小公倍数是%d",a,b,i);
 }
 return 0;
}
