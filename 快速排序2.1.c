#include <stdio.h>
int qusort(int s[],int start,int end)    //�Զ��庯�� qusort()
{
    int i,j;    //�������Ϊ��������
    i=start;    //��ÿ���׸�Ԫ�ظ���i
    j = end;    //��ÿ��ĩβԪ�ظ���j
    s[0]=s[start];    //���û�׼ֵ
    while(i<j)
    {
        while(i<j&&s[0]<s[j])
        j--;    //λ������
        if(i<j)
        {
            s[i]=s[j];    //��s[j]�ŵ�s[i]��λ����
            i++;    //λ������
        }
        while(i<j&&s[i]<=s[0])
            i++;    //λ������
        if(i<j)
        {
            s[j]=s[i];    //�����ڻ�׼ֵ��s[j]�ŵ�s[i]λ��
            j--;    //λ������
        }
    }
    s[i]=s[0];    //����׼ֵ����ָ��λ��
    if (start<i)
        qusort(s,start,j-1);    //�Էָ���Ĳ��ֵݹ����qusort()����
    if (i<end)
        qusort(s,j+1,end);
    return 0;
}

int main()
{
    int a[11], i;    //�������鼰����Ϊ��������
    printf("������10������\n");
    for(i=1;i<=10;i++)
        scanf("%d",&a[i]);    //�Ӽ���������10��Ҫ�����������
    qusort(a,1,10);    //����qusort()������������
    printf("������˳����:\n");
    for(i=1;i<=10;i++)
        printf("%5d",a[i]);    //����ź��������
    printf("\n");
    return 0;
}
