//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <conio.h>
//#include <graphics.h>
//
////�ṹ�� letter(��ĸ)
//struct Letter
//{
//	int x, y; //���꣡
//	char c;   //ʲô��ĸ��
//};
//
//int main()
//{
//	srand(time(0)); //���������
//
//	//��һ������
//	initgraph(640, 480);
//	char key;  //����
//	struct Letter letter; //�ṹ����� letter
//
//	while (1)
//	{
//		letter.x = rand() % 630;  //
//		letter.y = 0;
//		letter.c = rand() % 26 + 'A';  //ȡ�����26����д��ĸ
//
//		for (; letter.y < 480; letter.y++)
//		{
//			cleardevice();
//			outtextxy(letter.x, letter.y, letter.c);
//
//			if (kbhit())  //kbhit���� ����а������� ����1 û�а������� ����0
//			{
//				key = getch();  //���հ���
//				if (key == letter.c) //��������ʾ���ַ���ͬ
//				{
//					break;  //����ѭ��   if����ѭ����֧
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

//�ṹ�� letter(��ĸ)
struct Letter
{
	int x, y; //���꣡
	char c;   //ʲô��ĸ��
	int flag; //״̬ �治����
};

struct Letter letter[NUM];
DWORD t1, t2;  //ʱ��
DWORD tt1, tt2;


//����һ����ĸ
void CreateLetter()
{
	//����Ҫ��һ��flagΪ0���ڴ� ���һ����ĸ��
	for (int i = 0; i < NUM; i++)  //�����������
	{
		if (letter[i].flag == 0) //�ҵ���һ��û��ʹ�õ��ڴ�
		{
			letter[i].x = rand() % 630; //�����x
			letter[i].y = 0;
			letter[i].c = rand() % 26 + 'A';
			letter[i].flag = 1;  //��Ǻ�  ��һ���ڴ��Ѿ�ʹ���ˡ�
			break;
		}
	}
}

//��ʾ��ĸ
void ShowLetter()
{
	cleardevice();
	//��ʾ������
	for (int i = 0; i < NUM; i++)
	{
		if (letter[i].flag == 1)
		{
			outtextxy(letter[i].x, letter[i].y, letter[i].c);
		}
	}
}

//�ƶ���ĸ
void MoveLetter()
{
	//�ƶ�  Ů����  �Ұ���  I love you  ������
	for (int i = 0; i < NUM; i++)
	{
		if (letter[i].flag == 1)
		{
			letter[i].y++;
			if (letter[i].y>480) //�ƶ�������ȥ�ˣ�
				letter[i].flag = 0;
		}
	}
}

void InitGame()
{
	//׼������ һ����û�У�����  10
	for (int i = 0; i < NUM; i++)
	{
		letter[i].flag = 0; //10���ڴ汣��  һ����ĸ��û�У�
	}
}


int main()
{
	srand(time(0));
	initgraph(640, 480);

	InitGame();
	char key;
	t1 = GetTickCount(); //��ȡ��ϵͳ��ʱ�� 21 51 49 32
	tt1 = GetTickCount();
	while (1)
	{
		//����һ����ĸ
		t2 = GetTickCount(); //��ȡ��ϵͳ��ʱ��
		if (t2 - t1 > 1000)  //500
		{
			CreateLetter();
			t1 = t2;
		}

		//��ʾ���е�flagΪ1����ĸ
		ShowLetter();

		//�ƶ�����flagΪ1����ĸ
		tt2 = GetTickCount();
		if (tt2 - tt1 > 2)
		{
			MoveLetter();
			tt1 = tt2;
		}

		if (kbhit())
		{
			key = getch(); //��ĸ  

			for (int i = 0; i < NUM; i++)//��������
			{
				if (letter[i].flag == 1)//�Ҵ��ڵ���ĸ
				{
					if (key == letter[i].c)//������ĸ��key���Ƚ�
					{
						letter[i].flag = 0;
					}
				}
			}

			//��������
			//�Ҵ��ڵ���ĸ
			//������ĸ��key���Ƚ�
			//��ͬ flag = 0  ������ʾ
			//����ȥ�Ƚ� ��Ҫbreak ���и�key��ͬ�� �ɵ�
			//����Ҫ  break;  ֻ�ܸɵ�һ��
			//���������������!!! ���У���
			//������� ����  �ܼ�  
		}
	}
	return 0;
}
