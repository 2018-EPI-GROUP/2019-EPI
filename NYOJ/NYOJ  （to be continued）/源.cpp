//��#include<stdio.h>
//
//int Plus(int  a, int b)
//{
//	int sum = 0;
//	sum = a + b;
//	return sum;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("sum=%d", Plus(a, b));
//
//	return 0;
//}

//C++��
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << a+b << endl;
//	return 0;
//}

//�ڶ���ASCII�����
//#include<stdio.h>
//
//int main()
//{
//	char str1[30];
//	int n = 0;
//	scanf("%d", &n);
//	
//	while (n)
//	{
//		scanf("%s", &str1);
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = i + 1; j < 3; j++)
//			{
//				if (str1[i]>str1[j])
//				{
//					char temp;
//					temp = str1[i];
//					str1[i] = str1[j];
//					str1[j] = temp;
//				}
//			}
//		}
//
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%c", str1[i]);
//		}
//		n--;
//	}
//
//	return 0;
//}


//����ż������
//
//#include<stdio.h>
//
//int main()
//{
//	//���װ�
//	int n = 0, a = 0, b = 0;
//	scanf("%d", &n);
//	
//	while (n--)//����
//	{
//		scanf("%d", &a);
//		scanf("%d", &b);
//		printf("\n");
//		for (int i = 1; i <= a; i += 2)
//		{
//			printf("%d ", i);
//		}
//		printf("\n");
//		for (int i = 2; i <= a; i += 2)
//		{
//			printf("%d ", i);
//		}
//		printf("\n"); printf("\n");
//		for (int i = 1; i <= b; i += 2)
//		{
//			printf("%d ", i);
//		}
//		printf("\n");
//		for (int i = 2; i <= b; i += 2)
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//	//int n=0,count1=0,count2=0;
//	//scanf("%d", &n);
//	//int a1[500] = { 0 }, a2[500] = {0};
//	//for (int i = 1; i <= n; i++)
//	//{
//	//	if (i % 2 == 0)//ż��
//	//	{
//	//		a1[count1] = i;
//	//		count1++;
//	//	}
//	//	else
//	//	{
//	//		a2[count2] = i;
//	//		count2++;
//	//	}
//	//}
//	//int nm = sizeof(a1);
//	//printf("ż����");
//	//for (int i = 1; i <= nm&&a1[i-1]!=0; i++)
//	//{
//	//	printf("%d ",a1[i-1]); 
//	//}
//	//printf("\n������");
//	//for (int i = 1; i <= nm&&a2[i - 1] != 0; i++)
//	//{
//	//	printf("%d ", a2[i - 1]);
//	//}
//
//
//
//	return 0;
//}

//��Fibonacci��
//#include<stdio.h>
//
//int Fun(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return Fun(n - 1) + Fun(n - 2);
//
//}
//int main()
//{
//	/*int n = 0,m=0;
//	scanf("%d ", &m);
//
//	while (m--)
//	{
//		scanf("%d", &n);
//		printf("\t%d\n", Fun(n));
//	}
//*/
//
//	int m, n, i, s1, s2;
//
//	scanf("%d", &m);
//
//	while (m--)
//
//	{
//		scanf("%d", &n);
//
//		for (i = 3, s1 = s2 = 1; i <= n; i++)
//
//		{
//			//���ȵ��������
//			s1 = s1 + s2;//
//			s2 = s1 - s2;//s2����ƶ�һλ
//
//		}
//
//		printf("%d\n", s1);
//
//	}
//
//
//	return 0;
//}

//�������������
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int m = 0;
//	int a[500] = {0};
//	scanf("%d", &m);
//	while (m--)
//	{
//		scanf("%d", &n);
//
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &a[i]);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			int mood = 0;
//			for (int j = 2; j < a[i]; j++)
//			{
//				if (a[i]%j == 0)
//				{
//					mood = 1;
//					break;
//				}
//			}
//			if (mood == 0&&a[i]!=1)
//			{
//				sum += a[i];
//			}
//
//		}
//		printf(" %d", sum);
//	}
//
//
//	return 0;
//}

