#include <iostream>
using namespace std;
struct house
{
	int id;
	string area, city;
	double length, breadth,s1,s2,p1,p2;
}h1,h2;
	int main()
	{
	cout<<"enter house 1 details"<<endl;
	cout<<"enter block no"<<endl;
	cin>>h1.id;
	cin.ignore();
	cout<<"enter area"<<endl;
	cin>>h1.area;
	cout<<"enter city "<<endl;
	cin>>h1.city;
	cout<<"enter length in feet"<<endl;
	cin>>h1.length;
	cout<<"enter breadth in feet"<<endl;
	cin>>h1.breadth;
	cout<<"display ditails of house 1"<<endl;
	cout<<"block no"<<h1.id<<endl;
	cout<<"area"<<h1.area<<endl;
	cout<<"city"<<h1.city<<endl;
	cout<<"length in feet"<<h1.length<<endl;
	cout<<"breadth in feet"<<h1.breadth<<endl;
	cout<<"enter house 2 details "<<endl;
	cout<<"enter block no"<<endl;
	cin>>h2.id;
	cout<<"enter area"<<endl;
	cin>>h2.area;
	cout<<"enter city"<<endl;
	cin>>h2.city;
	cout<<"enter length in feet"<<endl;
	cin>>h2.length;
	cout<<"enter breadth in feet"<<endl;
	cin>>h2.breadth;
	cout<<"display details of house 2"<<endl;
	cout<<"block no"<<h2.id<<endl;
	cout<<"area"<<h2.area<<endl;
	cout<<"city"<<h2.city<<endl;
	cout<<"length in feet"<<h2.length<<endl;
	cout<<"breadth in feet"<<h2.breadth<<endl;

	h1.s1=h1.length*h1.breadth;
	h2.s2=h2.length*h2.breadth;
cout<<"the area of first home"<<h1.s1<<endl;
cout<<"the area of second home"<<h2.s2<<endl;
	h1.p1=h1.s1*10000;
	h2.p2=h2.s2*10000;
	cout<<"the total cost of first home"<<h1.p1<<endl;
	cout<<"the total cost of second home"<<h2.p2<<endl;
	if(h1.p1>=h2.p2)
	{
		cout<<"h1.id is larger"<<endl;
	}
	else
	{
		cout<<"h2.id is larger"<<endl;
	}
	return 0;
	
}
	
