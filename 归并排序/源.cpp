#include"head.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

void Merge(int *a, int begin, int mid, int end, int *tem);
void Mergesort(int *a, int begin, int end, int *tem);


void Mergesort(int *a, int begin, int end, int *tem)		
{
	if (begin < end) {
		int mid = begin + (end - begin) / 2;

		Mergesort(a, begin, mid, tem);
		Mergesort(a, mid + 1, end, tem);

		Merge(a, begin, mid, end, tem);						
	}
	return;
}


void Merge(int *a, int begin, int mid, int end, int *tem)		
{
	int pb = 0;

	int p1 = begin, p2 = mid + 1;

	while (p1 <= mid && p2 <= end) {

		if (a[p1] < a[p2])
			tem[pb++] = a[p1++];

		else
			tem[pb++] = a[p2++];
	}
	while( p1 <= mid )
		tem[pb++] = a[p1++];

	while( p2 <= end )
		tem[pb++] = a[p2++];

	for (int i = 0; i < end - begin +1; i++)
		a[begin + i] = tem[i];

	return;
}

int main()
{
	int a[10] ,i;

	int tem[10];

	for ( i = 0; i < 10; i++)
		cin >> a[i];

	Mergesort(a, 0, 9, tem);

	cout << endl;

	for ( i = 0; i < 10; i++)
		cout << a[i] << endl;

	system("pause");

	return 0;
}