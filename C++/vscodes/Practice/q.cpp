
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2;
    int a,c;

    cout<<"insert the value in vector 1"<<endl;
    for (int i = 0; i <1000; i++)
    {
        cout<<"input :: ";
        cin>>a;
        if(a>0){
            v1.push_back(a);
        }
        else{
            break;
        }
    }


    cout<<"insert the value in vector 2"<<endl;
    for (int i = 0; i <1000; i++)
    {
        cout<<"input :: ";
        cin>>a;
        if(a>0){
            v2.push_back(a);
        }
        else{
            break;
        }
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

        cout<<"printing vector 1 "<<endl;
    for(int v:v1){
        cout<<v<<"  ";
    }
    
    cout<<endl;
    cout<<"printing vector 2 "<<endl;
    for(int v:v2){
        cout<<v<<"  ";
    }

    cout<<endl;
    cout<<"size :: "<<v1.size()<<endl;
    cout<<"size :: "<<v2.size()<<endl;



    vector <int> :: iterator x;
    vector <int> :: iterator y;







   int c;
    for (  x=v2.begin(); x!=v2.end(); x++)
    {    c=0;
        for (y=v1.begin();y!=v1.end();y++)
        {
            if(*y==*x)
            {
                ++c;
            }
        }
        if(c==0)
        v1.push_back(*x);
    }
    
    cout<<"done"<<endl;

    cout<<"printing vector 1 "<<endl;
    for(int g:v1){
        cout<<g<<"  ";
    }
    
    cout<<endl;
    cout<<"printing vector 2 "<<endl;
    for(int g:v2){
        cout<<g<<"  ";
    }
}



    
