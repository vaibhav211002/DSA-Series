#include <bits/stdc++.h>
using namespace std;

class familyincome{

    string name;
    int salary;

    public:

    familyincome()
    {
        cout<<"ENTER NAME OF MEMBER : ";
        getline(cin,name);
        fflush(stdin);
        
        cout<<"ENTER SALARY : ";
        cin>>salary;
        fflush(stdin);
        cout<<endl;
    }

    void display()
    {
        cout<<"NAME OF MEMBER : vaibhav "<<name<<endl;
        cout<<"SALARY : "<<salary<<endl;
    }

    int operator+(familyincome c)
    {
        int a;
        a=this->salary+c.salary;
        a=a/2;
        return a;
    
    }
};


int main()
{
    familyincome a;
    familyincome b;

    int c;
    c=a+b;

    a.display();
    cout<<endl;
    b.display();
    cout<<endl;
    cout<<"average salary : "<<c<<endl;

}