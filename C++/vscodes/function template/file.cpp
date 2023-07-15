#include <iostream>
using namespace std;


template <typename a>
a comparemax(a x,a y)
{
    if(x>y)
    {
        return x ;
    }
}



// template <typename b,typename b>
// b comparemin(b x,b y)
// {
//     if(x>y)
//     {
//         return y;
//     }
// }




int main()
{
    cout<<"comapare int :: "<< comparemax<int,int>(3,4) <<endl;
  //  cout<<"compare int :: "<< comparemin<int,int>(4,3) <<endl;    
}