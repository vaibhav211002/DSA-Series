#include<iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int i=0,space=0;
    for (i = 0; s[i]!='\0'; i++)
    {
        if(s[i]==' '){
            space++;
        }

    }
    cout<<"lenght : "<<i-space;
}