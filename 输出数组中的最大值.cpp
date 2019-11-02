#include<stdio.h>
int main()
{
	int i,j,row=0,colum=0,max;
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
	//对行列式的每一个元素都进行了赋值
	max=a[0][0];
	{
	for(i=0;i<=2;i++)
	for(j=0;j<=3;j++)
	if(a[i][j]>max)
		{max=a[i][j];
		row=i; 
		colum=j;
		}
	}
		
	printf("max=%d\n row=%d\n colum=%d\n", max,row,colum);
	/*著注意变量的书写
	（max,i,j)*/ 
	return 0;	  
}
