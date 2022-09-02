#include<iostream>
using namespace std;
template <class T>
void func(T x,T y)
{
	int sum=0;
	sum = x+y;
	cout<<sum<<endl;
}
int main()
{
	int x;
	int y;
	int sum;
	cout<<"enter the value of x"<<endl;
	cin>>x;
	cout<<"enter the value of y"<<endl;
	cin>>y;
	func(x,y);
	return 0;
}
