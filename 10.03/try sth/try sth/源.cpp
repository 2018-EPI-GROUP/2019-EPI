#include<stdio.h>
#include<graphics.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

void MoveLetter();
void CreatLetter();
void ShowLetter();
char key;

struct Letter 
{
	char c;//ʲô��ĸ
	int x, y;//����
	int mood;
};
struct Letter letter[10];
DWORD t1,t2;

DWORD t11, t22;
void initGame()
{
	for (int i = 0; i < 15; i++)//��ʼ��ֵΪ-0
	{
		letter[i].mood = 0;
	}
}
int main()
{
	
	srand((unsigned int)time(0));
	initgraph(500, 500);
	initGame();	
	t1 = GetTickCount();
	t11 = GetTickCount();

	while (1)
	{
	
		t2 = GetTickCount();
		
		if (t2 - t1 > 500)//���
		{
			CreatLetter();
			t1 = t2;
		}
		
		ShowLetter();
		
		t22 = GetTickCount();
		if (t22 - t11 > 2)
		{
			MoveLetter();
			t11 = t22;
		}
		
		if (_kbhit())
		{
			key = _getch();
			for (int i = 0; i < 15; i++)
			{
				if (letter[i].mood == 1)
				{
					if (key == letter[i].c)
					{
						letter[i].mood= 0;
					}
				}
				
			}
		}
	}
		
	getchar();
	return 0;
}
void CreatLetter()
{
	
	for (int j = 0; j < 15; j++)//���һ����ĸ
	{
		if (letter[j].mood == 0)
		{
			letter[j].x = rand() % 490;
			letter[j].y = 0;
			letter[j].c = rand() % 26 + 'A';
			letter[j].mood = 1;
			break;
		}
	}

}
void ShowLetter()
{
	cleardevice();
	for (int i = 0; i < 15; i++)
	{
		if (letter[i].mood == 1)
		{
			outtextxy(letter[i].x, letter[i].y, letter[i].c);
		}
	}
}
void MoveLetter()
{
	for (int i = 0; i < 15; i++)
	{
		if (letter[i].mood == 1)
		{
			letter[i].y++;
			if (letter[i].y>500)
			{
				letter[i].y = 0;
			}
		}

	}



}