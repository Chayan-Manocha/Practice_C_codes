#include <iostream>
#include <string>
using namespace std;
int main()
{
	double a,b,c,d,e;
	string f;
	long s;
	cout<<"basic sallary"<<endl;
	cin>>a;
	cout<<"enter HRA"<<endl;
	cin>>b;
	cout<<"enter DA"<<endl;
	cin>>c;
	cout<<"enter gender "<<endl;
	cin>>f;
	e=(a+b+c)*12;
	s=e;
	cout<<"the total sallary is "<<s<<endl;
	if (e < 500000)
	{
		d=0;
		cout<<"your tax is "<<d<<endl;
	}
	else if (e >= 500000 && e<1000000)
	{
		if (f == "male")
		{ 
		d = (0.03 * e);
		cout<<"your tax is "<<d<<endl; 
		}
		else
		{
			d=(0.02 * e);
			cout<<"your tax is "<<d<<endl;
		}
	}
	else if (e>=1000000 && e<3000000)
	{
		if (f == "male")
		{
			d = (0.05 * e);
			cout<<"your tax is "<<d<<endl;
		}
		else
		{
			d = (0.03 * e);
			cout<<"your tax is "<<d<<endl;
		}
	}
	else
	{
	    d = (0.1 * e);
	    cout<<"your tax is "<<d<<endl;
	}
	return 0;
}
