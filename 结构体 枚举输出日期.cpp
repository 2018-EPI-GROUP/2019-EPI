#include<stdio.h>
struct date
{
	int year;
	int month;
	int day;
	
 };
 main()
 {
 	int i;
 	struct date x;
 	printf("请输入年月日，用空格隔开\n");
 	scanf("%d%d%d",&x.year,&x.month,&x.day);
 	enum weekday
 { sun=7,mon=1,tue,won,thu,fri,sat
 };
    enum weekday n;
    printf("请输入星期几\n");
    scanf("%d",&i);
    n=(enum weekday)i;
    switch(n)
    {
    	case sun:printf("sunday");break;
    	case mon:printf("monday");break;
    	case tue:printf("tuesday");break;
    	case won:printf("wonseday");break;
    	case thu:printf("thursday");break;
    	case fri:printf("friday");break;
    	case sat:printf("saturday");break;
	}
 	printf("年  月  日\n");
 	printf("%4d%4d%4d",x.year,x.month,x.day);
 }
