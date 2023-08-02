#include<iostream>
#include<unordered_map>
#include<set>
#include<stack>
#include<vector>
using namespace std;


void toposort(int node,unordered_map<int,bool>&visited,unordered_map<int,set<int>>&adjList,stack<int>&s){
    visited[node]=1;

    for (auto neighbour : adjList[node])
    {
        if(!visited[neighbour]){
            toposort(neighbour,visited,adjList,s);
        }
    }

    //base 
    s.push(node);
    

}



void prepareadg(unordered_map<int,set<int>>&adjList,vector<pair<int,int>>&edges,int n){

    for(int i=0;i<edges.size();i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].insert(v);
    }


    cout<<endl;
    for (auto i:adjList)
    {
        cout<<i.first<<"-->";
        for (auto j:i.second)
        {
            cout<<j<<",";
        }
        cout<<endl;
            
    }

    //CALL ALL THE NODES

    unordered_map<int,bool> visited;
    stack<int> s;


    for (int  i = 0; i < n; i++)
    {
        if(!visited[i]){
            toposort(i,visited,adjList,s);
        }
    }

    cout<<endl;

    for (int i = 0; i <s.size(); i++)
    {
        cout<<s.top()<<",";
        s.pop();
    }

    
    

    





}
int main()
{
    unordered_map<int,set<int>> adjList;
    vector<pair<int ,int>> edges={{1,2},{1,3},{2,4},{3,4},{4,5},{4,6},{5,6}};
    int vertex;
    cout<<"enter no of vertex : ";
    cin>>vertex;

    prepareadg(adjList,edges,vertex);

}