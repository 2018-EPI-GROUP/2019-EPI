#include<stdio.h>

int main()
{
    int a, b;
    int flag=0;  //����flagָʾ�Ƿ��Ѿ�����һ�������㣬��������Ŀո����� 
    while(scanf("%d %d", &a, &b)!=EOF) //������벻������EOF���ļ���β�� 
    {
        if(b!=0)  //ָ����Ϊ0��ʱ�� 
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
