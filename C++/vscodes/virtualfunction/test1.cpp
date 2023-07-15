#include <bits/stdc++.h>
using namespace std;

class base{
    int x;
    public:

    //virtual void fun()=0;           //pure virtual function is called 
    int getx()
    {
        return x;
    }
};

class derived : public base{
    int y;
    public:

    void fun()
    {
        cout<<"fun() called\n";
    }
};

class derived1 : public base{
    int k;
    public:

    void fun()
    {
        cout<<"fun() called 2\n";
    }
};


int main()
{
    base *a=new derived();
    a->fun();
    base *b=new derived1();
    b->fun();
    
    return 0;
}