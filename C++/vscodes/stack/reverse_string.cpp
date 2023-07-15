#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <char> s;
    string a;
    getline(cin,a);
    for(int i=0;i<a.length();i++)
    {
        s.push(a[i]);
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}