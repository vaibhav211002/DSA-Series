#include <iostream>
#include <map>
using namespace std;

#include<unordered_map>
#include<queue>
#include<list>
#include<set>
#include <vector>

// n -> vertices 

bool iscyclicDFS(int node,int parent,unordered_map<int,bool>&visited,unordered_map<int,set<int>> &adjList){
    visited[node]=true;


    for (auto neighbour:adjList[node])
    {
        if (!visited[neighbour])
        {
            bool cycle = iscyclicDFS(neighbour,node,visited,adjList);
            if(cycle){
                return true;
            }
            else if(neighbour!=parent){
                //cycle present
                return true;

            }
        }
        
    }
    return false;
    
}

void  preparedAdjList (unordered_map<int,set<int>> &adjList,vector<pair<int, int>> &edges,int n){
    
    for(int i=0; i<edges.size();i++){


        //create adjacey list 
        int u= edges[i].first;
        int v= edges[i].second;
        
        adjList[u].insert(v);
        adjList[v].insert(u);

    }


        //to handle disconneced components

    unordered_map<int,bool> visited;
    bool ans;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            ans = iscyclicDFS(i,-1,visited,adjList);
            if(ans==true){
                cout<<"it is cyclic "<<endl;
            }
        }
    }
    cout<<"it is not cyclic"<<endl;
    
}





int main()
{
    unordered_map<int,set<int>> adjList;
    vector<pair<int ,int>> edges={{1,2},{2,3},{4,5},{5,6},{6,8},{5,7},{7,8},{8,9}};
    int vertex;
    cout<<"enter no of vertex : ";
    cin>>vertex;

    preparedAdjList(adjList,edges,vertex);
}

