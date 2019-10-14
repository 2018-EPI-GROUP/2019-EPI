#include <stdio.h>
#include <stdlib.h>
//1.简单的桶排序 一个班级有5个人 考试满分10分 输入分数 由高到低输出分数
//来自 《啊哈算法》
int main()
{
    int a[11] ,i,j,t;//定义一个存放0~10分的数组
    for(i = 0;i <= 10 ;i++)
        a[i]=0;//暂没有人得过i分
    for(i=1;i<6;i++)
        {
            scanf("%d",&t);
            a[t]++;
        }
    for(i=10;i>=0;i--)// for(i=0;i<=10;i++) 即可由低到高输出
        for(j=1;j<=a[i];j++)
        printf("%d",i);
    getchar();getchar();
    return 0 ;
}
