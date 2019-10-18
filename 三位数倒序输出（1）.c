#include <stdio.h>
int main()
{
 int h,i,j;
 printf("请输入一个三位数");
 scanf("%1d%1d%1d",&h,&i,&j);//%1d 表示每次只读取第一位数字。
 printf("倒序输出该三位数%d%d%d\n",j,h,i); 
 return 0;
}
