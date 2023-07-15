#include <bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    map<int,int> m;

    int a;

    do
    {
        cout<<"enter no. : ";
        cin>>a;
        m[a]++;
    } while (a!=-1);

    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
}