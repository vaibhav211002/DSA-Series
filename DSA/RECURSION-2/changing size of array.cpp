#include <iostream>
using namespace std;

int main()
{
    int *p,*q;
    int a=1;
    for (int i = 0; i < 5; i++)
    {
        p[i]=a;
        a++;
    }
    for (int i = 0; i < 5; i++)
    {
        q[i]=p[i];
    }
    free p;
    p=q;
    q=null;
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<" ";
    }

    delete p;


    
}