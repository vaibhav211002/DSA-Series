#include <bits/stdc++.h>
using namespace std;


class base{
    protected:
    int x;
    public:

    virtual void fun()=0;
    base(int i)
    {
        x=i;
        cout<<"constructor of base called\n";
    }
};

class derived : public base{
    int y;
    public:
    derived(int i,int j):base(i)
    {
        y=j;
    }

    void fun()
    {
        cout<<"x= " <<x<<",y= "<<y<<"\n";
    }

};

int main()
{
    derived d(3,4);
    d.fun();   


    //obj creation using pointer of base class

    base *p=new derived(2,5);
    p->fun();
    return 0;                
}