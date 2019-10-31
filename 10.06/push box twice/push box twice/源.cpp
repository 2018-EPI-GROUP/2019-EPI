#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
int height = 0;
int a[2][8][8] = {
	{ 
	{ 0, 0, 1, 0, 0, 1, 1, 1 },
	{ 1, 1, 1, 3, 0, 0, 0, 1 },
	{ 1, 0, 0, 4, 4, 1, 0, 1 },
	{ 1, 2, 3, 0, 7, 0, 0, 1 },
	{ 1, 1, 1, 0, 0, 1, 1, 1 },
	{ 0, 0, 1, 0, 0, 1, 0, 0 },
	{ 0, 0, 1, 1, 1, 1, 0, 0 } },
	{ { 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 1, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 3, 4, 1 },
	{ 1, 0, 0, 0, 0, 3, 4, 1 },
	{ 1, 0, 1, 0, 1, 3, 4, 1 },
	{ 1, 0, 0, 0, 1, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 2, 0, 1 },
	{ 0, 0, 0, 0, 1, 1, 1, 1 } }
 
 }
;
IMAGE img[7];
int num1 = 0; 
int num2 = 0;//1是目标，2是达成

void DrawMap()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			switch (a[height][i][j])
			{
			case 0:printf("  "); putimage(j * 70, i * 70, &img[0]); break;
			case 1:printf("■"); putimage(j * 70, i * 70, &img[1]); break;
			case 2:printf("♀"); putimage(j * 70, i * 70, &img[2]); break;
			case 3:printf("口"); putimage(j * 70, i * 70, &img[3]); break;
			case 4:printf("☆"); putimage(j * 70, i * 70, &img[4]); break;
			case 6:printf("♀"); putimage(j * 70, i * 70, &img[5]); break;
			case 7:printf("★"); putimage(j * 70, i * 70, &img[6]); break;
			}
		}
		printf("\n");
	}
}
void PlayGame()
{
	int l, h;//记录人的位置
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (a[height][i][j] == 2 || a[height][i][j] == 6)
			{
				l = i;
				h = j;
			}
		}
	}
	printf("%d %d", l, h);
	char key;
	key = _getch();

	switch (key)
	{
	case 72:
	case 'w':
		if (a[height][l - 1][h] == 3 || a[height][l - 1][h] == 7)//是箱子欸
		{
			if (a[height][l - 2][h] == 4 || a[height][l - 2][h] == 0)//是可以的欸
			{
				a[height][l - 2][h] += 3;
				a[height][l - 1][h] -= 1;
				a[height][l][h] -= 2;
			}
		}
		if (a[height][l - 1][h] == 4 || a[height][l - 1][h] == 0)//是可以的欸
		{
			a[height][l - 1][h] += 2;
			a[height][l][h] -= 2;
		}
		break;
	case 80:
	case 's':
		if (a[height][l + 1][h] == 3 || a[height][l + 1][h] == 7)//是箱子欸
		{
			if (a[height][l + 2][h] == 4 || a[height][l + 2][h] == 0)//是可以的欸
			{
				a[height][l + 2][h] += 3;
				a[height][l + 1][h] -= 1;
				a[height][l][h] -= 2;
			}
		}
		if (a[height][l + 1][h] == 4 || a[height][l + 1][h] == 0)//是可以的欸
		{
			a[height][l + 1][h] += 2;
			a[height][l][h] -= 2;
		}
		break;
	case 75:
	case 'a':
		if (a[height][l][h - 1] == 3 || a[height][l][h - 1] == 7)//是箱子欸
		{
			if (a[height][l][h - 2] == 4 || a[height][l][h - 2] == 0)//是可以的欸
			{
				a[height][l][h - 2] += 3;
				a[height][l][h - 1] -= 1;
				a[height][l][h] -= 2;
			}
		}
		if (a[height][l][h - 1] == 4 || a[height][l][h - 1] == 0)//是可以的欸
		{
			a[height][l][h - 1] += 2;
			a[height][l][h] -= 2;
		}
		break;
	case 77:
	case 'd':
		if (a[height][l][h + 1] == 3 || a[height][l][h + 1] == 7)//是箱子欸
		{
			if (a[height][l][h + 2] == 4 || a[height][l][h + 2] == 0)//是可以的欸
			{
				a[height][l][h + 2] += 3;
				a[height][l][h + 1] -= 1;
				a[height][l][h] -= 2;
			}
		}
		if (a[height][l][h + 1] == 4 || a[height][l][h + 1] == 0)//是可以的欸
		{
			a[height][l][h + 1] += 2;
			a[height][l][h] -= 2;
		}
		break;
	}
}
int main()
{
	initgraph(560,560);
	loadimage(&img[0], "./pushboxtwice/0.jpg", 70, 70);
	loadimage(&img[1], "./pushboxtwice/1.jpg", 70, 70);
	loadimage(&img[2], "./pushboxtwice/2.jpg", 70, 70);
	loadimage(&img[3], "./pushboxtwice/3.jpg", 70, 70);
	loadimage(&img[4], "./pushboXtwice/4.jpg", 70, 70);
	loadimage(&img[5], "./pushboxtwice/6.jpg", 70, 70);
	loadimage(&img[6], "./pushboxtwice/7.jpg", 70, 70);

	while (1)
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (a[height][i][j] == 4 || a[height][i][j] == 7)
				{
					num1++;//目标数
				}
			}
		}
		while (1)
		{

			DrawMap();
			PlayGame();
			system("cls");

			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (a[height][i][j] == 7)
					{
						num2++;//实际数	
					}
				}
			}
			if (num1 == num2)
			{
				height++;
				break;
			}
			else
			{
				num2 = 0;
			}
		}
	}
	return 0;
}