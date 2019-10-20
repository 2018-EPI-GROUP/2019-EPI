#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<mmsystem.h>
#include<time.h>
#pragma comment（lib, "Winmm.lib"）

int main()
{
    char I[10];
    int a,e,i,c,d,b[]={1,100,100,100,100};
    PlaySound(TEXT("sounds\\City Sunshine.wav"),
    NULL, SND_FILENAME | SND_ASYNC |SND_LOOP);
    srand(time(NULL));
        printf("欢迎来到实力至上主义的世界！\n");
        printf("请输入角色名称:");
        scanf("%s",I);
        printf("你的名字为:%s\n",I);
        printf("请选择你的职业:\n");
        printf("1.战士\t2.法师\t3.刺客\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
         {
             printf("你所选择的职业为:战士\n请开始您的冒险吧!\n");
             printf("您目前的状态为:\n");
             printf("等级\t血量\t攻击力\t法力值\t耐力\n");
             b[1]+=50;
             for(i=0;i<5;i++)
                printf("%d\t",b[i]);
                printf("\n");
             break;
         }
            case 2:
        {
             printf("你所选择的职业为:法师\n请开始您的冒险吧!");
             printf("您目前的状态为:\n");
             printf("等级\t血量\t攻击力\t法力值\t耐力\n");
             b[3]+=50;
             for(i=0;i<5;i++)
                printf("%d\t",b[i]);
                printf("\n");
             break;
         }
            case 3:
        {
             printf("你所选择的职业为:刺客\n请开始您的冒险吧!");
             printf("您目前的状态为:\n");
             printf("等级\t血量\t攻击力\t法力值\t耐力\n");
             b[2]+=50;
             for(i=0;i<5;i++)
                printf("%d\t",b[i]);
                printf("\n");
             break;
         }
        }

            while(b[1]>0)
               {
                    printf("请选择行动目标:\n");
                    printf("1.随机事件\t");
                    scanf("%d",&c);
                    d =rand()%2;
                    switch(c)
                    {
                        case 1:
                    switch(d)
                    {
                        case 0:
                        PlaySound(TEXT("sounds\\Pickled Pink.wav"),
                        NULL, SND_FILENAME | SND_ASYNC |SND_LOOP);
                        printf("你遇到了陷阱:血量-10\n");
                        b[1]-=10;
                        printf("您目前的状态为:\n");
                        printf("等级\t血量\t攻击力\t法力值\t耐力\n");
                        for(i=0;i<5;i++)
                            {
                                printf("%d\t",b[i]);
                            }

                        break;
                        case 1:
                        PlaySound(TEXT("sounds\\Pickled Pink.wav"),
                        NULL, SND_FILENAME | SND_ASYNC |SND_LOOP);
                        printf("天上降大运:血量-20\n");
                        b[1]-=20;
                        if(b[1]<=0)
                            break;
                        printf("您目前的状态为:\n");
                        printf("等级\t血量\t攻击力\t法力值\t耐力\n");
                        for(i=0;i<5;i++)
                            {
                                printf("%d\t",b[i]);

                            }
                    }
                        break;
                    }
                }
                printf("血量为0,你已死亡！");
    return 0;
}
