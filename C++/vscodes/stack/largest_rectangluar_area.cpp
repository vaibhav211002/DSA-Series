#include <bits/stdc++.h>
using namespace std;




vector<int> nextsmaller(vector<int> arr,int n)
{
    stack <int> s;
    s.push(-1);

    vector<int> ans(n);


    for (int i = n-1; i>=0; i--)
    {
        int curr=arr[i];
        while (s.top()!=-1 && arr[s.top()]>=curr)
        {
            s.pop();
        }

        //ans is stack ka top 

        ans[i]=s.top();

        s.push(i);
    }
    return ans;
}

vector <int> prevsmaller(vector<int> arr,int n)
{
    stack <int> s;
    s.push(-1);

    vector<int> ans(n);


    for (int i =0; i<n; i++)
    {
        int curr=arr[i];
        while (s.top()!=-1 && arr[s.top()]>=curr)
        {
            s.pop();
        }

        //ans is stack ka top 

        ans[i]=s.top();

        s.push(i);
    }
    return ans;
}



int largestrectarea(vector<int>& h){

    int n=h.size();
    vector<int> next(n);
    next=nextsmaller(h,n);

    vector<int> prev(n);
    prev=prevsmaller(h,n);

    int area=0 ;

    for (int i = 0; i <n; i++)
    {
        int l=h[i];
        int b=next[i]-prev[i]-1;

        int newarea=l*b;
        area=max(area,newarea);
    }


    cout<<"max area :: "<<area<<endl;
    

}









int main()
{
    vector<int> h;

    h.push_back(2);
    h.push_back(1);
    h.push_back(5);
    h.push_back(6);
    h.push_back(2);

    h.push_back(3);


    largestrectarea(h);
}