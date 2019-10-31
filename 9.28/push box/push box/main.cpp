#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

int pass = 0;
int num1 = 0;//定义目标个数
int num2 = 0;//定义实际个数
int a[2][8][8] = {
	{{ 0, 0, 1, 0, 0, 1, 1, 1 },
	{ 1, 1, 1, 2, 0, 0, 0, 1 },
	{ 1, 0, 0, 3, 3, 1, 0, 1 },
	{ 1, 0, 2, 0, 5, 0, 0, 1 },
	{ 1, 1, 1, 4, 0, 1, 1, 1 },
	{ 0, 0, 1, 0, 0, 1, 0, 0 },
	{ 0, 0, 1, 1, 1, 1, 0, 0 } } ,
	{ { 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 1, 0, 0, 0, 1 },
	{ 1, 0, 2, 3, 3, 2, 0, 1 },
	{ 1, 4, 2, 3, 5, 0, 1, 1 },
	{ 1, 0, 2, 3, 3, 2, 0, 1 },
	{ 1, 0, 0, 1, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1 } } };

IMAGE img[7];
void DrawMap()
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			switch (a[pass][i][j])
			{
			case 0:printf("  "); putimage(j * 70, i * 70, &img[0]); break;
			case 1:printf("■"); putimage(j * 70, i * 70, &img[1]); break;
			case 2:printf("口"); putimage(j * 70, i * 70, &img[2]); break;
			case 3:printf("☆"); putimage(j * 70, i * 70, &img[3]); break;
			case 4:printf("♀"); putimage(j * 70, i * 70, &img[4]); break;
			case 5:printf("★"); putimage(j * 70, i * 70, &img[5]); break;
			case 7:printf("♀"); putimage(j * 70, i * 70, &img[4]); break;
			}
		}
		printf("\n");
	}
}
void PlayGame()
{
	int l, h;//记录目标的行和列，方便遍历周围
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (a[pass][i][j] == 4 || a[pass][i][j] == 7)
			{
				l = i;
				h = j;
			}
		}
	}
	printf("%d %d\n", l, h);
	char key;
	key = _getch();

	switch (key)
	{
	case 'w':
	case 72://向上走
		if (a[pass][l - 1][h] == 0 || a[pass][l - 1][h] == 3)//是空地或者目的地
		{
			a[pass][l - 1][h] += 4;//上面的位置变人
			a[pass][l][h] -= 4;//人原来的位置变回原来的
		}
		else if (a[pass][l - 1][h] == 2 || a[pass][l - 1][h] == 5)//如果是箱子
		{
			if (a[pass][l - 2][h] == 0 || a[pass][l - 2][h] == 3)//箱子后面是空地或者目的地
			{
				a[pass][l - 2][h] += 2;
				a[pass][l - 1][h] += 2;
				a[pass][l][h] -= 4;
			}
		}
		break;
	case 's':
	case 80://向下走
		if (a[pass][l + 1][h] == 0 || a[pass][l + 1][h] == 3)//是空地或者目的地
		{
			a[pass][l + 1][h] += 4;//下面的位置变人
			a[pass][l][h] -= 4;//人原来的位置变回原来的
		}
		else if (a[pass][l + 1][h] == 2 || a[pass][l + 1][h] == 5)//如果是箱子
		{
			if (a[pass][l + 2][h] == 0 || a[pass][l + 2][h] == 3)//箱子后面是空地或者目的地
			{
				a[pass][l + 2][h] += 2;
				a[pass][l + 1][h] += 2;
				a[pass][l][h] -= 4;
			}
		}
		break;
	case 'a':
	case 75://向左走
		if (a[pass][l][h - 1] == 0 || a[pass][l][h - 1] == 3)//是空地或者目的地
		{
			a[pass][l][h - 1] += 4;//左边的位置变人
			a[pass][l][h] -= 4;//人  原来的位置  变回原来的
		}
		else if (a[pass][l][h - 1] == 2 || a[pass][l][h - 1] == 5)//如果是箱子
		{
			if (a[pass][l][h - 2] == 0 || a[pass][l][h - 2] == 3)//箱子后面是空地或者目的地
			{
				a[pass][l][h - 2] += 2;
				a[pass][l][h - 1] += 2;
				a[pass][l][h] -= 4;
			}
		}
		break;
	case 'd':
	case 77:
		if (a[pass][l][h + 1] == 0 || a[pass][l][h + 1] == 3)//是空地或者目的地
		{
			a[pass][l][h + 1] += 4;//右边的位置变人
			a[pass][l][h] -= 4;//人  原来的位置  变回原来的
		}
		else if (a[pass][l][h + 1] == 2 || a[pass][l][h + 1] == 5)//如果是箱子
		{
			if (a[pass][l][h + 2] == 0 || a[pass][l][h + 2] == 3)//箱子后面是空地或者目的地
			{
				a[pass][l][h + 2] += 2;
				a[pass][l][h + 1] += 2;
				a[pass][l][h] -= 4;
			}
		}
		break;
	}
}

int main()
{
	//k宽和高
	initgraph(570,570);
	loadimage(&img[0], "./pushbox/0.jpg", 70, 70);
	loadimage(&img[1], "./pushbox/1.jpg", 70, 70);
	loadimage(&img[2], "./pushbox/2.jpg", 70, 70);
	loadimage(&img[3], "./pushbox/3.jpg", 70, 70);
	loadimage(&img[4], "./pushbox/4.jpg", 70, 70);
	loadimage(&img[5], "./pushbox/5.jpg", 70, 70);
	loadimage(&img[6], "./pushbox/7.jpg", 70, 70);
	/*settextcolor(RED);
	setbkcolor(WHITE);
	cleardevice();
	outtextxy(0,0,L" 鸡你太美！");*/
	
	while (1)//重新开始找
	{
		//找到目的地个数
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (a[pass][i][j] == 3 || a[pass][i][j] == 5)
				{
					num1++;
				}
			}
		}
		while (1)//通关
		{
			//到达个数
			for (int i = 0; i < 8; i++)//遍历
			{
				for (int j = 0; j < 8; j++)
				{
					if (a[pass][i][j] == 5)
					{
						num2++;
					}
				}
			}
			if (num1 == num2)
			{
				pass++;				
				break;
			}
			else
			{
				num2 = 0;
			}
			
			DrawMap();
			PlayGame();
			system("cls");
		}
	}
	
	
		

	/*getchar();*/
	return 0;
}