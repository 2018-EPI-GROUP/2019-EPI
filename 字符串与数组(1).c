#include <stdio.h>
void say(char string[])
{
    printf("%s\n",string);
}

int main()
{
    char string[] = "我要加入EPI实验室";
    say(string);
    return 0;
}