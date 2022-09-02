#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
}*start,*ptr,*preptr;
void createlist()
{
	int bal;
	cout<<"enter info for new node"<<endl;
	cin>>bal;
	node*new_node=new node;
	new_node->data=bal;
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=new_node;
}
}
void dltlast()
{
	if(start==NULL)
	{
		cout<<"underflow"<<endl;
		exit(0);
	}
	ptr=start;
	while(ptr->next!=NULL)
	{
		preptr=ptr;
	   ptr=ptr->next;
	}
	preptr->next=NULL;
	delete ptr;
}
void dltfirst()
{
	if(start==NULL)
	{
		cout<<"underflow"<<endl;
		exit(0);
	}
	ptr=start;
	start=start->next;
	delete ptr;
}
void display()
{
	ptr=start;
	while (ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
int main()
{
	char ch='y';
	cout<<"create list"<<endl;
	while(ch=='y')
	{
		createlist();
		cout<<"do you want to add more nodes "<<endl;
		cin>>ch;
	}
	cout<<"display list"<<endl;
	display();
	cout<<"delete first node"<<endl;
	dltfirst();
	cout<<"display list"<<endl;
	display();
	cout<<"delete last node"<<endl;
	dltlast();
	cout<<"display list"<<endl;
	display();
	return 0;
	}
