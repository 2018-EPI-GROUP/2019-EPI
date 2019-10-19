#include <stdio.h>
void replaceMax(int arr[],int value)
{
    int max = arr[0];
    int index = 0;
    int i;
    for(i=1;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];          //将数组中较大的数赋值给max
            index = i;  //记录当前索引
        }                
    }  
    arr[index] = value;
}

int main()
{
    int arr1[] = {10,41,3,12,22};
    int arr2[] = {1,2,3,4,5};
    int i;
    replaceMax(arr1 ,arr2[0]); //将数组arr1和数组arr2的第一个元素传入函数中
    for(i=0;i<5;i++)
    {
        printf("%d ",arr1[i]);                
    }
    return 0;    
}