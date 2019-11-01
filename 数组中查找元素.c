
# include<stdio.h>
int Bsearch(int *p, int n, int x);     
int main(void)   
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};    
    int x, m;
    scanf("%d",&x);                
    m = Bsearch(a, 10, x);
    if(m >= 0)   
        printf("Index is %d\n",m);
    else 
        printf( "Not Found\n");
		
    return 0;
}



int Bsearch(int *p, int n, int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(x==*(p+i))
		return i;
	}
	if(i=10)
	return -1; 
	
}
