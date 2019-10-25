#include<iostream>
using namespace std;
int main()
{
	int a,b,c,day=0,m;
	for(int i=1;i<8;i++)
	{
		cin>>a>>b;
		c=a+b;
		if(c>8&&c>m)
		{
			m=c;
			day=i;
		}                                 
	}
	cout<<day<<endl;
}
