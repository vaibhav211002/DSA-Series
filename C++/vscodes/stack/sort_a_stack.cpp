#include <bits/stdc++.h>
using namespace std;



void sortinsert(stack<int>&s,int x)
{
    if(s.empty()||(!s.empty() && s.top()<x))
    {
        s.push(x);
        return; 
    }


    int n=s.top();
    s.pop();

    sortinsert(s,x);
    s.push(n);


    
}


void sortstack(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }

    int num=s.top();
    s.pop();

    sortstack(s);

    sortinsert(s,num);
}

int main()
{
    stack <int> s;
    int n,a,c=0;
    cout<<"input the size :: ";
    cin>>n;
    for (int k = 0; k<n; k++)
    {
        cout<<"input :: ";
        cin>>a;
        s.push(a);
    }


    sortstack(s);
    for(int i=0;i<n;i++)
    {
        cout<<s.top()<<endl;
        
        s.pop();
    }


}