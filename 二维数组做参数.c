//#include <stdio.h>
////		 int p[2][3]和下面的效果完全一样，甚至可以直接用*p来遍历 
//void fun(int (*p)[3], int hang,int lie)
//{
//	int i,j;
//	for (i = 0 ; i < hang ; i++)
//	{
//		for (j = 0 ; j < lie ; j++)
//		{
//			printf ("%d\n",p[i][j]);
//		}
//	}
//}
//int main()
//{
//	int a[2][3] = {{1,2,3},{4,5,6}};
//	//int (*p)[3] = a;
//	fun (a,2,3);
//	return 0;
//}



#include <stdio.h>
void fun(int (*p)[2][3] , int hang , int lie)
{
	int i,j;
	for (i = 0 ; i < hang ; i++)
	{
		for (j = 0 ; j < lie ; j++)
		{
			printf("%d\n",(*p)[i][j]);
		}
	}
 } 
 
int main()
{
	int a[2][3] = {{1,2,3},{4,5,6}};
	fun (&a,2,3);
	
	return 0;
}
