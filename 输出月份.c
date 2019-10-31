#include<stdio.h>
int main()
{
    int y,m,d;
	scanf("%d %d",&y,&m);
	if(y%400==0)
	{ 
		
		switch(m)
		{
		case 1:d=31;break;
		case 2:d=28;break;
		case 3:d=31;break;
		case 4:d=30;break;
		case 5:d=31;break;
		case 6:d=30;break;
		case 7:d=31;break;
		case 8:d=31;break;
		case 9:d=30;break;
		case 10:d=31;break;
		case 11:d=30;break;
		case 12:d=31;break;
		}
		printf("year = %d month = %d days=%d",y,m,d);
	}
	else if(m/4==0&&m/100!=0)
	{	switch(m)
		{
		case 1:d=31;break;
		case 2:d=28;break;
		case 3:d=31;break;
		case 4:d=30;break;
		case 5:d=31;break;
		case 6:d=30;break;
		case 7:d=31;break;
		case 8:d=31;break;
		case 9:d=30;break;
		case 10:d=31;break;
		case 11:d=30;break;
		case 12:d=31;break;
		}
	printf("year = %d month = %d days=%d",y,m,d);
	}
	else
	{
			switch(m)
		{
		case 1:d=31;break;
		case 2:d=29;break;
		case 3:d=31;break;
		case 4:d=30;break;
		case 5:d=31;break;
		case 6:d=30;break;
		case 7:d=31;break;
		case 8:d=31;break;
		case 9:d=30;break;
		case 10:d=31;break;
		case 11:d=30;break;
		case 12:d=31;break;
		}
			printf("year = %d month = %d days=%d",y,m,d);
	}
	return 0;
}
