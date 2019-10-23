#include<stdio.h>


int if_Two_Array_Equal ( int *a1, int *a2, int numOfArray )
{
        int ret=1;
        for( int i=0; i<numOfArray; i++ )
        {
                if( *(a1+i)!=*(a2+i) )  ret=0;
        }
        return ret;
}

int if_anArray_AddTo_twoClassArray (int *twoClassArray, int *Array, int numOfArray )
{
	int ret=1;
	for ( int i=0; i<numOfArray; i++ )	
	{
		if ( if_Two_Array_Equal( twoClassArray+i*numOfArray , Array, numOfArray ) )  
			ret=0;		
	}
	return ret;
}

void change_Array (int *Array1, int *Array2, int numOfArray)
{
	for( int i=0; i<numOfArray; i++ )	
	{ 
		Array1[i]=Array2[i];
	}
}




int main (void)
{
	int a[3][3]={
		      {1,2,3},
		      {4,5,6},	
		      {1,2,3},	
		    };
	
	int b[]={4,5,6};
	int c[]={1,2,3};
	printf("%d\n",if_anArray_AddTo_twoClassArray( *a,b,3 ) );


	//change_Array ( b, c, 3);
	//for(int i=0;i<3;i++)
	//printf("%d\t",b[i]);	

/*	printf("以下为a的地址\n");
	printf("a=%p\n",a);
	printf("%d\n",sizeof(a));

	printf("以下是*a格式\n");
	printf( "*a=%p\n",*a );	 
	printf( "*(a+1)=%p\n",*(a+1) );
	printf("%d\n",sizeof(*a));

	printf("以下是**a的格式\n");
	printf("**a=%p\n",**a ); 
	printf("**(a+1)=%p\n",**(a+1) ); 
	printf("%d\n",sizeof(**a));
	printf("\n");

	printf("%d\n",sizeof(b));
*/		
//	int *p[3]=&a;
//		int x=if_anArray_AddTo_twoClassArray(*a,b,3);
//	printf("%d\n",x);

	return 0;
}
