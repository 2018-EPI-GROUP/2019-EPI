#include <stdio.h>
int main()
{
 int a,b;
 printf("��������������\n");
 scanf("%d%d",&a,&b);
 if(a<b)
 {
  a=a+b;//���ǲ��������������Ľ���a,b��ֵ�ķ���
  b=a-b;
  a=a-b;
 } 
 if(a%b==!0)
 {
  printf("%d��%d�����Լ����1",b,a);
 }
 else
  {
  printf("%d��%d�����Լ����%d",b,a,a);
  }
}