#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
       int score;
       scanf("%d", &score);
       switch (score / 10)
       {
       case 10:
              printf("����\n");
                     break;
       case 9:
              printf("����\n");
              break;
       case 8:
              printf("����\n");
              break;
       case 7:
              printf("����\n");
              break;
       case 6:
              printf("����\n");
              break;
       default:
              printf("������\n");
              break;
       }
       system("pause");
       return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX(a,b) (a)>(b)?(a):(b)
int main()
{
       int score;
       printf("������1��7��\n");
       scanf("%d", &score);
       switch (score)
       {
       case 1:
              printf("����һ\n");
                     break;
       case 2:
              printf("���ڶ�\n");
              break;
       case 3:
              printf("������\n");
              break;
       case 4:
              printf("������\n");
              break;
       case 5:
              printf("������\n");
              break;
       case 6:
              printf("������\n");
              break;
       case 7:
              printf("������\n");
              break;
       default:
              printf("WARNING!!!BOOM SHA KA LA KA������\n");
              break;
       }
       system("pause");
       return 0;
}
