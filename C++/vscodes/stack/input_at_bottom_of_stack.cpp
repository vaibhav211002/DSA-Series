#include <bits/stdc++.h>
using namespace std;



void solve(stack<int>&s,int l)
{
    if(s.empty()==1)
    {
        s.push(l);
        return ;
        
    }
    cout<<"size :: "<<s.size()<<endl;

    int num=s.top();
    s.pop();

    solve(s,l);
    s.push(num);
}






int main()
{
    stack <int> s;
    int n,i,a;
    
    cout<<"input size :: ";
    cin>>n;
    for (int k = 0; k<n; k++)
    {
        cout<<"input :: ";
        cin>>a;
        s.push(a);
    }

    cout<<"size :: "<<s.size()<<endl;
    cout<<"size :: "<<s.empty()<<endl;



    cout<<endl;
    cout<<"input the number you want to insert :: :: ";
    cin>>i;

    //recursion_call 


    solve(s,i);
    for(int k=0;k<s.size();k++)
    {
        cout<<s.top()<<endl;
        
        s.pop();
    }


    
}