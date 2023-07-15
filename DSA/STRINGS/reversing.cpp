#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int f=0;
    int e=s.length()-1;
    while(f<=e)
    {
        swap(s[f],s[e]);
        f++;
        e--;
    }
    cout<<s;

}