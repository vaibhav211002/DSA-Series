#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    
    cout<<"input rows : ";
    cin>>r;
    cout<<"input cols : ";
    cin>>c;
    vector<vector<int>> v(r,vector<int>(c));

    cout<<"size :: "<<v.size()<<endl;



    for (int i = 0; i <v.size(); i++)
    {
        for (int k = 0; k <v.size(); k++)
    {
        for (int l = 0; l<v[k].size(); l++)
        {
            cout<<v[k][l]<<" ";
        }
        cout<<endl;
    }



    cout<<endl;
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<<"input";
            cin>>v[i][j];
        }
        
    }


     cout<<"size :: "<<v.size()<<endl;


    for (int i = 0; i <v.size(); i++)
    {
        for (int j = 0; j<v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


    
    
}