#include<stdio.h>
          //#include<conio.h>

void quick_sort(int *arr,int left,int right)
{
	if (left>=right)
		return;
	int i=left;
	int j=right;
	int basic=arr[left];
	while (i!=j)
	{
		while (arr[j]>=basic&&i<j)
			j--;
		while (arr[i]<=basic&&i<j)
			i++;
			
		if (i<j)
		{
			int tmp=arr[j];
			arr[j]=arr[i];
			arr[i]=tmp;
		}
	}
	arr[left]=arr[i];
	arr[i]=basic;
	quick_sort(arr,left,i-1);
	quick_sort(arr,i+1,right);
}

int main(void)
{
    int n=0;
	int arr[100]={0};
    printf("一共输入几个数字?\n");
    scanf("%d",&n);
    printf("输入%d个数字\n",n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,n-1);
	printf("结果\n");
	for (int i=0;i<n;i++)
	{
		printf("%-4d",arr[i]);
	}
	return 0;
}
