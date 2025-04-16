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

    int a, b;
    cin >> a >> b;

    int x_king, y_king;
    cin >> x_king >> y_king;

    int x_queen, y_queen;
    cin >> x_queen >> y_queen;

    set<pair<int, int>> king_hits, queen_hits;

    int dx[] = {-1, 1, -1, 1};
    int dy[] = {-1,-1,1,1};

    for (int j = 0; j < 4; j++) {
        king_hits.insert({x_king + dx[j] * a, y_king + dy[j] * b});
        king_hits.insert({x_king + dx[j] * b, y_king + dy[j] * a});

        queen_hits.insert({x_queen + dx[j] * a, y_queen + dy[j] * b});
        queen_hits.insert({x_queen + dx[j] * b, y_queen + dy[j] * a});
    }

    int ans = 0;
    for (auto position : king_hits) {
        if (queen_hits.find(position) != queen_hits.end()) {
            ans++;
        }
    }

    cout << ans << "\n";
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