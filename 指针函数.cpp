#include<stdio.h>
char *strcat(char *s1,char *s2)
{
	char *p=s1;
	while(*s1) s1++;
	while(*s1++=*s2++);
	return(p);
 } 
 main()
 {
 	char s1[50]="how are you",s2[50]="I am fine,thanks.";
 	printf("%s",strcat(s1,s2));
 }