//��������������
//#include<stdio.h>
//
//int main()
//{
//	//���������������������һ��������,Ȼ���������Ƚ������M
//	int d1;//m����ߵ����ľ���
//	int d2;//m���ұߵ����ľ���
//	
//	int n = 0;
//
//	scanf("%d", &n);
//	while (n--)
//	{
//		int m = 0;
//		scanf("%d", &m);
//		int a[10000] = { 0 };
//		printf("%d\n", m);
//
//		//������
//
//		int count = 0;//�ж�״̬
//		for (int i = 2; count < m; i++)
//		{
//
//			int mood = 0;
//			for (int j = 2; j < i; j++)
//			{
//				if (i%j == 0)
//				{
//					mood = 1;
//					break;
//				}
//			}
//			if (mood == 0)
//			{
//				a[count] = i;
//				count++;
//			}
//		}
//
//		//for (int i = 0; i < count; i++)
//		//{
//		//	printf(" %d", a[i]);
//		//}
//		//printf("\n");
//		//��������
//		for (int i = 0; i < count; i++)
//		{
//			if (a[i] == m)
//			{
//				printf("%d  0", m);
//				break;
//			}
//			else if (a[i]>m)
//			{
//				d1 = m - a[i - 1];
//				d2 = a[i] - m;
//				if (d1 <= d2)
//				{
//					printf("%d %d ", a[i - 1], d1);
//				}
//				else
//				{
//					printf("%d %d", a[i], d2);
//				}
//				break;
//			}
//		}
//	}
//	
//
//	return 0;
//}

//��5��������ֵ
//#include<stdio.h>
//
//int Max(int a[])
//{
//	int max=a[0];
//	for (int i = 0; i < 5; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	return max;
//}
//int Min(int a[5])
//{
//	int min=a[0];
//	for (int i = 0; i < 5; i++)
//	{
//		if (min>a[i])
//		{
//			min = a[i];
//		}
//	}
//	return min;
//}
//int main()
//{
//	//int a, b, c, d, e;//ͬ�����ɣ����Ա�����һ��������
//	int a[5];
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	printf("%d %d", Min(a), Max(a));
//
//
//	return 0;
//}

//��8�� ��������
/*
10 11 12 1  
 9 16 13 2  
 8 15 14 3 
 7  6  5 4*/

