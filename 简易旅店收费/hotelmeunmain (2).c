#include<stdio.h>
#include<stdio.h>
#include "hotelmenu.h"


int inputmenu();
int days();
void totalcount(int,int);
//菜单及选择
int  inputmenu()
{
   int choice;
    int result;
    printf("1.轰焦冻酒店\n");
    printf("4.绿谷出久酒店\n");
    printf("3.欧尔麦特酒店\n");
    printf("4.退出系统\n");
    printf("请输入您的选择");
    while((result=scanf("%d",&choice))!=1||choice>4||choice<1)
    {
        if(result!=1)
            fflush(stdin);
        printf("必须输入1-4之间的数字！\n");
        printf("请重新输入:");
    }
    if(choice==4)
        {printf("退出成功！");
        exit(0);}
    else
    {
        switch(choice)
        {
        case 1:
            printf("您选择的是1号，轰焦冻酒店！\n");
            break;
        case 2:
            printf("您选择的是2号，绿谷出久酒店！\n");
            break;
        case 3:
            printf("您选择的是3号，欧尔麦特酒店！\n");
            break;


        }
    }
    return choice;
}
int days()
{
    int day;
    int result;
    printf("请输入您要入住的天数:");
     while((result=scanf("%d",&day))!=1||day<=0)
    {
        if(result!=1)
            fflush(stdin);
        printf("必须输入正整数！\n");
        printf("请重新输入:");
    }
    return day;
}
void totalcount(int choice,int day)
{   double count;
    double total=0;
    switch(choice)
    {
    case 1:
        count = hotel1;
        break;
    case 2:
        count = hotel2;
        break;
    case 3:
        count = hotel3;
        break;

    }
    for(int i=0;i<day;i++)
        {
            total+=count;
            count=count*discount;
        }
    printf("所需金额为:%.2lf",total);

}


