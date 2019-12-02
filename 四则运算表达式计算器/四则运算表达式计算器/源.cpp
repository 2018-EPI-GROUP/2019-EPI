//递归应用
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int _expression();
int _term();
int _factor();


int main()
{
	cout << _expression()<< endl;
	
	system("pause");

	return 0;
}

int _expression()
{
	int result = _term();                  			//表达式要么是项，要么是项+-项	
									//递归调用*项*的值
	while (1) {

		char op = cin.peek();				//peek一下输入流的下一个还有没有需要处理的

		if (op == '+' || op == '-') {

			cin.get();

			int value = _term();                //递归调用*项*的值

			if (op == '+')
				result += value;

			else
				result -= value;
		}
		else
			break;
	}
	return result;
}

int _term()
{
	int result = _factor();			//项要么是因子，要么是因子*/因子				
												//递归调用*因子*的值
	while (1) {

		char op = cin.peek();			//peek一下输入流的下一个还有没有需要处理的

		if (op == '*' || op == '/') {

			cin.get();

			int value = _factor();						//递归调用*因子*的值

			if (op == '*')
				result *= value;

			else
				result /= value;
		}
		else
			break;
	}

	return result;
}

int _factor()
{
	int result = 0;							//因子要么是 左括号 加表达式 加右括号
											//要么是整数
	char c = cin.peek();

	if (c == '(') {

		cin.get();		//拿掉左括号

		result = _expression();		//算出表达式的值

		cin.get();		//拿掉右括号
	}
	else {

		while (isdigit(c)) {

			result = 10 * result + c - '0';		
			//第一个遇到的数是最高位，所以每向后读一个将前面的result乘十并加上这个数
			//即字符类型减去0的ascii值
			
			cin.get();		//拿掉这个数

			c = cin.peek();
		}
	}
	return result;
}
