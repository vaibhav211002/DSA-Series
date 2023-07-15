#include <bits/stdc++.h>
using namespace std;




void form_k(stack<int>&s ,int N)
{
    int a;
    for(int i=0;i<N;i++)
    {
        cout<<"Input :: ";
        cin>>a;
        s.push(a);
    }
}

void solve(stack<int>&s ,int n,int c)
{
    if(c==n/2)
    {
        s.pop();
        return;
    }

    int num=s.top();
    s.pop();
    c++;
    solve(s,n,c);
    s.push(num);
    



}

int main()
{
    stack <int> s;
    int n,a,c=0;
    cout<<"input the size :: ";
    cin>>n;
    form_k(s,n);
    solve(s,n,c);
    for(int i=0;i<n;i++)
    {
        cout<<s.top()<<endl;
        
        s.pop();
    }

}