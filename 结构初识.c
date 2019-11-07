#include<stdio.h>

struct stu{
	int  math ;
	int  computer ;
	double english ;
	double PE ;
};

int main(void)
{
	int n;
	struct stu tom = { 78 , 92 , 94.0 , 65.0 };
	printf("tom math grade is %d ,computer is %d",tom.math,tom.computer);	
	return 0;
}
