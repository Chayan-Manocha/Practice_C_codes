#include <iostream>
using namespace std;
int func(int a,float b)
{
	float c;
	c = a*b;
	return c;
}
int main()
{
	int a;
	float b;
	cout<<"enter number of product "<<endl;
	cin>>a;
	cout<<"enter price per product "<<endl;
	cin>>b;
	cout<<func(a,b);
	return 0;
}
