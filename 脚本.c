#include <stdio.h>
int main ()
{
	int n,		//n��ͬѧ 
		cot = 0,	//���������� 
		ff = 0,		//�м��� 
		i;		//ѭ�����Ʊ��� 
	double avg = 0.; //ƽ���� 
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
