#include<stdio.h>
int main(void)
{
	int n , i , j ;
	
	return 0;
}





void check(int a[])
{
	int m ;
	for(m = 0 ; m < 11 ; m++ )
		printf("%d ", a[m]);
	printf("\n");
	return;
}

void swap(int *p1,int *p2)
{
	int tem=*p1;
	*p1=*p2;
	*p2=tem;
	return;
}

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
