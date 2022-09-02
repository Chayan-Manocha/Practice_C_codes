#include <iostream>
using namespace std;
int main()
{
	int i,n;
		int sum;
	cout<<"enter a number"<<endl;
	cin>>n;
	sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
