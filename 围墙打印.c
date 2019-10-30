#include<stdio.h>
void fence();					//Χǽ��ֵ 
void emerge(char *p);			//ȫ��չʾ 
void snake(); 					//������ 
void food();					//����ʳ�� 
void judgefence();				//Ӳ��ײǽ 
void gameover();				//�������� 
void Welcome();					//��ӭ���� 
void move();					//�����ƶ� 
int _time();					//����ʱ����� 
int turn();						//����ת�� 


int  score = 0;
char f[20][50];                 
char *p = &f[0][0];


int main() 
{
	Welcome();
	
	
	fence();
	snake();
	food();
	emerge(&f[0][0]);
	
	return 0;
}

void Welcome()
{
	printf("\n\n\n\n\n\n\t\t\t\t\t");
 	printf("Welcome to the game!");
	char ch;
	while (1)
	{
		ch = getch();
		if (ch == ' ')
		{
			system("cls");
			break;
		}
	}
}


void fence() 
{
	int i,j=0;
	for(i=0; i<=49; i++) 		//�ϲ�Χǽ
	{ 
		f[j][i]='#';

	}
	j=19;
	for(i=0; i<=49; i++) 		//�²�Χǽ
	{ 
		f[j][i]='#';

	}

	for(j=1; j<=18; j++) 		//���Ŀո�����
	{ 
		for(i=1; i<=48; i++) 
		{
			f[j][i]=' ';

		}
	}
	for(j=1; j<19; j++) 		//��Χǽ
	{ 
		i=0;
		f[j][i]='#';
	}
	for(j=1; j<=18; j++) 		//�Ҳ�Χǽ
	{ 
		i=49;
		f[j][i]='#';
	}

}


void emerge(char *p)
{
	int ncount;
	for(ncount = 0 ; ncount <= 999 ; ncount++)
	{
		printf("%c",*(p+ncount));
		if((ncount+1)%50==0)
		{
			printf("\n");
		}
	}
	
}

void snake()
{
	int j;
	for(j=16;j<=18;j++)
	{
		f[j][25]='O';
	}
	
}


void food()
{
	srand(time(NULL));
	int j,i;
	j= 1 + rand() % 18; 
	i = 1 + rand() % 48; 
	f[j][i]='@';
}


void judgefence()
{
	int ncount;
	for(ncount = 0 ; ncount <= 999 ; ncount++)
	{
		if(f[0][0]+ncount==1)
		{
			gameover();
			break;
		}
	}
	
	gameover();
}


void gameover()
{
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t\t");
 	printf("You are died!\n");
 	printf("\t\t\t\t\tYour score is %d",score);
}


int turn()
{
	char cc;
	cc = getch();
	if(cc=='a'||'A')return 1;
	else if(cc=='s'||'S')return 2;
	else if(cc=='w'||'W')return 3;
	else if(cc=='d'||'D')return 4;
	else return 0;
}


void move()
{
	int ff;
	while(1)
	{
		ff=turn();
		if(_time() == 5)
		break;
	}
	
}


int _time()
{
	int t1,t2;
	t1 = time(NULL);
	while(1)
	{
		t2 = time(NULL);
		if(t2 - t1 == 1)
		{
			break;
		}
	}
	return 5;
}
