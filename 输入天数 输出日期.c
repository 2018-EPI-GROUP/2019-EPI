# include <stdio.h>
void month_day ( int year, int yearday, int * pmonth, int * pday);

int main (void)
{
   int day, month, year, yearday; /*  定义代表日、月、年和天数的变量*/
   scanf ("%d%d", &year, &yearday );		
   month_day (year, yearday, &month, &day );/* 调用计算月、日函数  */ 
   printf ("%d %d %d\n", year, month, day );	
   return 0;	
}

void month_day ( int year, int yearday, int *pmonth, int *pday)
{
	int a;
	
	if(year/400==0)
	{
		if(yearday>31)
		{
			yearday-=31;
			a++;
		}
	}
	*pday=yearday;
	*pmonth=a;
	
}

