#include<stdio.h>

int main()
{
    int a, b;
    int flag=0;  //设置flag指示是否已经经过一次求导运算，考虑输出的空格问题 
    while(scanf("%d %d", &a, &b)!=EOF) //如果输入不结束，EOF是文件结尾符 
    {
        if(b!=0)  //指数不为0的时候 
        {
            if(flag==0)
            {
                printf("%d", a*b);
            }
            else
            {
                printf(" %d", a*b);
            }
            printf(" %d ", b-1);
            flag=1;
        }
    }
    if(flag==0)printf("0 0");
} 
