#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

int pass = 0;
int num1 = 0;//����Ŀ�����
int num2 = 0;//����ʵ�ʸ���
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
			case 1:printf("��"); putimage(j * 70, i * 70, &img[1]); break;
			case 2:printf("��"); putimage(j * 70, i * 70, &img[2]); break;
			case 3:printf("��"); putimage(j * 70, i * 70, &img[3]); break;
			case 4:printf("��"); putimage(j * 70, i * 70, &img[4]); break;
			case 5:printf("��"); putimage(j * 70, i * 70, &img[5]); break;
			case 7:printf("��"); putimage(j * 70, i * 70, &img[4]); break;
			}
		}
		printf("\n");
	}
}
void PlayGame()
{
	int l, h;//��¼Ŀ����к��У����������Χ
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
	case 72://������
		if (a[pass][l - 1][h] == 0 || a[pass][l - 1][h] == 3)//�ǿյػ���Ŀ�ĵ�
		{
			a[pass][l - 1][h] += 4;//�����λ�ñ���
			a[pass][l][h] -= 4;//��ԭ����λ�ñ��ԭ����
		}
		else if (a[pass][l - 1][h] == 2 || a[pass][l - 1][h] == 5)//���������
		{
			if (a[pass][l - 2][h] == 0 || a[pass][l - 2][h] == 3)//���Ӻ����ǿյػ���Ŀ�ĵ�
			{
				a[pass][l - 2][h] += 2;
				a[pass][l - 1][h] += 2;
				a[pass][l][h] -= 4;
			}
		}
		break;
	case 's':
	case 80://������
		if (a[pass][l + 1][h] == 0 || a[pass][l + 1][h] == 3)//�ǿյػ���Ŀ�ĵ�
		{
			a[pass][l + 1][h] += 4;//�����λ�ñ���
			a[pass][l][h] -= 4;//��ԭ����λ�ñ��ԭ����
		}
		else if (a[pass][l + 1][h] == 2 || a[pass][l + 1][h] == 5)//���������
		{
			if (a[pass][l + 2][h] == 0 || a[pass][l + 2][h] == 3)//���Ӻ����ǿյػ���Ŀ�ĵ�
			{
				a[pass][l + 2][h] += 2;
				a[pass][l + 1][h] += 2;
				a[pass][l][h] -= 4;
			}
		}
		break;
	case 'a':
	case 75://������
		if (a[pass][l][h - 1] == 0 || a[pass][l][h - 1] == 3)//�ǿյػ���Ŀ�ĵ�
		{
			a[pass][l][h - 1] += 4;//��ߵ�λ�ñ���
			a[pass][l][h] -= 4;//��  ԭ����λ��  ���ԭ����
		}
		else if (a[pass][l][h - 1] == 2 || a[pass][l][h - 1] == 5)//���������
		{
			if (a[pass][l][h - 2] == 0 || a[pass][l][h - 2] == 3)//���Ӻ����ǿյػ���Ŀ�ĵ�
			{
				a[pass][l][h - 2] += 2;
				a[pass][l][h - 1] += 2;
				a[pass][l][h] -= 4;
			}
		}
		break;
	case 'd':
	case 77:
		if (a[pass][l][h + 1] == 0 || a[pass][l][h + 1] == 3)//�ǿյػ���Ŀ�ĵ�
		{
			a[pass][l][h + 1] += 4;//�ұߵ�λ�ñ���
			a[pass][l][h] -= 4;//��  ԭ����λ��  ���ԭ����
		}
		else if (a[pass][l][h + 1] == 2 || a[pass][l][h + 1] == 5)//���������
		{
			if (a[pass][l][h + 2] == 0 || a[pass][l][h + 2] == 3)//���Ӻ����ǿյػ���Ŀ�ĵ�
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
	//k��͸�
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
	outtextxy(0,0,L" ����̫����");*/
	
	while (1)//���¿�ʼ��
	{
		//�ҵ�Ŀ�ĵظ���
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
		while (1)//ͨ��
		{
			//�������
			for (int i = 0; i < 8; i++)//����
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