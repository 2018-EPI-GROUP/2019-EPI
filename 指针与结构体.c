#include<stdio.h>

struct stu{
	char name[10];
	int math;
	int english;
	int pe;
}tom , jack;

int main(void)
{
	int n ;
	struct stu *p1 , *p2 ;
	p1 = &tom  ;
	p2 = &jack ;                           //���ʽṹ������ַ�ʽ 
	scanf("%d", &(p1->math))  ;            //    poninter -> member      " -> "Ϊָ���Ա����� 
	scanf("%d", &(*p1).english) ;          //    (*poninter) . member
	scanf("%d", &tom.pe) ;                 //    structname . member
	printf("\n math is %d,english is %d, pe is %d.", tom.math , tom.english , tom.pe ) ;
	
	return 0 ;
}
