#include<iostream>
using namespace std;
int main()
{
int x,y,c,d,e,f;
int *p,*q;
cout<<"enter first number "<<endl;
cin>>x;
cout<<"enter second number"<<endl;
cin>>y;
p=&x;
q=&y;
c=*p+*q;
cout<<c<<endl;
d=*p * *q;
cout<<d<<endl;
e=*p-*q;
cout<<e<<endl;
f=*p / *q;
cout<<f<<endl;
return 0;
}
