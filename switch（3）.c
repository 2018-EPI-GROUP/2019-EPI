#include <stdio.h>
int main()
{
 int i=10;
 switch(i)
 {
  case 9:i=i+1;
  case 10:i=i+2;break; 
  case 100:i=i+100;
 }
 printf("i=%d\n",i);
 return 0;
} 