//#include<stdio.h>
//
//int main()
//{
//	//�ƶ����������£������������£�
//	int n = 0;
//	scanf("%d", &n);
//	int flag = 1;//��־
//	int x, y;//����
//	int a[100][100] = {0};//��ʼ��Ϊ0
//	a[x = 0][y = n - 1]=1;
//	while (flag < n*n)
//	{
//		//����x+1
//		while (x < n-1 && !a[x + 1][y])
//		{
//			a[++x][y] = ++flag;
//		}
//		//����
//		while (y>0 && !a[x][y-1])
//		{
//			a[x][--y] = ++flag;
//		}
//		
//		//����
//		while (x>0 && !a[x - 1][y])
//		{
//			a[--x][y] = ++flag;
//		}
//			
//		//����
//		while (y<n-1 && !a[x ][y+1])
//		{
//			a[x][++y] = ++flag;
//		}
//
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf(" %2d", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


/*//�ھ��� ���ŵ��
#include<stdio.h>

int main()
{
	int i=100;
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	while (i--)
	{
		if ( (i % 3 == a) && (i % 5 == b) && (i % 7 == c))
		{
			printf("%d ", i);
			break;
		}
		else if (i ==10)
		{
			printf("NO ANSWER!");
		}
	}
	return 0;
//}*/


//��ʮ����ˮ�ɻ���
//
//#include "stdio.h"
//
//int main(int argc, char const *argv[])
//
//{
//
//	int n = 0;
//
//	//freopen("input.txt","r",stdin);
//
//	while (scanf("%d", &n) == 1)
//
//	{
//
//		if (n != 0)
//
//		{
//
//			if (n == 153 || n == 370 || n == 371 || n == 407) printf("Yes\n");
//
//			else printf("No\n");
//
//		}
//
//	}
//
//	return 0;
//
//}


//#include<iostream>//���ų���
//
//using namespace std;
//
//int main()
//
//{
//
//	int a;
//
//	while (1)
//
//	{
//
//		cin >> a;
//
//		if (a == 0) break;
//
//		cout << ((a == 153 || a == 370 || a == 371 || a == 407) ? "Yes" : "No") << endl;
//
//	}
//
//}


//��11�� 
//
//#include<stdio.h>
//
//int Max(int a,int b)
//{
//	int min = a;
//	int flag= 1;
//	if (a > b)
//	{
//	min = b;
//	}
//	
//	for (int i = 1; i <= min; i++)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			flag = i;		
//		}
//		
//	}
//	return flag;
//}
//int Min(int a, int b)
//{
//	int x = 0;
//	int max = b;
//	if (a > b)
//	{
//		max = a;
//	}
//	for (int i = max;i<=a*b; i++)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			x = i;
//			break;
//		}
//	}
//	return x;
//
//}
//int main()
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//
//	//printf("%d   ", Max(a, b));
//	//int res = Min(a, b);
//	//printf("%d", res);
//	int flag = 0;
//	int max = b;
//	if (a > b)
//	{
//		max = a;
//	}
//	for (int i = max; i <= a*b; i++)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			flag = i;
//		
//		}
//
//	}
//	printf("a dsaf =%d", flag);
//	return 0;
//}


//��ʮ����  ���Ҳ���****
//�㡢Ҽ���������������顢½���⡢�ơ�����ʰ���ۡ�Ǫ������.
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char a[20];
//	while (scanf("%s", a)!=EOF)
//	{
//		int len = strlen(a);
//		int temp = len;//�ж��ٵڼ�λλ��
//		for (int i = 0; i < len; i++)
//		{
//			if (len == 1 && a[i] == '0') printf("��");
//			if (a[i] == '0'&&i == len - 1) { break; }//���һλ �����ʱ�� ����
//			if (a[i] == '0'&&a[i + 1] != '0') { printf("��"); }//������� 1003 Ϊһ������  
//			if (a[i] == '1')printf("Ҽ");
//			if (a[i] == '2')printf("��");
//			if (a[i] == '3')printf("��");
//			if (a[i] == '4')printf("��");
//			if (a[i] == '5')printf("��");
//			if (a[i] == '6')printf("½");
//			if (a[i] == '7')printf("��");
//			if (a[i] == '8')printf("��");
//			if (a[i] == '9')printf("��");
//			if (a[i] != '0')//Ŀǰ��һλ��Ϊ�� �żӵ�λ ����103 ���ܶ���һ�� �� ʮ����	
//			{
//				switch (temp)
//				{	
//				case 2: printf("ʰ"); break;
//				case 3: printf("��"); break;
//				case 4: printf("ǧ"); break;
//				case 5: printf("��"); break;
//				case 6: printf("ʮ��"); break;
//				case 7: printf("����"); break;
//				case 8: printf("ǧ��"); break;
//				case 9: printf("��"); break;
//				case 10: printf("ʮ��"); break;
//				}
//			}
//			if (len == i)
//			{
//				break;
//			}
//			temp--;
//		}
//	}
//	
//	return 0;
//}


//��ʮ����  �žų˷���
//#include<stdio.h>
//
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j < 10; j++)
//		{
//			if (j<=i)
//			printf("%d*%d=%2d  ",j,i,i*j );
//		}
//		printf("\n");
//	}
//	return 0;
//}


////��ʮ�ĵ� �׳���ʽ�ֽ⣨һ��****my
//#include<stdio.h>
//
//int main()
//{
//	//�������ȴ�1������n���ȿ��Ƿ�m������֮���ж��ظ�
//	int time;
//	scanf("%d", &time);
//	while (time--)
//	{
//		int n, m;
//		int count = 0;//����
//		int a[100];
//		int mood = 0;
//		scanf("%d", &n);
//		scanf("%d", &m);
//		for (int i = m; i <= n; i++)//��һ������
//		{
//			if (i%m == 0)
//			{
//				count++;
//				a[mood] = i;
//				mood++;
//			}
//		}
//		for (int i = 0; i < mood; i++)
//		{
//			int  t = a[i] / m;;
//			while (t%m == 0)
//			{
//				if (t % m == 0)
//				{
//					count++;
//					t /= m;
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//		printf(" %d", count);
//	}
//	
//	return 0;
//}//�Լ��������� ����**


