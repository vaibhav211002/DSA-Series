#include <iostream>
using namespace std;



int solve(int sum,int coins[]){
    if(sum==0){
        return 0;
    }

    if(sum<0){
        return 99999;
    }

    int mini=99999;
    for (int  i = 0; i <3; i++)
    {

        int ans= solve(sum-coins[i],coins);
        if(ans!=99999){
            mini=min(ans+1,mini);
        }

        
    }
    
    return mini;
}

int solve1(int sum,int coins[]){
    int dp[8];
    for (int i = 0; i < 8; i++)
    {
        dp[i]=99999;
    }
    dp[0]=0;

    for (int i = 1; i <=sum; i++)
    {
        for (int j = 0; j<3; j++)
        {
            if(i-coins[j]>=0 && dp[i-coins[j]]!=99999){
                dp[i]=min(dp[i],1+dp[i-coins[j]]);
            }
        }
        
    }

    if(dp[sum]==99999){
        cout<<"-1"<<endl;
        return 0;
    }

    cout<<dp[sum]<<endl;
    return 0;
    
    
}



int main(){

    int sum=7;
    int coins[3]={1,2,3};
    // cout<<solve(sum,coins)<<endl;
    cout<<solve1(sum,coins)<<endl;
}
