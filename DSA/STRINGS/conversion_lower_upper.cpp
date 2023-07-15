#include <iostream>
using namespace std;


int main()
{
    string s;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
        else if (s[i]>=97 && s[i]<=122)
        {
            s[i]=s[i]-32;
        }
    }
    cout<<s;

}