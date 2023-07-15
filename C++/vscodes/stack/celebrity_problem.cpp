#include <bits/stdc++.h>
using namespace std;

bool knows(vector<int> &s,int a , int b,int n){
    if(s[a][b]==1){
        return true;
    }
    else{
        return false;
    }
}


int celebrity(vector<int> &s,int n){
    stack <int> s;
    //push all element 

    for (int i = 0; i <n; i++)
    {
        s.push(i);
    }

    //step :2
    while (s.size()>1)
    {
        int a=s.top();
        s.pop()
        int b=s.top();
        s.pop();



        if(knows(s,a,b,n)){
            s.push(b);
        }
        else{
            s.push(a);
        }

    }

    int ans=s.top();


    //single element in stack is potential 

    //verify 

    bool rcheck=false;
    int zerocount=0;
    for (int i = 0; i <n; i++)
    {
        if(s[ans][i]==0){
            zerocount++;
        }
    }

    if(zerocount==n){
        rcheck=true;
    }

    //column check
    bool ccheck=false;
    int onecount=0;

    for (int i = 0; i < n; i++)
    {
        if (s[i][ans]==1)
        {
            onecount++;
            
        }
        
    }

    if(onecount==n-1){
        ccheck=true;
    }
    

    if (rcheck==true && ccheck==true)
    {
        return ans;
    }
    else{
        return -1;
    }
    
    

    
    
};



int main()
{
    
}