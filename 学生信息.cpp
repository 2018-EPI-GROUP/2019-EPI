#include<stdio.h>
struct shengri
{
	int year;
	int month;
	int day;
	
};
struct xinxi
{
	char num[9];
	char name[20];
	char sex[4];
	struct shengri s; 
	float chengji;
	char location[10];
};
main()
{
	struct xinxi l,l1;
	printf("������ѧ������\n");
	gets(l1.name);
	printf("������ѧ��ѧ�ţ��Ա𣬳��������գ��ɼ�����ͥ��ַ\n");
	scanf("%s%s%d%d%d%f%s",l1.num,l1.sex,&l1.s.year,&l1.s.month,&l1.s.day,&l1.chengji,l1.location);
	l=l1;
	printf("ѧ��   ����      �Ա�   ����������   �ɼ�   ��ͥ��ַ  \n");
	printf("%-9s%-5s%-4s%d%d%d%-5f%-2s\n",l.num,l.name,l.sex,l.s.year,l.s.month,l.s.day,l.chengji,l.location);
}
