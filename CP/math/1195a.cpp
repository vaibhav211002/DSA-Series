#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define rt return
#define all(x) x.begin(), x.end()  // sort
#define rall(x) x.rbegin(), x.rend()  //sort in reverse
#define sz(x) (int)(x).size() // size of vector/string
const ll INF = 1e18;  // Define infinity for large values
const ll MOD = 1e9 + 7;  // Common modulo value for big integer problems


// functions
void in(int n , vector<int>&v){for(int i = 0 ; i < n ; i++ ){cin>>v[i];}}
void cb(int s){if(s==1){cout<<"YES"<<endl;rt;}cout<<"NO"<<endl;rt;}
void pr(string s ){cout<<s<<endl;}
ll sumrange(ll x, ll y, ll z){int sum = 0;for(int i = x; i <= y; i += z){sum += i;}return sum;}
void op(vector<int>&v){for(int i = 0 ; i < v.size() ; i++ ){cout<<v[i]<<" ";}}
ll gcd(ll a, ll b) {while(b){a %= b;swap(a, b);}return a;}
ll sumv(vector<int>&v){ll sum = 0 ;for(int i = 0 ;i<v.size();i++){sum+= v[i];}return sum;}
ll binpow(ll a, ll b, ll m = MOD) {ll res = 1;while (b > 0) {if (b & 1)res = res * a % m;a = a * a % m;b >>= 1;}return res;}

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // write here
    int n,k,x;
       cin>>n>>k;
       vector<int>v(k+1);
       int cap=ceil(1.0*n/2);
       for(int i=0;i<n;i++){
           cin>>x;
           v[x]++;
       }
       int odd=0,even=0;
       for(int i=0;i<=k;i++){
           if(v[i]%2) even+=(v[i]-1),odd++;
           else even+=v[i];
       }
       int res=0;
       res+=2*min(even/2,cap);
       cap-=min(even/2,cap);
       res+=cap;
       cout<<res<<endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}