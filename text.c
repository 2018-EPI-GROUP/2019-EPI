#include<stdio.h>
#include<time.h>
int main()
{
	int h=1;
	char click;
	clock_t start, finish;
	double duration;
	start = clock();
	while(1)
	{
		finish= clock();
		if(2.== (double)(finish- start) / CLOCKS_PER_SEC)
		break;
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
}
