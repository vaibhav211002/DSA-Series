#include <iostream>
using namespace std;

int c(int n,int r)
{ 
    if(n==r || r==0)
    {
        return 1;
    }
    else{
        return c(n-1,r)+c(n-1,r-1);
    }
}

int main()
{
    cout<<c(4,2);

}