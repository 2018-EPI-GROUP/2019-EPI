# 2019Freshman
2019届大一提交任务仓库

冒泡排序3个数：
#include <stdio.h>
int main()
{
    int a=1,b=2,c=3;
    int t;
    if(a<b)
    {t=a;
        a=b;
        b=t;
        
    }
    if(a<c)
    {t=a;
        a=c;
        c=t;
        
    }
    if(b<c)
    {t=b;
        b=c;
        c=t;
        
    }
    printf("%d %d %d\n",a,b,c);
