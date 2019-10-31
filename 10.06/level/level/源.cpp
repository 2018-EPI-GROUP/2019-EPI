#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<time.h>

char key;
//dance
DWORD t1, t2;
DWORD t3, t4;
struct Letter 
{
	int x, y;//记录坐标
	int c;//所带字母
	int mood;//所带状态0或1
};
struct Letter letter[15];
void InitGame()
{
	//初始化
	for (int i = 0; i < 15; i++)
	{
		letter[i].mood = 0;
	}
}
void CreatLetter()
{
	//创造字母
	for (int i = 0; i < 15; i++)
	{
		if (letter[i].mood == 0)
		{
			letter[i].x = rand() % 500;
			letter[i].y = 0;
			letter[i].c = rand() % 26 + 65;
			letter[i].mood = 1;
			break;//一个一个
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
				letter[i].mood = 0;
			}
		}
	}


}
int main()
{
	srand((unsigned int)time(0));
	initgraph(500, 500);
	InitGame();
	
	t1= GetTickCount();
	t3 = GetTickCount();
	while (1)
	{
		t2 = GetTickCount();
		t4 = GetTickCount();
		if (t2 - t1 > 1000)
		{
			CreatLetter();
			t1 = t2;
		}
		
		ShowLetter();

		if (t4 - t3 > 10)
		{
			MoveLetter();
			t3 = t4;
		}
		if (kbhit())
		{
			key = _getch();
			for (int i = 0; i < 15; i++)//遍历之后必须与状态1比较
			{
				if (letter[i].mood == 1)
				{
					if (key == letter[i].c)
					{
						letter[i].mood = 0;
					}
				}		
			}
		}		
	}





	return 0;
}
//	// 正三角
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <10 - i; j++)
//		{
//			printf(" ");
//		}
//		for (int h = 0; h < i; h++)
//		{
//			printf(" *");
//		}
//		printf("\n");
//	}
//	//倒三角
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (int h = 0; h <10-i; h++)
//		{
//			printf(" *");
//		}
//		
//		printf("\n");
//	}
//	
///*
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= 9 - i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}*/
//
//	/*for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= 9; j++)
//		{
//			if (j <= i)
//			{
//				printf("%d*%d=%d\t", j, i, i*j);
//			}
//		}
//		printf("\n");
//	}
//*/
//


































//#include<stdio.h>
//#include<conio.h>
//#include<graphics.h>


//
//int fun(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x * fun(x - 1);
//	}
//}
//
//int main()
//{
//	/*initgraph(500, 500);
//	setbkcolor(RED);
//	outtextxy(0, 0, L"鸡你太美！");
//	settextstyle(100, 0, L"宋体");*/
//	int a=0;
//	printf("请输入你想要的阶乘:\n");
//	scanf_s("%d",&a);
//	fun(a);
//	int result = fun(a);
//	printf("%d\n", fun(a));
//	printf("%d\n", result);
//
//	return 0;
//}