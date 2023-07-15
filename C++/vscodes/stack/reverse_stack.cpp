#include <bits/stdc++.h>
using namespace std;



void insertatbottom(stack<int>&s,int x)
{
    if(s.empty())
    {
        s.push(x);
        return ;
        
    }
     int num=s.top();
    s.pop();

    insertatbottom(s,x);
    s.push(num);

}

void solve(stack<int>&s)
{
    //base case

    if(s.empty())       //empty stack
    {
        return ;
    }

    int num=s.top();
    s.pop();

    //reverse call of recursion
    solve(s);

    insertatbottom(s,num);
}

int main()
{
    stack <int> s;
    stack <int> p;
    int n,i,a;

    cout<<"input size :: ";
    cin>>n;
    for (int k = 0; k<n; k++)
    {
        cout<<"input :: ";
        cin>>a;
        s.push(a);
    }


    cout<<"before reversing"<<endl;


    // for(int k=0;k<n;k++)
    // {
    //     cout<<p.top()<<endl;
        
    //     s.pop();
    // }

    solve(s);


    cout<<"after reversing"<<endl;

    for(int k=0;k<n;k++)
    {
        cout<<s.top()<<endl;
        
        s.pop();
    }

    
}