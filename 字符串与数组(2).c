#include <stdio.h>
int s(char bir[])
{
    printf("%s\n",bir);
}

int main()
{
    char bir[] ={'I',' ','W','a','n','t',' ','T','o',' ','J','o','i','n',' ','I','n',' ','E','P','I','\0' };
    s(bir);
    return 0;
}