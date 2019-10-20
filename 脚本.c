#include <stdio.h>
int main ()
{
	int n,		//n个同学 
		cot = 0,	//不及格人数 
		ff = 0,		//中间量 
		i;		//循环控制变量 
	double avg = 0.; //平均分 
	scanf("%d",&n);
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&ff);
		avg += ff;
		if (ff < 60)cot++;
		
	}
	avg /= n;
	if(n!=0)printf("average = %.2lf\ncount = %d",avg,cot);
	else printf("average = 0\ncount = 0");
	return 0;
	
}
