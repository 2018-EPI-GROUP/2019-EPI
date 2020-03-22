#include"head.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

int check(int i) {
	int thou, hun, shi, ge;
	thou = i / 1000;
	hun = (i - thou * 1000) / 100;
	shi = (i - thou * 1000 - hun * 100) / 10;
	ge = i - thou * 1000 - hun * 100 - shi * 10;
	if (hun == 9 || shi == 9 || ge == 9)
		return 1;
	else
		return 0;
}

int main(void) {
	int i, res = 0;
	for (i = 9; i <= 2019; i++) {
		res += check(i);
	}
	printf("%d", res);
	system("pause");
	return 0;
}