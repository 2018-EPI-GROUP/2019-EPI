#include <stdio.h>
int main()
{
	printf("小明班级有10人要参加比赛，进场时要按大小个升序排队，老师要用冒泡排序写一个小程序进行排序\n");
    float arr[]={1.78, 1.77, 1.82, 1.79, 1.85, 1.75, 1.86, 1.77, 1.81, 1.80};
    int i,j;
    for(i=0;i<10;i++)
    {
		printf("%.2f, ",arr[i]);
    }
	for(i=8; i>=0; i--)
    {
        for(j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])      //当前面的数比后面的数大时
            {
                float temp;//定义临时变量temp
                temp=arr[j];//将前面的数赋值给temp
                arr[j]=arr[j+1];//前后之数颠倒位置
                arr[j+1]=temp;              //将较大的数放在后面    
            }                 
        }                
    }
    printf("\n************排队后*************\n");
    for(i=0;i<10;i++)
    {
    	printf("%.2f, ",arr[i]);
    }
    return 0;    
}