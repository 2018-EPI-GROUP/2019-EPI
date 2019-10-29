#include<stdio.h>
#include<string.h>

enum Color
{
	white,black,red,blue,green

};


typedef struct Student 
{
	int age;
	int score;
	char* name;
	enum Color loveColor;


}stu;

void print_name (stu* s, int n)
{
	printf("name\t");	
	for ( int i=0; i<n; i++ )
	{
		printf("%12s", (s+i)->name );		
	}
	printf("\n");
}


void print_Score (stu* s, int n)
{
	printf("score\t");	
	for ( int i=0; i<n; i++ )
	{
		printf("%12d", (s+i)->score );		
	}
	printf("\n");
}

void rank (stu* s, int n)
{
	int k = n;
	while (k)
	{		
		for ( int i=0; i<k;  )
		{
			int num=0;
			for ( int j=0; j<n; j++ )	
			{
				if ( (s+i)->score > (s+j)->score )	
					num++;
			}	
			if ( num==k-1 )	
			{
				stu tmp;  
				tmp = s[i];
				s[i] = s[k-1];
				s[k-1] = tmp;
				k--;
			}		
		}
	}

	for ( int i=0; i<n; i++ )
	{
		printf("%s\t", (s+i)->name );	
		printf("%d\n", (s+i)->score );	
	}
	printf("\n");
}



int main (void)
{
	stu Class[5] =  {
				{18,90,"mike",red},	
				{19,70,"John",blue},	
				{19,40,"Xiaoming",green},	
				{17,70,"Kehan",white},	
				{20,80,"Ling",black},	
			};

	
//	print_name ( Class, sizeof(Class)/sizeof(*Class) );
//	print_Score ( Class, sizeof(Class)/sizeof(*Class) );
	rank ( Class, sizeof(Class)/sizeof(*Class) );
	return 0;
}
