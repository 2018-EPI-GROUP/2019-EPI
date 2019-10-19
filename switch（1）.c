#include <stdio.h>
int main()
{
 int i=6;
 switch(i)
 {
  case 9:i=i+1;
  case 10:i=i+2;
  case 100:i=i+100;
  default:i=i+3;
 }
 printf("i=%d\n",i);
 return 0;
} 
