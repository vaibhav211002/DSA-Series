#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n,m,b; cin>>n>>m;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        cin>>b;
        int flag=0; 
        v[0]=min(v[0],b-v[0]);
        for(int i=1; i<n; i++){
           if(v[i]<v[i-1]){
               v[i]=b-v[i];
               if(v[i]<v[i-1]){
                   flag=1;
                   break;
               }
           }
           else if(b-v[i]>=v[i-1] and v[i]>b-v[i]) v[i]=b-v[i];
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}