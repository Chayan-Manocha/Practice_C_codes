#include <iostream>
using namespace std;
int main()
{
	int a;
	double b,c;
	cout<<"enter wages per hour "<<endl;
	cin>>a;
	cout<<"enter number of hours worked "<<endl;
	cin>>b;
	c = (a * b);
	cout<<"wages per hour is "<<a<<endl;
	cout<<"number of hours worked is "<<b<<endl;
	if(b<=8)
	{
		cout<<"the total wage is "<<c<<endl;
	}
	else if(b>=9&&b<=10)
	{
		cout<<"the total wage is "<<c+100<<endl;
	}
	else if(b>=11&&b<=12)
	{
		cout<<"the total wage is "<<c+300<<endl;
	}
	else if(b>=13&&b<=16)
	{
		cout<<"the total wage is "<<c + 500<<endl;
	}
	else
	{
		cout<<"the total wage is "<<c + 600<<endl;
	}
	return 0;
}
