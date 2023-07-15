#include <iostream>
#include <math.h>
using namespace std;

int p(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return p(m,n-1)*m;
    }
}

int main()
{
    int a=2;
    int b=5;
    cout<<p(a,b);
}