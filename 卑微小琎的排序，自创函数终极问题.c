#include <stdio.h>
int Total(int score[],int n)//用while循环求数组中所有数的和 
{
    int sum=0;
    while(n<=9)
    {
    	sum+=score[n];
    	n++;
    }
    return sum;
}
int highestscore(int score[])//用while循环得到数组中最大的数 
{
    int max,i=1;
    max=score[0];
    while(i<10)
    {
    	if(max<score[i])
    	max=score[i];
    	i++;
    }
    return max;
}
int lowestscore(int score[])//同上得到数组中最小的数 
{
    int min,i=1;
    min=score[0];
    while(i<10)
    {
    	if(min>score[i])
    	min=score[i];
    	i++;
    }
    return min;
}
float average()//平均数 
{
    float ave;
   	int score[10]={67,82,59,70,66,79,83,92,96,99};
    ave=(float)Total(score,0)/10.0;
    return ave;
}
void sequence(int score[])//从大到小排序 
{
    int i,j,temp;
    for(i=1;i<10;i++)
    {
        for(j=0;j<10-i;j++)
        if(score[j]>score[j+1])
        {
            temp=score[j];
            score[j]=score[j+1];
            score[j+1]=temp;
        }
    }
}
int main()//打印 
{
	int k;
	int score[10]={67,82,59,70,66,79,83,92,96,99};
	printf("总分为%d\n",Total(score,0));
	printf("最高分为%d\n",highestscore(score));
	printf("最低分为%d\n",lowestscore(score));
	printf("平均分为%.1f\n",average());
	sequence(score);
	for(k=0;k<10;k++)
	{
		printf("%d ",score[k]);
	}
	return 0;
}