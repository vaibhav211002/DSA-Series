#include <bits/stdc++.h>
using namespace std;




 vector<int>  nextsmaller(vector <int> &arr,int n)
{
    stack <int> s;
    s.push(-1);

    vector<int> ans(n);


    for (int i = n-1; i>=0; i--)
    {
        int curr=arr[i];
        while (s.top()>=curr)
        {
            s.pop();
        }

        //ans is stack ka top 

        ans[i]=s.top();

        s.push(curr);
        
    }
    for (int i = 0; i <ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
}

int main()
{
    int n,x;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i <n; i++)
    {
        cout<<"input :: ";
        cin>>x;
        a.push_back(x);
    }
    nextsmaller(a,n);
    
}