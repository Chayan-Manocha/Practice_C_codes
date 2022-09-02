#include<iostream>
#include<fstream>
using namespace std;
class product
{
    int prod_id,prod_quantity;
    string prod_name;
    public:
    float prod_price;
    void enter()
    {
        cout<<"enter the product id"<<endl;
        cin>>prod_id;
        cout<<"enter the product name"<<endl;
        cin>>prod_name;
        cout<<"enter the product quantity"<<endl;
        cin>>prod_quantity;
        cout<<"enter the product price"<<endl;
        cin>>prod_price;
    }
    void display()
    {
        cout<<"product id is "<<prod_id<<endl;
        cout<<"product name is "<<prod_name<<endl;
        cout<<"product quantity is "<<prod_quantity<<endl;
        cout<<"product price is "<<prod_price<<endl;
    }
};
int main()
{
    product obj,obj1;
    int i,n;
    float cost;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    ofstream fout("prod4.dat",ios::app);
    for(i=0;i<n;i++)
    {
        cout<<"enter the record of products"<<endl;
        obj.enter();
        cout<<"write the data in file "<<endl;
        fout.write((char*) & obj, sizeof(obj));
    }
        fout.close();
    cout<<"read the data in file"<<endl;
    ifstream fin("prod4.dat");
    while (fin.read((char*) & obj1, sizeof(obj1)))
    {
    obj1.display();
    }
    fin.close();
    cout<<"enter the cost by the user"<<endl;
    cin>>cost;
    ifstream fin1("prod4.dat");
    while(fin1.read((char*) & obj1,sizeof(obj1)))
    {
    if(obj1.prod_price>=cost)
    {
        obj1.display();
    }
    }
    fin1.close();
}