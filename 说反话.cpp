#include<stdio.h>
int main()
{
	char a[80][80];
	int i;
	printf("ÇëÊäÈë×Ö·û´®\n");
    while(scanf("%s",&a[i]))
	{
		i++;
		if(getchar()=='\n') break;
		}
	while(i)
	{
		i--;
		if(i>0)
		printf("%s ",a[i]);
		else
		printf("%s",a[0]);
	}
	return 0;
}
