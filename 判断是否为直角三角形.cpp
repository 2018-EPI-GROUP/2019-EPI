#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	printf("请输入三个边长");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<0||b<0||c<0)
	printf("三角形边长不能为负数");
	if(a-b<c&&a-c<b&&b-c<a)
	printf("三角形任意两边之差应小于第三边");
	if((pow(a,2)+pow(b,2))==pow(c,2)||(pow(a,2)+pow(c,2))==pow(b,2)||(pow(c,2)+pow(b,2))==pow(a,2))
	printf("该三角形是直角三角形");
	else
	printf("该三角形不是直角三角形");
}

