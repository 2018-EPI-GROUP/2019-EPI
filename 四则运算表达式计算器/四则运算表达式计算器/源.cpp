//�ݹ�Ӧ��
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
	int result = _term();                  			//���ʽҪô���Ҫô����+-��	
									//�ݹ����*��*��ֵ
	while (1) {

		char op = cin.peek();				//peekһ������������һ������û����Ҫ�����

		if (op == '+' || op == '-') {

			cin.get();

			int value = _term();                //�ݹ����*��*��ֵ

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
	int result = _factor();			//��Ҫô�����ӣ�Ҫô������*/����				
												//�ݹ����*����*��ֵ
	while (1) {

		char op = cin.peek();			//peekһ������������һ������û����Ҫ�����

		if (op == '*' || op == '/') {

			cin.get();

			int value = _factor();						//�ݹ����*����*��ֵ

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
	int result = 0;							//����Ҫô�� ������ �ӱ��ʽ ��������
											//Ҫô������
	char c = cin.peek();

	if (c == '(') {

		cin.get();		//�õ�������

		result = _expression();		//������ʽ��ֵ

		cin.get();		//�õ�������
	}
	else {

		while (isdigit(c)) {

			result = 10 * result + c - '0';		
			//��һ���������������λ������ÿ����һ����ǰ���result��ʮ�����������
			//���ַ����ͼ�ȥ0��asciiֵ
			
			cin.get();		//�õ������

			c = cin.peek();
		}
	}
	return result;
}