//��ʮ����  �׳����⣨����
//����������һ���º���������n������Ȼ����ѭ�������1��n
//#include<stdio.h>
//int Factrial(int n)
//{
//	int sum1 = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 2 != 0)//����
//		{
//			sum1 *= i;
//		}
//	}
//
//	return sum1;
//}
//
//int main()
//{
//	int time;
//	scanf("%d", &time);
//	while (time--)
//	{
//		int n, sum = 0;
//		scanf("%d", &n);
//		for (int i = 1; i <= n; i++)
//		{
//			sum += Factrial(i);
//		}
//		printf("%d ", sum);
//	}
//	
//
//	return 0;
//}


////��ʮ���⣺6174����
////����;����һ����λ����������4��Ԫ�ص��ַ����飬����......Ȼ����ֻ��6174
//#include<stdio.h>
//
//int Max(int n)
//{
//	int sum = 0, arr[4];
//	for (int i = 0; i < 4; i++)
//	{
//		arr[i] = n % 10;
//		n = n / 10;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = i+1; j< 4; j++)
//		{
//			int temp;
//			if (arr[i]<arr[j])
//			{
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	sum = arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];//���ǿ��������飡��
//	return sum;
//}
//int Min(int n)
//{
//	int sum = 0,arr[4];
//	for (int i = 0; i < 4; i++)
//	{
//		arr[i] = n % 10;
//		n = n / 10;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = i + 1; j< 4; j++)
//		{
//			int temp;
//			if (arr[i]>arr[j])
//			{
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	sum = arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
//	return sum;
//}
//
//int main()
//{
//	int n = 1234;
//	scanf("%d", &n);
//	int t = 1,count = 0;
//	
//	while (1)
//	{
//		count++;
//		if (t == Max(t) - Min(t))
//		{
//			break;
//		}
//		t = Max(n) - Min(n);
//		n = t;		
//	}
//	printf("%d ", count);
//
//	//�����ǳ��ԣ������᲻��ɾ����
//	//char a[5];
//	//scanf("%s", a);
//	//char max[5], min[5],pre[5],temp[5];
//	////����ԭ����
//	//for (int j = 0; j< 4; j++)
//	//{
//	//	pre[j] = a[j];
//	//}
//
//	//for (int i = 0; i < 4; i++)
//	//{
//	//	for (int j = i+1; j< 4; j++)
//	//	{
//	//		int temp;
//	//		if (a[i]<a[j])
//	//		{
//	//			temp = a[i];
//	//			a[i] = a[j];
//	//			a[j] = temp;
//	//		}
//	//	}
//	//}
//	//for (int j = 0; j< 4; j++)
//	//{
//	//	max[j] = a[j];
//	//}
//
//	//for (int i = 0; i < 4; i++)
//	//{
//	//	for (int j = i + 1; j< 4; j++)
//	//	{
//	//		int temp;
//	//		if (a[i]>a[j])
//	//		{
//	//			temp = a[i];
//	//			a[i] = a[j];
//	//			a[j] = temp;
//	//		}
//	//	}
//	//}
//	//for (int j = 0; j< 4; j++)
//	//{
//	//	min[j] = a[j];
//	//}
//
//
//	//for (int j = 0; j< 4; j++)
//	//{
//	//	temp[j] = max[j] - min[j];
//	//}
//
//
//	////���
//	//for (int j = 0; j< 4; j++)
//	//{
//	//	printf("%d", temp[j]);
//	//		
//	//}printf("\n");
//	///*for (int j = 0; j< 4; j++)
//	//{
//	//	printf("%c", min[j]);
//	//}*/
//	return 0;
//}


