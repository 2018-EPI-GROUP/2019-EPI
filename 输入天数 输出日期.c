# include <stdio.h>
void month_day ( int year, int yearday, int * pmonth, int * pday);

int main (void)
{
   int day, month, year, yearday; /*  ��������ա��¡���������ı���*/
   scanf ("%d%d", &year, &yearday );		
   month_day (year, yearday, &month, &day );/* ���ü����¡��պ���  */ 
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

