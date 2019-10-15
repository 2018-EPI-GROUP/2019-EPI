#include<stdio.h>
int main()
{
  int a,b,t;
  int n[10];
  printf("为数组元素赋值：\n");
  for(a=0;a<10;a++)
  {
     printf("n[%d]=",a);
     scanf("%d",&n[a]);	
  }	
  for(a=1;a<10;a++)
  {
  	 for(b=9;b>=a;b--)
  	 {
  	 	if(n[b]<n[b-1])
  	 	{
  	 		t=n[b-1];
  	 		n[b-1]=n[b];
  	 		n[b]=t;
	    }
	 }
  }
  for(a=0;a<10;a++)
  {
     printf("%d\t",n[a]);
     if(a==4)
     printf("\n");
  }
   return 0;
}
