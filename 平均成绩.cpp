#include<stdio.h>
main()
{
	int i=1,aver,n,t=0;
	printf("�������һ��ѧ���ɼ�");
	scanf("%d",&n);
	while(n>0)
	{
		if(n<=60)
		printf("��ѧ���ɼ�С��60��Ϊ%4d\n",n);
		t+=n;
		i+=1;
		printf("������ѧ���ɼ�");
		scanf("%d",&n); 
	 } 
	 aver=t/i;
	 printf("ѧ����ƽ���ɼ�Ϊ%d",aver);
 } 
