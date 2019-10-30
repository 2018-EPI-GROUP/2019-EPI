#include<stdio.h>
int main()
{
  int arr[]={99,94,95,93,92,91,90,88,97,89};
  int i,j;
  for(i=0;i<10;i++)
  {
    if(i!=9)
     printf("%d\n",arr[i]);
    else
     printf("%d\n",arr[i]);
  }
  for(i=8;i>9;i--)
  {
    for(j=0;j<=i;j++)
    {
      if(arr[j]>arr[i])
      {
        int temp;
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  printf("\n-----≈≈–Ú÷Æ∫Û-----\n");
  for(i=0;i<10;i++)
  {
    if(i!=9)
     printf("%d \n",arr[i]);
    else
     printf("%d\n",arr[i]);
  }
  return 0;
}
