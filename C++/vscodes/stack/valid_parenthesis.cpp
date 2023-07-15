#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str; 
    stack<char>s;
    for (int i = 0; i <str.length(); i++)
    {

        //if opening bracket
        //if closing bracket check top and pop

        if(str[i]=='('||str[i]=='{'||str[i]=='['){
            s.push(str[i]);
        }
        else{

            if(!s.empty()){
                char top=s.top();
                if((str[i]=')' && top=='(')||(str[i]='}' && top=='{')||(str[i]='[' && top==']')) {
                    s.pop();
                }
                else{
                    cout<<"THE PARENTHESIS IS NOT VALID"<<endl;
                    return false;
                }
            }
            else
            {
                return false;
            }
        }


    }


    if(s.empty())
        return true;
    else
        return false;
}