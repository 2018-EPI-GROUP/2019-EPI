#include <stdio.h>
#include <stdlib.h>
#include "hotelmenu.h"

int main()
{  int a,b;

    a=inputmenu();
    printf("%d\n",a);
    b=days();
    printf("%d\n",b);
    totalcount(a,b);
    return 0;
}
