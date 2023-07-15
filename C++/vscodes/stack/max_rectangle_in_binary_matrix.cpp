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

//m:: columns

int maxarea(int M[max][max],int n,int m){

    //compute area for first row

    int area =largestrectarea(M[0],m);

    for (int  i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            //row update by adding perivious row value
            if (M[i][j]!=0)
            {
                M[i][j]=M[i][j]+M[i-1][j];
            }
            else{
                M[i][j]=0;
            }
        }
        area=max(area=largestrectarea(M[i],m));
        
    }

    //entire row is updated 

    return area;
        
}



int main()
{
    return 0;
}