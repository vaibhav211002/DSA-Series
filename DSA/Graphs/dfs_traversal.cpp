#include <iostream>
#include<unordered_map>
#include<set>
#include <vector>

using namespace std;






//making the main dfs function 

void dfs(int node,unordered_map<int,bool>&visited,unordered_map<int,set<int>>&adjList,vector<int>&component){

    component.push_back(node);
    visited[node]=1;

    for(auto i:adjList[node]){
        if(!visited[i]){
            dfs(i,visited,adjList,component);
        }
    }



}


int main()
{
    unordered_map<int,set<int>> adjList;
    vector<pair<int ,int>> edges={{0,2},{2,1},{2,4},{1,3},{4,3},{5,6},{5,7},{6,7}};
    int vertex;
    cout<<"enter no of vertex : ";
    cin>>vertex;

    //adjset(edges,adjList);

    vector<vector<int>>ans;

    unordered_map<int,bool> visited;



    //creating adjacency list 
    for (int  i = 0; i <edges.size(); i++)
    {
        int u=edges[i].first;
        int v=edges[i].second;
        adjList[u].insert(v);
        adjList[v].insert(u);
    }


    for (int i = 0; i <vertex; i++)
    {
        if(!visited[i]){
            vector<int>component;
            dfs(i,visited,adjList,component);\
            for(auto i:component){
                cout<<i<<endl;
                cout<<endl;
                
            }
            ans.push_back(component);
        }

    }


    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    

    
}