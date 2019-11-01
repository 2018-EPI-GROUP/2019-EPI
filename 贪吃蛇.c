#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <windows.h>
#include <time.h>
#include <string.h>

void fence();					//围墙赋值 
void emerge();					//全屏展示 
void snake(); 					//生成蛇 
int  food();					//生成食物 
void judgefence();				//硬核撞墙 
void gameover();				//结束界面 
void Welcome();					//欢迎界面 
int  turn();					//蛇身转向 
void move();					//蛇蛇移动 
void exchange();				//地址数组交换数据专用 
int check(int II);				//蛇撞自己 
void mian();                    //主函数中的死循环 



int  score = 2;
char f[20][50];                 
char *p=&f[0][0];
char *q[999]; 
char *Q[999];
int fd,ff = 825;


int main() 
{
	Welcome();
	
	fence();
	snake();
	fd = food();
	emerge();
    mian();
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
	for(i=0; i<=49; i++) 		//上部围墙
	{ 
		f[j][i]='#';

	}
	j=19;
	for(i=0; i<=49; i++) 		//下部围墙
	{ 
		f[j][i]='#';

	}

	for(j=1; j<=18; j++) 		//中心空格区域
	{ 
		for(i=1; i<=48; i++) 
		{
			f[j][i]=' ';

		}
	}
	for(j=1; j<19; j++) 		//左部围墙
	{ 
		i=0;
		f[j][i]='#';
	}
	for(j=1; j<=18; j++) 		//右部围墙
	{ 
		i=49;
		f[j][i]='#';
	}

}


void emerge()
{
	int ncount;
	for(ncount = 0 ; ncount <= 999 ; ncount++)
	{
		printf("%c",*(&f[0][0]+ncount));
		if((ncount+1)%50==0)
		{
			printf("\n");
		}
	}
	
}


void snake()
{
	int j,i=0;
	for(j=16;j<=18;j++)
	{
		f[j][25]='O';
		q[i] = &f[j][25];
		i++;
	}
}


int food()
{
	srand(time(NULL));
	int j,i,x;
	j= 1 + rand() % 18; 
	i = 1 + rand() % 48; 
	f[j][i]='$';
	x=j*50+i;
	return x;
}


void judgefence()
{
	    int i=0,j=0;
        for(j=0;j<=19;j++)
    {
		
		if(j==0||j==19)
		{
			for(i=0;i<49;i++)
			{
				if(f[j][i]=='O')
				return 0;
				else break; 	
			}
			
		}
		else
		{
			for(j=1;j<=18;j++)
			{
				if(f[j][0]=='O'||f[j][49]=='O')
				return 0;
				else break;
			}
		}
	}
}


void gameover()
{
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t\t");
 	printf("You are died!\n");
 	printf("\t\t\t\t\tYour score is %d",(score-2)*100);
}


int turn()
{
	int h=1;
	char click;
	clock_t start, finish;
	start = clock();
	memcpy(Q,q,sizeof(Q));
	while(1)
	{
		finish= clock();
		if(1. == (double)(finish- start) / CLOCKS_PER_SEC)
		return h;
		if(_kbhit())
		{
			click = _getch();
			switch(click)
			{
				case 'w':h = 1;break;
				case 'W':h = 1;break;
				case 's':h = 2;break;
				case 'S':h = 2;break;
				case 'a':h = 3;break;
				case 'A':h = 3;break;
				case 'd':h = 4;break;
				case 'D':h = 4;break;
			}
		}
	}
	exchange();
}


void move()
{
	int A , i , j = 1;
	A = turn();
	switch(A)
	{
		case 1 :q[0]-=50;break;
		case 2 :q[0]+=50;break;
		case 3 :q[0]-=1;break;
		case 4 :q[0]+=1;break;
	}
	*q[0] = 'O';
	for(i = 1 ; i <= score ; i++)
	{
		*q[i] = *q[i-1];		
		if(!(check(i))) 
		{
			gameover;
			return;
		}
		if(p+fd==q[i-1])
		{
			fd = food();
			j = 0;
		}
	}
	
	if(j)
	{
		*q[score] = ' ';
		score++;
	}
}


void exchange()
{
	int i;
	for (i = 0 ; i <= score ; i++)
	{
		q[i+1] = Q[i]; 
	}
	
	
}


int check(int II)
{
	if(q[0]==q[II])
	return 0;
	else 
	return 1;
	
}


void mian()
{
	while(1)
	{
		move();
		system("cls");
		
		judgefence();
		emerge(); 
	
	}
 } 

