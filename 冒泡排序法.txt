#include <stdio.h>
int main()
{
    int arr[] ={9,7,5,1,3,4,2,8,10,6};
	for(int i=0;i<=9;i++)
	{
	    for(int j=0;j<10-1-i;j++)
	   {
	         if(arr[j]>arr[j+1])
	        {
	            int temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}	
	    }
	}
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
     return 0;
}	 