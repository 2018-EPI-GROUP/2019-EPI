#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i,j,count =5;
 double powers[]={123,234,345,567,678};
 double del,charu;
 printf("��������Ҫɾ��������:\n");
 scanf("%lf",&del);
 for(i = 0;i<count;i++)
 {
   if(del == powers[i])
   {
      j = i;
      printf("ɾ���ɹ���\n");
      break;
   }
 }
   if(i==count)
    printf("������û���������ɾ��ʧ�ܣ�\n");
    else
    {
        for(i=j;i<count-1;i++)
            powers[i]=powers[i+1];
        printf("ɾ����Ľ��Ϊ:\n");
        for (i=0;i<count-1;i++)
            printf("%lf\t",powers[i]);
    printf("��������������:");
    scanf("%lf",&charu);
    powers[count-1]=charu;
    printf("�����Ľ��Ϊ:\t");
        for (i=0;i<count;i++)
            printf("%lf\t",powers[i]);

    }



    return 0;
}
