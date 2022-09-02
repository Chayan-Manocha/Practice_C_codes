#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter number "<<endl;
	cin>>a;
	if(a<0)
	{
		cout<<"the number is negative "<<endl;
	}
	else if(a%2)
	{
		cout<<"the number is even "<<endl;
	}
	else
	{
		cout<<"the number is odd "<<endl;
	}
	return 0;
}
