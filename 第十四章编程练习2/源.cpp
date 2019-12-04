#include<stdio.h>
#include<string.h>

struct calendar {
	char month[10];
	char mon[4];
	int days;
	int monthnum;
};
union mont {
	char montt[10];
	int da;
};
int main(void)
{
	struct calendar year[12] = {
		{"January","jan",31,1},
		{"February","feb",28,2},
		{"March","mar",31,3},
		{"April","apr",30,4},
		{"May","may",31,5},
		{"June","jun",30,6},
		{"July","jul",31,7},
		{"Augest","aug",31,8},
		{"September","sep",30,9},
		{"October","oct",31,10},
		{"November","nov",30,11},
		{"December","dec",31,12}
	};
	union mont a;
	int n, m, i = 0, s = 0;

	printf(" ‰»Î‘¬ »’\n");
	n = scanf_s("%d", &a.da);
	if (n != 1)
	{
		scanf_s("%s", a.montt, 10);
		puts(a.montt);
	}
	scanf_s("%d", &m);
	puts(a.montt);
	while (strcmp(a.montt, year[i].month) && strcmp(a.montt, year[i].mon) && i != a.da-1)
	{
		puts(a.montt);
		s += year[i].days;
		i++;
	}
	printf("%d ", i);
	puts(a.montt);
	printf("%d", s + m);

	return 0;

}