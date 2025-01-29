#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

ll m=1e9+7;
bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}




int countDigit(long long n) { return floor(log10(n) + 1); }




void prime_1_n(int n) {
    vector<int> sieve(n + 1, 1);
    sieve[0] = sieve[1] = 0; // marking 0 and 1 as non-prime

    for (int i = 2; (long long)i * i <= n; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (sieve[i]) cout << i << " ";
    }
}

bool isSubSequence(string str1, string str2, int m, int n) {
    if (m == 0) return true;
    if (n == 0) return false;
    if (str1[m - 1] == str2[n - 1])
        return isSubSequence(str1, str2, m - 1, n - 1);
    return isSubSequence(str1, str2, m, n - 1);
}

void print_container(const std::vector<int>& c) {
    for (int i : c)
        cout << i << ' ';
    cout << '\n';
}

vector<int> prefix_sum(vector<int> v) {
    vector<int> prefix(v.size());
    prefix[0] = v[0];
    for (int i = 1; i < v.size(); i++) {
        prefix[i] = prefix[i - 1] + v[i];
    }
    return prefix;
}

string removeDuplicates(string s, int n) {
    vector<int> ch(255, 0);
    string ans = "";

    for (int i = 0; i < n; i++) {
        if (ch[s[i]] == 0) {
            ans.push_back(s[i]);
            ch[s[i]]++;
        }
    }
    return ans;
}
 long long int floorSqrt(long long int x) 
    {
        long long int low = 1;
        long long int high=x;
        while(low<=high){
            long long int mid=low+(high-low)/2;
            if(mid*mid<=x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n ;
    cin>>n;
    vector<ll>vn(n);

    for(auto &it:vn)cin>>it;

    int cnt1 = 0 ;
    for(auto it:vn){
        if(it&1)cnt1++;
    }


    //checks that parity of whole array is either odd or even fully
    if(cnt1==0 || cnt1==1){
        cout<<0<<endl;
        return ;
    }

    vector<ll>v1,v2;
    for(auto it:vn){
        if(it&1)v1.push_back(it);
        else v2.push_back(it);
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    ll t = v1.back();
    ll ans = 0 ;

    for(auto i : v2){
        if(t<i){
            ans +=2;
            t = (i*2) + t;
        }
        else{
            ans++;
            t = i + t;
        }
    }

    reverse(v2.begin(),v2.end());
    t = v1.back();
    ll ans1 = 0 ;

    for(auto i : v2){
        if(t<i){
            ans1 +=2;
            t = (i*2) + t;
        }
        else{
            ans1++;
            t = i + t;
        }
    }

    cout<<min(ans,ans1)<<endl;
    return ;



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