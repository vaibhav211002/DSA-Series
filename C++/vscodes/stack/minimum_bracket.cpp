#include <bits/stdc++.h>
using namespace std;



int minimumcount(string str){

    //odd condition 

    if(str.length()%2==1){
        cout<<"not valid :: :: ";
        return 0;
    }


    stack<char> s;
    for (int i = 0; i <str.length(); i++)
    {
        char ch=str[i];
        if (ch='(')
        {
            s.push(ch);
        }
        else{
            if (s.top()==')' && !s.empty())          //ch is closed bracket
            {
                s.pop();
            }
            else{
                s.push(ch);       //means there is no open braces and iis totally empty 
            }
            
                 
        }
        
    }



    //stack contains invalid brackets 
    int a=0,b=0;
    while (!s.empty())
    {
        if(s.top()='('){
            b++;
        }
        else{
            a++;
        }
        s.pop();
    }

    int ans=(a+1)/2+(b+1)/2;

    return ans;


    
}






int main()
{
    string str;
    cin>>str;
    cout<<"minimum count :: " << minimumcount(str)<<endl;


}
