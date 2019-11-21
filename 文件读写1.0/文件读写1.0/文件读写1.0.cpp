#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void savefile(struct student *p);

struct student {
	char name[10];
	int num;
	int sex;
	int mark;
}stu1;

FILE *fp;

int main()
{
	printf("请输入姓名：\n");

	scanf("%s", &stu1.name);

	printf("请输入学号：\n");

	scanf("%d", &stu1.num);

	printf("请输入性别(male- 1 /female- 2 )：\n");

	scanf("%i", &stu1.sex);

	printf("请输入成绩：\n");

	scanf("%d", &stu1.mark);

	savefile(&stu1);

	return 0;
}

void savefile(struct student *p)
{
	fp = fopen("studentinfo.txt", "a");
	fprintf(fp, "姓名：%s\n", p->name);
	fprintf(fp, "学号：%d\n", p->num);
	fprintf(fp, "性别：%i\n", p->sex);
	fprintf(fp, "成绩：%d\n\n", p->mark);
	fclose(fp);
	if (fopen != NULL && fclose != NULL) {
		printf("信息输入成功");
	}
}