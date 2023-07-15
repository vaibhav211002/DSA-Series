#include <bits/stdc++.h>
using namespace std;


class mamal{
    public :
    mamal()
    {
        cout<<"ran 1 base class"<<endl;
    }
    mamal(int a)
    {
        cout<<"numeric mamal was called"<<endl;
    }

    func()
    {
        cout<<"print from base 1"<<endl;
    }
};

class winges{
    public:
    winges()
    {
        cout<<"ran 2 base class"<<endl;
    }
    func()
    {
        cout<<"print from base 2"<<endl;
    }
};


//child class

class bat: public winges,public mamal{

    public:
    bat()
    { cout<<"ran child class"<<endl;
    }
    bat(int a):mamal(a)
    {
        cout;
    }
};
int main()
{
    
    bat b1;
    //mamal b2(3);

    b1.mamal::func;
    b1.winges::func;

    return 0;
}