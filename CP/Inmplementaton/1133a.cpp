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

    int h1,h2,h3,h4,h5,m1,m2,m3;
    char c;
    cin>>h1>>c>>m1;
    cin>>h2>>c>>m2;
    h3 = h1 * 60 + m1;
    h4 = h2 * 60 + m2;
    h5 = (h3 + h4)/2;
    int h = h5/60;
    int m = h5 % 60;
    cout << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m << endl;


}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}