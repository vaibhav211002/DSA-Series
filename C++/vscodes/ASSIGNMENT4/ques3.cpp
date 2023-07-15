#include <bits/stdc++.h>
using namespace std;

class op{
     
    int x;
public:
    op(int i)
    {
        x=i;
    }

    int operator++()
    {
        return ++x;
    }
    int operator++(int)
    {
        return x+1;
    }
};
int main()
{
    op c(1);
    cout<<"post increment " << c++ <<endl;
    cout<<"pre increment " << ++c <<endl;
cout<<"pre increment " << ++c <<endl;

    return 0;
}