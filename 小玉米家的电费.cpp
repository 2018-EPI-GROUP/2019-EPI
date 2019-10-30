#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	double b=0.4463,c=0.4663,d=0.5663;
	cin>>a;
	if(a<=400)
	{
		if(a<=150)
		cout<<setprecision(3)<<fixed<<a*b<<endl;
		else
		cout<<setprecision(3)<<fixed<<150*b+(a-150)*c; 
	}
	else
	cout<<setprecision(3)<<fixed<<150*b+250*c+(a-400)*d;
	return 0;   
}
