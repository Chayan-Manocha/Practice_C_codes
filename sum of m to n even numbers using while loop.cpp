#include<iostream>
using namespace std;
int main()
{
	int i,m,n;
	int sum;
cout<<"enter first number"<<endl;
cin>>m;
cout<<"enter second number"<<endl;
cin>>n;
sum = 0;
i=m;
while(i<=n)
{
	if(i%2==0)
	{
		sum+=i;
	}
	i++;
}
cout<<sum<<endl;
return 0;
}
