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
              printf("优秀\n");
                     break;
       case 9:
              printf("优秀\n");
              break;
       case 8:
              printf("良好\n");
              break;
       case 7:
              printf("及格\n");
              break;
       case 6:
              printf("及格\n");
              break;
       default:
              printf("不及格\n");
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
       printf("请输入1到7：\n");
       scanf("%d", &score);
       switch (score)
       {
       case 1:
              printf("星期一\n");
                     break;
       case 2:
              printf("星期二\n");
              break;
       case 3:
              printf("星期三\n");
              break;
       case 4:
              printf("星期四\n");
              break;
       case 5:
              printf("星期五\n");
              break;
       case 6:
              printf("星期六\n");
              break;
       case 7:
              printf("星期七\n");
              break;
       default:
              printf("WARNING!!!BOOM SHA KA LA KA！！！\n");
              break;
       }
       system("pause");
       return 0;
}
