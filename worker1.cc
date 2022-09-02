#include<iostream>
#include<fstream>
using namespace std;
class worker
{
    int worker_id,worker_age;
    float per_hour_charges;
    string worker_name;
    public:
    float no_of_working_hours;
    void enter()
    {
        cout<<"enter the worker id"<<endl;
        cin>>worker_id;
        cout<<"enter the age of the worker"<<endl;
        cin>>worker_age;
        cout<<"enter the name of the worker"<<endl;
        cin>>worker_name;
        cout<<"enter the number of hours the worker has worked"<<endl;
        cin>>no_of_working_hours;
        cout<<"enter the per hour wages paid to the worker "<<endl;
        cin>>per_hour_charges; 
    }
    void display()
    {
        cout<<"id of the worker is "<<worker_id<<endl;
        cout<<"age of the worker is "<<worker_age<<endl;
        cout<<"name of the worker is "<<worker_name<<endl;
        cout<<"number of hours the worker has worked is "<<no_of_working_hours<<endl;
        cout<<"per hour wage is "<<per_hour_charges<<endl;
    }
};
int main()
{
    worker obj,obj1;
    int i,n;
    float no_of_hours;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    ofstream fout("worker1.dat");
    for(i=0;i<n;i++)
    {
        cout<<"enter the record of worker in the file "<<endl;
        obj.enter();
        cout<<"write the data in file"<<endl;
        fout.write((char*)&obj,sizeof(obj));
    }
    fout.close();
    cout<<"read data in the file "<<endl;
    ifstream fin("worker1.dat");
    while(fin.read((char*)&obj1,sizeof(obj1)))
    {
        obj1.display();
    }
    fin.close();
    cout<<"search data in the file "<<endl;
    cout<<"enter the number of hours worker should work "<<endl;
    cin>>no_of_hours;
    ifstream fin1("worker1.dat");
    while(fin1.read((char*)&obj1, sizeof(obj1)))
    {
        if(obj1.no_of_working_hours>=no_of_hours)
        {
            obj1.display();
        }
    }
    fin1.close();
    return 0;
}
