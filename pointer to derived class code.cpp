#include<iostream>
#include<string>
using namespace std;
class person
{
	int id;
	string name;
	int age;
	int no_of_members_in_family;
	public:
		void enter()
		{
			cout<<"enter id of the person "<<endl;
			cin>>id;
			cout<<"enter name of the person "<<endl;
			cin>>name;
			cout<<"enter age of the person "<<endl;
			cin>>age;
			cout<<"enter the members of the person "<<endl;
			cin>>no_of_members_in_family;
		}
		void display()
		{
			cout<<"the id of person is "<<id<<endl;
			cout<<"the age of person is "<<age<<endl;
			cout<<"the name of person is "<<name<<endl;
			cout<<"the family members of person are "<<no_of_members_in_family<<endl;
		}
};
class employee:public person
{
	int emp_id;
	float emp_salary;
	int work_exp;
	public:
		void enter()
		{
			cout<<"enter the id of employee"<<endl;
			cin>>emp_id;
			cout<<"enter the salary of the employee"<<endl;
			cin>>emp_salary;
			cout<<"enter the years of experience gained"<<endl;
			cin>>work_exp;
		 }
		 void display()
		 {
		 	cout<<"the id of employee is "<<emp_id<<endl;
		 	cout<<"the salary of employee is "<<emp_salary<<endl;
		 	cout<<"the work experience of employee is "<<work_exp<<endl;
		  } 
};
int main()
{
	person obj;
	person  *ptrobj;
	ptrobj=&obj;
	ptrobj->enter();
	ptrobj->display();
	employee obj1;
	ptrobj=&obj1;
	ptrobj->enter();
	ptrobj->display();
	return 0;
}
