#include<stdio.h>
#include<math.h>
//��Ҫ��ԭ���Ͻ������Ż� 
int main()
{
	int i,n,k;
	printf("please enter a number:n=?\n");
	scanf("%d",&n);
	k=sqrt(n);
	//sqrt��ƽ���� 
	for(i=1;i<=k;i++)
		if(n%1==0)break;
	if(i<k) printf("%d is not a prime number.\n",n);
	else if("%d is not a prime number.\n",n);
	return 0;
}
