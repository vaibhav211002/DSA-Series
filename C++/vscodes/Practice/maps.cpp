#include <bits/stdc++.h>
using namespace std;




// void print(map<int,string>&p)
// {
//     cout<<p.size()<<endl;
//     for(auto &pr:p){
//         cout<<pr.first<<" "<<pr.second<<endl;
//     }
// }


void print(map<int,string>&m){

    for (auto pr:m)
    {
        cout<<pr.first<<"  "<<pr.second<<endl;
    }
    
}


int main()
{

    //both data types should be given 

    map<int,string>m[3];

    // m[1]="abc";
    // m[5]="cdc";
    // m[3]="acd";

    // m.insert({4,"afg"});

    // // map<int,string>::iterator it;

    // // for (it=m.begin(); it!=m.end(); it++)
    // // {
    // //     cout<<(*it).first<<"  "<<(*it).second<<endl;
    // // }

    // cout<<endl;
    // print(m);



    int n=3,i;
    // for (int i = 0; i <n; i++)
    // {
    //     string s;
    //     cin>>s;
    //     m[s]++;
    // }
    string value;
    int key;
    for ( int it = 0; it<n; it++)
    {
        cout<<"no. of element you want :: ";
        cin>>i;
        cout<<"array : "<<it<<endl;
        for (int k= 0; k<i; k++)
        {
            
            cout<<"enter the key :: ";
            cin>>key;
            cout<<"enter value :: ";
            cin>>value;
            m[it].insert(pair<int,string>(key,value));
            //m[it][y]=k;
        }
        
    }
    
    
    for (int i = 0; i < n; i++)
    {
        cout<<"values at array index : "<<i<<endl;
        cout<<endl;
        print(m[i]);
    }
    
    
    
    
}