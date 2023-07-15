#include <bits/stdc++.h>
using namespace std;


class Test{
    private:
    int num1;
    int num2;

    public:
    prg()
    {
    set();
    cout<<"num1 : : "<<num1<<endl;
    cout<<"num2 : : "<<num2<<endl;
    sum();
    return 5;

    }

    sum()
    {
     int total;
     total=num1+num2;
     cout<<"TOTAL : "<<total<<endl;

    }

 

    void set()
    {
        int a,b;
        cout<<"input no. :: ";
        cin>>a>>b;
        num1=a;
        num2=b;
    }
};

// void Test::show()
// {
//     cout<<"num1 : : "<<num1<<endl;
//     cout<<"num2 : : "<<num2<<endl;
//     sum();
    

// }

// void Test::sum()
// {
//     int total;
//     total=num1+num2;
//     cout<<"TOTAL : "<<total<<endl;
// }

int main()
{
    Test o1;
    o1.prg();    
    
}