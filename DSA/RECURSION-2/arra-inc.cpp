#include <iostream>
using namespace std;

int main()
{
    cout<<"HI"<<endl;
    int *p= new int[5];
    int *q=new int[10];
    int a=1;
    for (int i = 0; i < 5; i++)
    {
        cin>>p[i];
    }
        for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<" ";
    }
     for (int i = 0; i < 10; i++)
     {
         q[i]=p[i];
     }

     delete p;
     p=q;
     q=NULL;
     for (int i = 0; i < 10; i++)
     {
         cout<<p[i]<<" ";
     }


    
}