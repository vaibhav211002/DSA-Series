#include <iostream>
using namespace std;
#include <stack>


int main()
{
    stack <int> s;
    s.push(2);
    s.push(12);
    s.push(32);
    s.push(320);
    s.push(324);

    cout<<"print 0 :: "<<s.top()<<endl;
    cout<<"size :: "<<s.size()<<endl;
    s.pop();
    cout<<"print 1 :: "<<s.top()<<endl;
    cout<<"size :: "<<s.size()<<endl;
    s.pop();
    cout<<"print 2 :: "<<s.top()<<endl;

    cout<<"size :: "<<s.size()<<endl;   


    //size also decreases with the removal of a element 


}