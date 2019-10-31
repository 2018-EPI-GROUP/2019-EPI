#include <stdio.h>
#include <stdlib.h>  //system("cls");  //清除控制台的显示
#include <conio.h>  
/*
conio.h头文件：
key = getch();   conio.h  接收字符  j 直接j保存到key
key = getchar(); stdio.h  接收字符  j 进缓冲区 等什么时候才到key？ \n
本质上来讲：getchar() 进入键盘缓冲区
getch()  不需要进入键盘缓冲区
kbhit();
*/

//0是空地
//1是墙
//2是箱子
//3目的地
//4 人
//5 箱子 + 目的地
//7 人 + 目的地 
int map[8][8] = {
	{ 0, 0, 1, 1, 1, 1, 0, 0 },
	{ 0, 0, 1, 0, 0, 1, 1, 1 },
	{ 1, 1, 1, 2, 0, 0, 0, 1 },
	{ 1, 0, 0, 3, 3, 1, 0, 1 },
	{ 1, 0, 2, 0, 5, 0, 0, 1 },
	{ 1, 1, 1, 0, 0, 1, 1, 1 },
	{ 0, 0, 1, 4, 0, 1, 0, 0 },
	{ 0, 0, 1, 1, 1, 1, 0, 0 } };

//绘制地图的函数
void DrawMap()
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			switch (map[i][j])
			{
			case 0:printf("  "); break;
			case 1:printf("■"); break;
			case 2:printf("口"); break;
			case 3:printf("☆"); break;
			case 4:printf("♀"); break;
			case 5:printf("★"); break;
			case 7:printf("♀"); break;
			}
		}
		printf("\n");
	}
}

void PlayGame()
{
	//1.地图是根据数组的元素值来确定的。
	//2.人 箱子 产生变化  修改数组的元素就可以！
	//3.按下键盘 上下左右 修改！
	//4.修改哪些地方呢？ 只修改人周围的一些元素(搞定)
	//5.
	/*
	按键盘  就会动？ 以上为例：
	1.人的前面是空地     ok
	2.人的前面是目的地   ok
	4.人的前面是箱子     不一定
	4.1 箱子的前面是空地  ok
	4.2 箱子的前面是目的地 ok
	*/

	//人的周围  行和列 
	int r, c; //人的行和列
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)  //for遍历数组
		{
			if (map[i][j] == 4 || map[i][j] == 7) //判断人的位置
			{
				r = i;
				c = j;
			}
		}
	}
	//map[r][c]  人！
	printf("%d %d\n", r, c);

	//按键盘移动
	char key; //字符
	key = getch();  //getchar();接收一个字符
	//w 上  s下  a左  d右
	switch (key)
	{
	case 'w':
	case 72: //上键
		//1.如果人的前面是空地 2.人的前面是目的地
		if (map[r - 1][c] == 0 || map[r - 1][c] == 3)
		{
			map[r - 1][c] += 4;  //人的前面 + 4
			map[r][c] -= 4;		//人原来的位置 -4
		}
		//4.人的前面是箱子     不一定
		else if (map[r - 1][c] == 2 || map[r - 1][c] == 5)
		{
			//4.1 箱子的前面是空地  ok
			//4.2 箱子的前面是目的地 ok
			if (map[r - 2][c] == 0 || map[r - 2][c] == 3)
			{
				map[r - 2][c] += 2;
				map[r - 1][c] += 2;
				map[r][c] -= 4;
			}
		}
		break;

	case 's': //80  KEY_DOWN
	case 80:
		//1.如果人的前面是空地 2.人的前面是目的地
		if (map[r + 1][c] == 0 || map[r + 1][c] == 3)
		{
			map[r + 1][c] += 4;  //人的前面 + 4
			map[r][c] -= 4;		//人原来的位置 -4
		}
		//4.人的前面是箱子     不一定
		else if (map[r + 1][c] == 2 || map[r + 1][c] == 5)
		{
			//4.1 箱子的前面是空地  ok
			//4.2 箱子的前面是目的地 ok
			if (map[r + 2][c] == 0 || map[r + 2][c] == 3)
			{
				map[r + 2][c] += 2;
				map[r + 1][c] += 2;
				map[r][c] -= 4;
			}
		}
		break;
	case 'a': //75  KEY_LEFT
	case 75:
		//1.如果人的前面是空地 2.人的前面是目的地
		if (map[r][c - 1] == 0 || map[r][c - 1] == 3)
		{
			map[r][c - 1] += 4;  //人的前面 + 4
			map[r][c] -= 4;		//人原来的位置 -4
		}
		//4.人的前面是箱子     不一定
		else if (map[r][c - 1] == 2 || map[r][c - 1] == 5)
		{
			//4.1 箱子的前面是空地  ok
			//4.2 箱子的前面是目的地 ok
			if (map[r][c - 2] == 0 || map[r][c - 2] == 3)
			{
				map[r][c - 2] += 2;
				map[r][c - 1] += 2;
				map[r][c] -= 4;
			}
		}
		break;
	case 'd': //77  KEY_RIGHT  
	case 77:
		//1.如果人的前面是空地 2.人的前面是目的地
		if (map[r][c + 1] == 0 || map[r][c + 1] == 3)
		{
			map[r][c + 1] += 4;  //人的前面 + 4
			map[r][c] -= 4;		//人原来的位置 -4
		}
		//4.人的前面是箱子     不一定
		else if (map[r][c + 1] == 2 || map[r][c + 1] == 5)
		{
			//4.1 箱子的前面是空地  ok
			//4.2 箱子的前面是目的地 ok
			if (map[r][c + 2] == 0 || map[r][c + 2] == 3)
			{
				map[r][c + 2] += 2;
				map[r][c + 1] += 2;
				map[r][c] -= 4;
			}
		}
		break;  //ctrl + alt + a
	}
}

int main()
{
	while (1)
	{
		system("cls");
		DrawMap();
		PlayGame();
	}
	return 0;
}