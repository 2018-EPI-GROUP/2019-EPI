#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i,j,count =5;
 double powers[]={123,234,345,567,678};
 double del,charu;
 printf("请输入需要删除的数字:\n");
 scanf("%lf",&del);
 for(i = 0;i<count;i++)
 {
   if(del == powers[i])
   {
      j = i;
      printf("删除成功！\n");
      break;
   }
 }
   if(i==count)
    printf("该数组没有这个数，删除失败！\n");
    else
    {
        for(i=j;i<count-1;i++)
            powers[i]=powers[i+1];
        printf("删除后的结果为:\n");
        for (i=0;i<count-1;i++)
            printf("%lf\t",powers[i]);
    printf("请输入插入的数字:");
    scanf("%lf",&charu);
    powers[count-1]=charu;
    printf("插入后的结果为:\t");
        for (i=0;i<count;i++)
            printf("%lf\t",powers[i]);

    }



    return 0;
}
