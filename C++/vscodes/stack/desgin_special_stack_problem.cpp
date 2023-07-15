#include <bits/stdc++.h>
using namespace std;




//getmin in o(1) time and o(1) extra space 

class specialstack{

    stack <int> s;
    int mini;

    public:

    void push(int data){

        //first element
        if(s.empty()){
            s.push(data);
            mini=data;
        }
        else{
            if(data<mini){
                int val=2*data-mini;      //star performer
                push(val);
                mini=data;
            }
            else
            {
                s.push(data);
            }
        }
    }

    int pop()
    {
        if (s.empty())
        {
            return -1;
        }

        int curr=s.top();
        s.pop();
        if(curr>mini){
            return curr;
        }
        else
        {
            int prevmin=mini;
            int val=2*mini-curr;      //star performer
            mini=val;
            return prevmin ;
        }
        
        
    }

    print(){
        cout<<"mini :: "<<mini<<endl;
        
    }


};

int main()
{
    specialstack p;
    p.push(5);
    p.print();
    p.push(3);
    p.print();
    p.push(8);
    p.print();
    p.push(2);
    p.print();
    p.push(4);
    p.print();




    cout<<endl;
    cout<<endl;

    cout<<"pop operation:: "<<endl;

    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;


} 