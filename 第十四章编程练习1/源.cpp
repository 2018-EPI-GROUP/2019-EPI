#include<stdio.h>
#include<string.h>

struct calendar {
	char month[10];
	char mon[4];
	int days;
	char month_a[10];
};

int main(void)
{
	struct calendar year[12] = {
		{"January","jan",31,"January"},
		{"February","feb",28,"February"},
		{"March","mar",31,"March"},
		{"April","apr",30,"April"},
		{"May","may",31,"May"},
		{"June","jun",30,"June"},
		{"July","jul",31,"July"},
		{"Augest","aug",31,"Augest"},
		{"September","sep",30,"September"},
		{"October","oct",31,"October"},
		{"November","nov",30,"November"},
		{"December","dec",31,"December"}
	};
	char a[10];
	int i = 0;
	int day = 0;

	printf("输入月份名：");
	scanf_s("%s", a, 10);
	while (strcmp(a, year[i].month))
	{
		day += year[i].days;
		i++;
	}
	printf("从1月到%d月共%d天！", i+1, day + year[i].days);

	return 0;
}