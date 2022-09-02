#include<iostream>
#include<fstream>
using namespace std;
class train
{
    int train_no,no_of_stations;
    string train_name;
    public:
    float fare;
    void enter()
    {
        cout<<"enter the number of the train"<<endl;
        cin>>train_no;
        cout<<"enter the name of the train"<<endl;
        cin>>train_name;
        cout<<"enter the number of stations of the train"<<endl;
        cin>>no_of_stations;
        cout<<"enter the fare of the train"<<endl;
        cin>>fare;
    }
    void display()
    {
        cout<<"train number is "<<train_no<<endl;
        cout<<"train name is "<<train_name<<endl;
        cout<<"no of stations of the train is"<<no_of_stations<<endl;
        cout<<"fare to be paid is "<<fare<<endl;
    }
};
int main()
{
    train obj;
    int i ,n;
    float x,y;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    ofstream fout("train1.dat");
    for(i=0;i<n;i++)
    {
        cout<<"enter the record into the file "<<endl;
        obj.enter();
        cout<<"write the data in the file "<<endl;
        fout.write((char*)&obj,sizeof(obj));
    }
    fout.close();
    cout<<"copy code to the other file "<<endl;
    ifstream fin("train1.dat");
    ofstream fout1("temp.dat");
    while (fin.read((char*)&obj,sizeof(obj)))
    {
        fout1.write((char*)&obj,sizeof(obj));
    }
    fin.close();
    fout1.close();
    cout<<"search data in the copied file "<<endl;
    cout<<"enter the min value of amount to be paid"<<endl;
    cin>>x;
    cout<<"enter the max value of amount to be paid "<<endl;
    cin>>y;
    ifstream fin2("temp.dat");
    while(fin2.read((char*)&obj,sizeof(obj)))
    {
        if(obj.fare>=x && obj.fare<=y)
        {
            obj.display();
        }
    }
    fin2.close();
    return 0;
}