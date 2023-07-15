#include <iostream>
using namespace std;
// int x=0;

int func(int n)
{
    static int x=0;
    if(n>0)
    {

        x++;
        return func(n-1)+x;
    }
    return 0;
}

int main()
{
    int a=5;
    cout<<a<<" "<<func(a);


}