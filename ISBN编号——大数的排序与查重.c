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

void fm(int *p , int i)
{
	int tem , cnt ;
	for(cnt = i ; cnt < 10 ; cnt++)
		{p[cnt] = p[cnt+1] ;
		}
	return;
}

void check(int a[])
{
	int m ;
	for(m = 0 ; m < 11 ; m++ )
		{printf("%d ", a[m]);}
	printf("\n");
	return;
}

int main()
{
    int i , count = 0;    //�������Ϊ��������
    int *p=(int*)malloc(sizeof(int)*11);
	printf("������10����:\n");
    for(i=1;i<=10;i++)
        scanf("%d",&p[i]);    //�Ӽ���������10��Ҫ�����������
    qusort(p,1,10);    //����qusort()������������
    check(p);
	for(i=2;i<=10;i++)
    	{if(p[i-1] == p[i])
    		{fm(p,i);
    		check(p);
    		count++;
			}
		}
	printf("������˳����:\n");
    for(i=1;i<=11-count;i++)
        printf("%5d",p[i]);    //����ź��������
    printf("\n");
    return 0;
}
