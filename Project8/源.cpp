#include<stdio.h>
#include "pel2-2a.h"
int main(void)
{
	int mode;

	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf_s("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf_s("%d", &mode);
	}
	printf("Done.\n");
	return 0;
}