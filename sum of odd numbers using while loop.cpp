#include <iostream>
using namespace std;
int main()
{
	int i,n;
	int sum;
	sum=0;
	cout<<"enter a number "<<endl;
	cin>>n;
	i=1;
	while(i<=n)
	{
		sum+=i;
		i+=2;
	}
	cout<<sum<<endl;
	return 0;
}
