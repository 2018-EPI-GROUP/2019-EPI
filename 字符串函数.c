#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int mylen(const char*s)
{
	int cnt = 0 ;
	while( s[cnt] != '\0')
		{cnt++;
		}
	return cnt;
}

int mycmp(char *s1 , char *s2)
{
	while( *s1 == *s2 && *s1 != '\0' )
		{s1++ ;
		s2++  ;
		}
	return *s1 - *s2 ;
}

char mycpy(char *dst , const char *src)
{
	char* ret = dst ;
	while(*dst++ = *src++)
		;
/*	while( *src != '\0' )
		{*dst = *src ;
		dst++ ;
		src++ ;
		}
*/	*dst = '\0' ;
	return ret;
}

char mycat(char*s1 ,const char*s2 )
{
	char*ret = s1 ;
	int n = strlen( s1 ) ;
	while( *s2 ){
		*(s1 + n) = *s2 ;
		s1++ ;
		s2++ ;
	}
	*(s1 + n) = '\0' ;
	return ret ;
}

int main(void)
{
	char line1[] = "world!" ;
	char*line2 = (char*)malloc(strlen(line1) + 1) ;
	char*line3 = (char*)malloc(strlen(line1) + 1) ;
	char line4[] = "Hello " ;
	char line5[] = "Hello " ;
	char line6[] = "world! " ;

	strcpy(line2 , line1) ;
	mycpy( line3 , line1 ) ;
	
	printf("line1  = %s\n", line1) ;
	printf("strcpy = %s\n", line2) ;
	printf("mycpy  = %s\n", line3) ;
	
	printf("strlen = %d\n", strlen(line1) ) ;
	printf("mylen  = %d\n", mylen (line1) ) ;
	printf("sizeof = %d\n", sizeof(line1) ) ;
	
	printf("strcmp = %d\n", strcmp( line1, line2 ) ) ;
	printf("mycmp  = %d\n", mycmp ( line1, line2 ) ) ;
	
	strcat(line4 , line1) ;	
	mycat (line5 , line6) ;
	
	printf("strcat = %s\n", line4) ;
	printf("mycat  = %s\n", line5) ;
	
	free(line2) ;
	free(line3) ;
	
	return 0 ;
}
