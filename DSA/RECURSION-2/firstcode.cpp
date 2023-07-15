#include <iostream>
using namespace std;


void fun1(int n)
{
    if(n>0)
    {
        
        fun1(n-1);
        cout<<n<<" ";
    }
}


void fun2(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun2(n-1);
    }
}



int main()
{
    int a=4;
    // cin>>a;  
    fun1(a);
    cout<<endl<<endl;
    fun2(a);


}