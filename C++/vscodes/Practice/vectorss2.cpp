#include <bits/stdc++.h>
using namespace std;











void print(vector<pair<int,int>> &v){
    cout<<"size : "<<v.size()<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<" ";
        cout<<endl;

    }
    
    
}
int main()
{
    int a ,b,c,n,m;
    cin>>n>>m;
    // vector<pair<int,int>> v={{1,2},{3,4},{5,6}};
    // print(v);
    // int x,y,n;
    // cin>>n;
    // for (int i = 0; i <n; i++)
    // {
    //     int x,y;
    //     cin>>x>>y;
    //     v.push_back({x,y});

    // }
    // print(v);

    //nesting in c++ stl ======= vectors


    //vector<int> v[10];

    // pair<int,string> p;
    // pair<int,string> q;
    // p=make_pair(2,"abc");
    // q={2,"abc"};
    // cout<<p.first<< "  "<<p.second<<endl;
    // cout<<q.first<< "  "<<q.second<<endl;


    // vector<pair<int,int>> v={{1,2},{3,4},{4,5}};


    //matrix making using vectors

    vector<vector<int>> vect ;
    // {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };

    for (int i = 0; i <n; i++)
    {
        
        for (int j = 0; j <m; j++)
        {
            cin>>vect[i][j];
        }
        
    }
    

    cout<<"size :: "<<vect.size()<<endl;


    for (int i = 0; i <vect.size(); i++)
    {
        for (int j = 0; j<vect[i].size(); j++)
        {
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
    











    //continuos vectors in pairs



}