//用数组存储栈，并实现两栈共享空间

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include"head.h"
using namespace std;

int top1 = 0, top2 = 19;	//栈顶

void push(int *a, int number,int stacknum)
{
	if (top2 - top1 > -1) {

		if (stacknum == 1)
			a[top1++] = number;

		else if (stacknum == 2)
			a[top2--] = number;
	}
	else {
		cout << "Error, the Stack is full." << endl;
	}
	return;
}

void pop(int *a, int stacknum)
{
	int tem = 0;

	if (stacknum == 1) {

		tem = a[top1 - 1];

		top1--;
	}
	else if (stacknum == 2) {

		tem == a[top2 + 1];

		top2++;
	}
	cout << "The number is" << tem << endl;
}

void print(int *a)
{
	cout << endl;

	if (top1 == 0 && top2 == 19) {
		
		cout << "Print error,the stack is empty." << endl;
		
		return;
	}
	else {

		cout << "Stack1:" << endl;

		for (int i = 0; i < top1; i++) 
			cout << a[i] << endl;
		
		cout << "Stack2:" << endl;

		for (int j = 19; j > top2; j--)
			cout << a[j] << endl;
	}
	cout << endl;
}

int main()
{
	int i;

	int a[20];

	while(1){

		char ans[5];

		int num, stnum;

		cout << "What do you want to do? Input number to choose." << endl;
		cout << "push-------------------1" << endl;
		cout << "pop--------------------2" << endl;

		cout << "quit-------------any key" << endl;

		cin >> num;

		if (num == 1) {
	
			while (1) {

				cout << "which stack do you want to push?" << endl;

				cin >> stnum;

				cout << "Input the data" << endl;

				cin >> i;

				push(a, i, stnum);

				print(a);

				cout << "Do you want to push another?(yes/no)" << endl;

				cin >> ans;

				if (strcmp(ans, "no") == 0)
					break;
			}
		}
		else if (num == 2) {

			while (1) {
				if (top1 == 0 && top2 == 19) {

					cout << "Error,the stack is empty." << endl;

					break;
				}
				cout << "which stack do you want to pop?" << endl;

				cin >> stnum;

				pop(a, stnum);

				print(a);

				cout << "Do you want to pop another?(yes/no)" << endl;

				cin >> ans;

				if (strcmp(ans, "no") == 0)
					break;
			}
		}
		else {//quit
			break;
		}
	}
	system("pause");

	return 0;
}