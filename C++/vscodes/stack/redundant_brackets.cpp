#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    stack<char> s;
    cin>>a;
    for (int i = 0; i < a.length();i++)
    {
        char ch=a[i];

        if(ch=='(' || ch=='+' ||ch=='-' || ch=='/'){
            s.push(ch);
        }
        else{
            //ch ya toh ) ya lowercase letter

            if(ch==')')
            {
                bool isR=true;
                while(s.top()!='('){
                    char top=s.top();

                    if(top=='+' ||top=='-' || top=='/' || top=='*'){
                        isR=false;
                    }
                    s.pop();
                }
                if(isR==true)
                {
                    cout<<"have  no valid brackets";
                    return 0;

                
                }
                s.pop();

            }


        }
    }
    cout<<"do have valid brackets"<<endl;
    return 0;



    
    


}