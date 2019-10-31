#include<stdio.h>

int mod;
float fuel, far;
int i = 0;

void set_mode(int n)
{
	extern int mod, i;
	if (n > 1)
	{
		if (i > 0)
		{
			if (mod == 0)
			{
				printf("Invalid mode specified. Mode 0(metric) used.\n ");
			}
			else
				printf("Invalid mode specified.Mode 1(US) used.\n");
		}
	
	}
	else
	{
		mod = n;
		i++;
	}
}
void get_info(void)
{
	extern int mod;
	extern float fuel, far;
	if (mod == 0)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf_s("%f", &far);
		printf("Enter fuel consumed in liters: ");
		scanf_s("%f", &fuel);
	}
	else
	{
		printf("Enter distance traveled in miles: ");
		scanf_s("%f", &far);
		printf("Enter fuel consumed in gallons: ");
		scanf_s("%f", &fuel);
	}
}
void show_info(void)
{
	extern int mod;
	extern float fuel, far;
	if (mod == 0)
		printf("Fuel consumption is %.2lf liters per  km.\n", (fuel / far) );
	else
		printf("Fuel consumption is %.1lf miles per gallon.\n", far / fuel);
}