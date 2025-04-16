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
    string s ;
    string p ; 
    cin>>p;
    cin>>s;
    if(p[0]!=s[0]){
        cout<<"NO"<<endl;
        rt;
    }
    vector<tuple<int, int, char>> pst;
    int mn = 1 ;
    int mx = 2 ;
    for(int i = 1 ; i < p.size() ; i++){
        if(p[i]!=p[i-1]){
            pst.push_back(make_tuple(mn ,mx,p[i-1]));
            mn =1;
            mx =2 ;
        }else{
            mn++;
            mx += 2 ;
        }
    
    }
    pst.push_back(make_tuple(mn, mx,p[p.size()-1]));

    int j = 0 ;
    int c = 1 ;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i - 1]) {
            if (j == pst.size()) {
                cout << "NO" << endl;
                return ;
            }
            int mn = get<0>(pst[j]);
            int mx = get<1>(pst[j]);
            char ch = get<2>(pst[j]);
    
            if (c < mn || c > mx || s[i - 1] != ch) {
                cout << "NO" << endl;
                return ;
            }
            j++;
            c = 1;
        } else {
            c++;
        }
    }
    
    cout<<"YES"<<endl;
    rt;

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}