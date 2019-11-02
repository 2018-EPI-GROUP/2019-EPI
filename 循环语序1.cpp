#include<stdio.h>
int main()
{
 	float aver,score1,score2,score3,score4,score5;
	int i=1;
	while(i<=50)
	{
		scanf("%f%f%f%f%f",&score1,&score2,&score3,&score4,&score5);
		aver=(score1+score2+score3+score4+score5)/5;
		printf("aver=%7.2f",aver);
		i++;
	}
	return 0;
}
