#include "stdio.h"

int main()
{
  int i,letter=0,blank=0,digit=0,other=0;
  char ch;
  for(i=1;i<=10;i++)
  {
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z') letter++;
    else if(ch==' ' || ch=='\n') blank++;
    else if(ch>='0' && ch<='9') digit++;
    else other++;
  }
  printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
  return 0;
}
