#include<stdio.h>
main()
{
	int i=1,t=0,n;
	double aver;
	printf("�������һ��ѧ���ɼ�\n");
	scanf("%d",&n);
	while(n>0)
	{
		if(n<0)
		break;
		if(n<=60)
		printf("%d",n);
		t+=n;
		i+=1;
	}
	aver=t/i;
	printf("ƽ���ɼ�Ϊ%f",aver);
}
