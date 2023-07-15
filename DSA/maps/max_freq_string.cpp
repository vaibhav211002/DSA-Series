#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<char,int> m;

    string a;
    getline(cin,a);

    for (int i = 0; i <a.length(); i++)
    {
        if(a[i]!=' ')
           m[a[i]]++;
    }

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}