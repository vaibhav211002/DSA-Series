#include<iostream>
#include<vector>
using namespace std;



int solve(vector<int>&v,int n){
    
    //base case 
    if(n<0){
        return 0;
    }

    if(n==0){
        return v[0];
    }

    //include

    int inc= solve(v,n-2)+v[n];
    int exc= solve(v,n-1);

    return max(inc,exc);
}

int solve1(vector<int>&v,int n,int dp[]){
        //base case 
    if(n<0){
        return 0;
    }

    if(n==0){
        return v[0];
    }

    if(dp[n]!=(-1)){
        return dp[n];
    }

    //include

    int inc= solve(v,n-2)+v[n];
    int exc= solve(v,n-1);

    dp[n]=max(inc,exc);

    return dp[n];
}

int solvetab(vector<int>&v){
    int n=v.size();
    vector<int> dp(n,0);
    dp[0]=v[0];
    dp[1]=max(v[1],v[0]);

    for (int i = 2; i <n; i++)
    {
        int inc=dp[i-2]+v[i];
        int exc=dp[i-1];
        dp[i]=max(inc,exc);

    }

    return dp[n-1];
    


}

int solveso(vector<int>&v){

    int prev1=0;
    int prev2=v[0];

    for (int i = 1; i <v.size(); i++)
    {
        int inc=prev1+v[i];
        int exc=prev2;
        prev1=prev2;
        prev2=max(inc,exc);
    }


    return prev2;
    


}

int main(){

    vector<int> v={9,1,8,2};
    //cout<<solve(v,v.size())<<endl;
    int n=4;
    vector<int> dp(n,-1);
    int arr[4];
    for (int i = 0; i < n; i++)
    {
        arr[i]=(-1);
    }
    
    // cout<<solve1(v,n-1,arr);
    cout<<solvetab(v)<<"  ";
    cout<<solveso(v);
}