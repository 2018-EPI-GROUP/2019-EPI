#include <stdio.h>
#include <stdlib.h>
//1.�򵥵�Ͱ���� һ���༶��5���� ��������10�� ������� �ɸߵ����������
//���� �������㷨��
int main()
{
    int a[11] ,i,j,t;//����һ�����0~10�ֵ�����
    for(i = 0;i <= 10 ;i++)
        a[i]=0;//��û���˵ù�i��
    for(i=1;i<6;i++)
        {
            scanf("%d",&t);
            a[t]++;
        }
    for(i=10;i>=0;i--)// for(i=0;i<=10;i++) �����ɵ͵������
        for(j=1;j<=a[i];j++)
        printf("%d",i);
    getchar();getchar();
    return 0 ;
}
