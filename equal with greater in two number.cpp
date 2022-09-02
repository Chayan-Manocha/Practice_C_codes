#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter first number "<<endl;
	cin>>a;
	cout<<"enter second number "<<endl;
    cin>>b;
    if(a>b)
    {
    	cout<<"the greater number is "<<a<<endl;
	}
    else if(a<b)
    {
    cout<<"the greater number is "<<b<<endl;
    }
    else
    {
    	cout<<"both numbers are equal"<<a<<endl;
	}
return 0;
}
