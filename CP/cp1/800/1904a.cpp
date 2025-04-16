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
    ll sx , sy ;
    cin>>sx>>sy;

    ll x1, y1;
    cin>>x1>>y1;

    ll x2,y2;
    cin>>x2>>y2;

    set<pair<int,int>> s1;
    set<pair<int,int>> s2;
    int ans =0 ;

    vector<pair<int,int>> dir = {{sx,sy},{sx,-sy},{-sx,sy},{-sx,-sy},{sy,sx},{sy,-sx},{-sy,sx},{-sy,-sx}};

    for(auto i : dir){
        int x= x1 + i.first;
        int y= y1 + i.second;
        s1.insert({x,y});

        x = x2 + i.first;
        y = y2 + i.second;
        s2.insert({x,y});

    }

    for(auto i : s1){
        if(s2.find(i)!=s2.end()){
            ans++;
        }
    }

    cout<<ans<<endl;
    rt;



}

void solve1(){
    // write here
    ll sx , sy ;
    cin>>sx>>sy;

    ll x1, y1;
    cin>>x1>>y1;

    ll x2,y2;
    cin>>x2>>y2;


    if(x1==x2 && y1!=y2){
        if(2*sy==abs(y2-y1)){
            cout<<2<<endl;
            rt;
        }
        else{
            cout<<0<<endl;
            rt;
        }
    }


    if(y1==y2 && x1!=x2){
        if(2*sx==abs(x2-x1)){
            cout<<2<<endl;
            rt;
        }
        else{
            cout<<0<<endl;
            rt;
        }
    }
    if(x1==y2 && x2==y1){
        if(sx==1 && sy==1){
            cout<<1<<endl;
            rt;
        }
        else{
            cout<<2<<endl;
            rt;
        }
    }

    cout<<2<<endl;
    rt;
    


}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve1();
    }
    // solve();
}