//��ʮ���⣺
//����������һ���ṹ�����飬���ú������룬����ɼ�
//#include<stdio.h>
//
//struct Student
//{
//	//����������������������ĩƽ���ɼ����༶����ɼ����Ƿ���ѧ���ɲ����Ƿ�������ʡ��ѧ������
//	//����������������������ɴ�СдӢ����ĸ��ɵĳ��Ȳ�����20���ַ����������ո񣩣�
//	char name[20];//����
//	int  class_grade;//�༶����ɼ�
//	int  final_grade;//��ĩƽ���ɼ�
//	char stu;//�Ƿ�ѧ���ɲ�
//	char west;//�Ƿ�����
//	int number;//������
//
//};
//int Max(int a[], int n, Student sttt[4])
//{
//	int max=0,flag=0;
//	for (int i = 0; i < n;i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//			flag = i;
//		}
//	}
//	printf("%s\n", sttt[flag].name);
//	return max;
//}
//int Sum(int a[], int n)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += a[i];
//	}
//	return  sum;
//}
//int Put(char* nam, int cla, int fin, char st, char wes, int num)
//{
//	//printf("���������� �༶����ɼ� ��ĩƽ���ɼ� �Ƿ�ѧ���ɲ���Y/N�� �Ƿ�������Y/N�� ������");
//	//scanf("%s %d %d %s %s %d", &nam, &cla, &final, &st, &wes, &num);
//	int sum = 0;
//	if ((st == 'Y' || st == 'y') && cla > 80) sum += 850;
//	if (num >= 1 && fin > 80) sum += 8000;
//	if (fin > 85 && cla > 80) sum += 4000;
//	if (fin > 90) sum += 2000;
//	if ((wes == 'Y' || wes == 'y') && fin > 85) sum += 1000;
//	return sum;
//}
//int main()
//{
//	
//	Student stu[4];
//	int gar[4];
//	printf("���������� �༶����ɼ� ��ĩƽ���ɼ� �Ƿ�ѧ���ɲ���Y/N�� �Ƿ�������Y/N�� ������\n");
//	for (int i = 0; i < 4; i++)
//	{
//		scanf("%s %d %d %s %s %d", &stu[i].name, &stu[i].class_grade, &stu[i].final_grade, &stu[i].stu, &stu[i].west, &stu[i].number);
//		gar[i]= Put(stu[i].name, stu[i].class_grade, stu[i].final_grade, stu[i].stu, stu[i].west, stu[i].number);
//	}
//	printf("%d\n", Max(gar, 4,stu));
//	printf("%d", Sum(gar,4));
//
//	return 0;
//}


//��ʮ���⣺����ͬ��
//#include<stdio.h>
//
//int main()
//{
//	int head = 0, feet = 0, rabbit = 0, chicken = 0;
//	int mood=0;
//	printf("������ͷ�ĸ��� �� �ŵĸ�����");
//	scanf("%d %d", &head, &feet);
//	for (int i = 1; i <= head; i++)//chicken
//	{
//		for (int j = 1; j <= head; j++)//rabbit
//		{
//			if (i * 4 + j * 2 == feet&&i + j == head)
//			{
//				chicken = i;
//				rabbit = j;
//				mood = 0;
//				break;
//			}
//			else
//			{
//				mood = 1;
//			}			
//		}
//	}
//	if (mood == 0)
//		printf("chicken:%d rabbit��%d", chicken, rabbit);
//	else
//		printf("NO ANSWER!");
//
//	return 0;
//}


//��ʮ���⣺Сѧ������
#include<stdio.h>

int main()
{
	
	int count = 0;
	printf("%c", '4');
	while (1)
	{

		char m[5] = { 0 }, n[5] = { 0 };
		scanf("%s %s", &m, &n);
		if (m[0] == '0'&&n[0] == '0')
		{
			//printf("saf");
			break;
		}
		
		/*for (int i = 2; i >= 0; i--)
		{
			if (m[i] + n[i] >= 106)
			{
				count++;
				if (i - 1 >= 0)
				{
					m[i - 1] += 1;
				}
			}
		}
		printf(" %d", count);
	*/
	}


		getchar();

		getchar();
	
	/*char str1[3], str2[3];
	while (1)
	{
		int  count = 0;
		scanf("%s %s", &str1, &str2);
		if (str2[0] == '0' && str1[0] == '0') break;
		int n = sizeof(str1)-1;
		if (str1[n] + str2[n] > 10)
		{
			count++;
			if (str1[n - 1] + str2[n - 1]+1 > 10)
			{
				count++;
				if (str1[n - 2] + str2[n - 2] + 1 > 10)
				{
					count++;
					printf(" %d ", count);
				}
			}
		}
		else if (str1[n - 1] + str2[n - 1]  > 10)
		{
			count++;
			if (str1[n - 2] + str2[n - 2] + 1 > 10)
			{
				count++;
				printf(" %d ", count);
			}
		}
		else if (str1[n - 2] + str2[n - 2] + 1 > 10)
		{
			count++;
			printf(" %d ", count);
		}
		

		printf(" %d ", n);
	}
*/

	return 0;	
}