#include<stdio.h>

void my_copy(char* arr_1,char* arr_2)
{
	int i=0;
	while (arr_1[i]!='\0')
	{
		arr_2[i]=arr_1[i];
		i++;
	}
	arr_2[i]='\0';
}

int main(void)
{
	char arr_1[100]="hello,world!";
	char arr_2[100];
	my_copy(arr_1,arr_2);
	printf("%s",arr_2);
	return 0;
}