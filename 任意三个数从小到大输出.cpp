#include"stdio.h"
main()
{
	int x,y,z,t;
	printf("������������ͬ������");
	scanf("%d,%d,%d",&x,&y,&z);
	if(x>y)
	{
		t=x;
		x=y;
		y=t;
	} 
	if(x>z)
	{
		t=x;
		x=z;
		z=t;
	}
	if(y>z)
	{
		t=y;
		y=z;
		z=t;
	}
	printf("��������С����Ϊ:%4d,%4d,%4d\n",x,y,z);
	return 0;
}
