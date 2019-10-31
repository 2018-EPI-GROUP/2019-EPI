//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <conio.h>
//#include <graphics.h>
//
////结构体 letter(字母)
//struct Letter
//{
//	int x, y; //坐标！
//	char c;   //什么字母！
//};
//
//int main()
//{
//	srand(time(0)); //随机数种子
//
//	//打开一个窗口
//	initgraph(640, 480);
//	char key;  //按键
//	struct Letter letter; //结构体变量 letter
//
//	while (1)
//	{
//		letter.x = rand() % 630;  //
//		letter.y = 0;
//		letter.c = rand() % 26 + 'A';  //取随机的26个大写字母
//
//		for (; letter.y < 480; letter.y++)
//		{
//			cleardevice();
//			outtextxy(letter.x, letter.y, letter.c);
//
//			if (kbhit())  //kbhit函数 如果有按键动作 返回1 没有按键动作 返回0
//			{
//				key = getch();  //接收按键
//				if (key == letter.c) //按键和显示的字符相同
//				{
//					break;  //跳出循环   if不是循环分支
//				}
//			}
//			Sleep(25);
//		}
//	}
//	return 0;
//}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <graphics.h>

#define NUM 15

//结构体 letter(字母)
struct Letter
{
	int x, y; //坐标！
	char c;   //什么字母！
	int flag; //状态 存不存在
};

struct Letter letter[NUM];
DWORD t1, t2;  //时间
DWORD tt1, tt2;


//产生一个字母
void CreateLetter()
{
	//就是要找一个flag为0的内存 存放一个字母！
	for (int i = 0; i < NUM; i++)  //遍历这个数组
	{
		if (letter[i].flag == 0) //找到了一个没有使用的内存
		{
			letter[i].x = rand() % 630; //随机的x
			letter[i].y = 0;
			letter[i].c = rand() % 26 + 'A';
			letter[i].flag = 1;  //标记好  这一块内存已经使用了。
			break;
		}
	}
}

//显示字母
void ShowLetter()
{
	cleardevice();
	//显示出来！
	for (int i = 0; i < NUM; i++)
	{
		if (letter[i].flag == 1)
		{
			outtextxy(letter[i].x, letter[i].y, letter[i].c);
		}
	}
}

//移动字母
void MoveLetter()
{
	//移动  女孩子  我爱你  I love you  美国人
	for (int i = 0; i < NUM; i++)
	{
		if (letter[i].flag == 1)
		{
			letter[i].y++;
			if (letter[i].y>480) //移动到外面去了！
				letter[i].flag = 0;
		}
	}
}

void InitGame()
{
	//准备工作 一个都没有！！！  10
	for (int i = 0; i < NUM; i++)
	{
		letter[i].flag = 0; //10个内存保留  一个字母都没有！
	}
}


int main()
{
	srand(time(0));
	initgraph(640, 480);

	InitGame();
	char key;
	t1 = GetTickCount(); //获取的系统的时间 21 51 49 32
	tt1 = GetTickCount();
	while (1)
	{
		//产生一个字母
		t2 = GetTickCount(); //获取的系统的时间
		if (t2 - t1 > 1000)  //500
		{
			CreateLetter();
			t1 = t2;
		}

		//显示所有的flag为1的字母
		ShowLetter();

		//移动所有flag为1的字母
		tt2 = GetTickCount();
		if (tt2 - tt1 > 2)
		{
			MoveLetter();
			tt1 = tt2;
		}

		if (kbhit())
		{
			key = getch(); //字母  

			for (int i = 0; i < NUM; i++)//遍历数组
			{
				if (letter[i].flag == 1)//找存在的字母
				{
					if (key == letter[i].c)//存在字母跟key作比较
					{
						letter[i].flag = 0;
					}
				}
			}

			//遍历数组
			//找存在的字母
			//存在字母跟key作比较
			//相同 flag = 0  不会显示
			//继续去比较 不要break 所有跟key相同的 干掉
			//不需要  break;  只能干掉一个
			//留这个问题在这里!!! 队列！！
			//理解能力 到了  很简单  
		}
	}
	return 0;
}
