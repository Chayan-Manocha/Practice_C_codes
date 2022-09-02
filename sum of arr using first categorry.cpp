#include <iostream>
using namespace std;
void func ()
{
	int arr[100],i,n;
	int sum;
	cout<<"enter size "<<endl;
	cin>>n;
	cout<<"enter array"<<endl;
	for(i=0;i<n;i++)
	{
	cin>>arr[i];
}
	sum=0;
	for(i=0;i<n;i++)
	if(arr[i]%2==0)
	{
		sum+=arr[i];
	}
	cout<<sum<<endl;
 } 
 int main()
 {
 	func();
 	return 0;
 }
