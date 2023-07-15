#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    int f=0;
    int e=s.length()-1;
    while(f<e)
    {
        if(s[f]!=s[e])
        {
            cout<<"STRING IS NOT A PALLINDROME";
            return 0;
        }
        f++;
        e--;
    }
    cout<<"STRING IS PALLINDROME";
}