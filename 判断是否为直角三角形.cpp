#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	printf("�����������߳�");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<0||b<0||c<0)
	printf("�����α߳�����Ϊ����");
	if(a-b<c&&a-c<b&&b-c<a)
	printf("��������������֮��ӦС�ڵ�����");
	if((pow(a,2)+pow(b,2))==pow(c,2)||(pow(a,2)+pow(c,2))==pow(b,2)||(pow(c,2)+pow(b,2))==pow(a,2))
	printf("����������ֱ��������");
	else
	printf("�������β���ֱ��������");
}

