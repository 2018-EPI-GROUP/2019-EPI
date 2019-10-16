#include<stdio.h> 
main()
{
	int m,i;
	int flag;
	printf("请输入需要判断的数");
	scanf("%d",&m);
	flag=1;
	for(i=2;i<m;i++)
	  if(m%i==0)
	  {
	  	flag=0;
	  	i=m;
	  }
	 if(flag==1)
	 printf("该数是素数");
	 else
	 printf("该数不是素数") ;
}
