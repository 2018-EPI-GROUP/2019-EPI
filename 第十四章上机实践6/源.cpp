#include<stdio.h>
#define FUNDLEN 50

struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(const struct funds*);

int main(void)
{
	struct funds stan = {
		"Garlic-Melon Bank",
		4032.27,
		"Luck's Saving and loan",
		8543.94
	};

	printf("Stan has a tatol of $%.2f.\n", sum(&stan));

	return 0;
}

double sum(const struct funds*money)
{
	return(money->bankfund + money->savefund);
}