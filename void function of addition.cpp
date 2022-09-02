#include <iostream>
using namespace std;
void func(int a, int b)
{
	int c;
	c=a+b;
	cout<<"addition of number "<<c<<endl;
}
int main()
{
	int a,b;
	cout<<"enter number "<<endl;
	cin>>a;
	cout<<"enter secod number "<<endl;
	cin>>b;
	func(a,b);
	return 0;
}
