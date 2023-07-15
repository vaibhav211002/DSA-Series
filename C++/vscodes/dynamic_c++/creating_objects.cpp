#include <bits/stdc++.h>
using namespace std;

class test{
    //private mem

    int x,y;


    public:

    test(){}

    test(int x,int y)
    {
        this->x=x;
        this->y=y;
    }

    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};


int main()

{

    int n=3,i;
    test* arr= new test[n];


    for(i=0;i<3;i++)
    {
        arr[i]=test(i,i+1);
    }
    for(i=0;i<3;i++)
    {
        arr[i].print();
    }
}



 

 
