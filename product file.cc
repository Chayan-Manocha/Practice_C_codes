#include<iostream>
#include<fstream>
using namespace std;
class product
{
    int prod_id,prod_quantity;
    float prod_price;
    string prod_name;
    public:
    void enter()
    {
        cout<<"entervthe product id"<<endl;
        cin>>prod_id;
        cout<<"enter the product name"<<endl;
        cin>>prod_name;
        cout<<"eneter the product quantity"<<endl;
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
    product obj;
    int i,n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    ofstream fout("prod.data");
    for(i=0;i<n;i++)
    {
        cout<<"enter the record of products"<<endl;
        obj.enter();
        cout<<"write the data in file "<<endl;
        fout.write((char*) & obj, sizeof(obj));
        fout.close();
    }
    cout<<"readthe data in file"<<endl;
    ifstream fin("prod.data");
    while (fin.read((char*) & obj, sizeof(obj)))
    {
    obj.display();
    }
    return 0;
}