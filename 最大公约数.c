#include <stdio.h>
int main()
{
 int a,b;
 printf("请输入两个整数\n");
 scanf("%d%d",&a,&b);
 if(a<b)
 {
  a=a+b;//这是不引入其他变量的交换a,b数值的方法
  b=a-b;
  a=a-b;
 } 
 if(a%b==!0)
 {
  printf("%d和%d的最大公约数是1",b,a);
 }
 else
  {
  printf("%d和%d的最大公约数是%d",b,a,a);
  }
}
