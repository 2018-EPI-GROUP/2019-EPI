#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<mmsystem.h>
#include<time.h>
#pragma comment��lib, "Winmm.lib"��

int main()
{
    char I[10];
    int a,e,i,c,d,b[]={1,100,100,100,100};
    PlaySound(TEXT("sounds\\City Sunshine.wav"),
    NULL, SND_FILENAME | SND_ASYNC |SND_LOOP);
    srand(time(NULL));
        printf("��ӭ����ʵ��������������磡\n");
        printf("�������ɫ����:");
        scanf("%s",I);
        printf("�������Ϊ:%s\n",I);
        printf("��ѡ�����ְҵ:\n");
        printf("1.սʿ\t2.��ʦ\t3.�̿�\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
         {
             printf("����ѡ���ְҵΪ:սʿ\n�뿪ʼ����ð�հ�!\n");
             printf("��Ŀǰ��״̬Ϊ:\n");
             printf("�ȼ�\tѪ��\t������\t����ֵ\t����\n");
             b[1]+=50;
             for(i=0;i<5;i++)
                printf("%d\t",b[i]);
                printf("\n");
             break;
         }
            case 2:
        {
             printf("����ѡ���ְҵΪ:��ʦ\n�뿪ʼ����ð�հ�!");
             printf("��Ŀǰ��״̬Ϊ:\n");
             printf("�ȼ�\tѪ��\t������\t����ֵ\t����\n");
             b[3]+=50;
             for(i=0;i<5;i++)
                printf("%d\t",b[i]);
                printf("\n");
             break;
         }
            case 3:
        {
             printf("����ѡ���ְҵΪ:�̿�\n�뿪ʼ����ð�հ�!");
             printf("��Ŀǰ��״̬Ϊ:\n");
             printf("�ȼ�\tѪ��\t������\t����ֵ\t����\n");
             b[2]+=50;
             for(i=0;i<5;i++)
                printf("%d\t",b[i]);
                printf("\n");
             break;
         }
        }

            while(b[1]>0)
               {
                    printf("��ѡ���ж�Ŀ��:\n");
                    printf("1.����¼�\t");
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
                        printf("������������:Ѫ��-10\n");
                        b[1]-=10;
                        printf("��Ŀǰ��״̬Ϊ:\n");
                        printf("�ȼ�\tѪ��\t������\t����ֵ\t����\n");
                        for(i=0;i<5;i++)
                            {
                                printf("%d\t",b[i]);
                            }

                        break;
                        case 1:
                        PlaySound(TEXT("sounds\\Pickled Pink.wav"),
                        NULL, SND_FILENAME | SND_ASYNC |SND_LOOP);
                        printf("���Ͻ�����:Ѫ��-20\n");
                        b[1]-=20;
                        if(b[1]<=0)
                            break;
                        printf("��Ŀǰ��״̬Ϊ:\n");
                        printf("�ȼ�\tѪ��\t������\t����ֵ\t����\n");
                        for(i=0;i<5;i++)
                            {
                                printf("%d\t",b[i]);

                            }
                    }
                        break;
                    }
                }
                printf("Ѫ��Ϊ0,����������");
    return 0;
}
