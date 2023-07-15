#include <bits/stdc++.h>
#include <map>
using namespace std;

#include<unordered_map>
#include<queue>
#include<list>
#include<set>
void  preparedAdjList ( unordered_map<int,set<int>> &adjList, vector<pair<int, int>> &edges){
    for(int i=0; i<edges.size();i++){
        int u= edges[i].first;
        int v= edges[i].second;
        
        adjList[u].insert(v);
        adjList[v].insert(u);


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
        
    }
    cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
}

void bfs(  unordered_map<int,set<int>> &adjList,     unordered_map<int,bool> &visited,    vector<int>&ans,int node){
   queue<int>q;
   q.push(node);
    visited[node]=1;
    
    while(!q.empty()){

                for(auto i: visited)
    {
      // Print the element
      
      cout << i.first<< "---> "<<i.second<<endl ;
      
    }

    cout<<endl;
    cout<<endl;



        int frontnode=q.front();
        q.pop();
        //storefrontnode to ans
        ans.push_back(frontnode);


        for(auto j:ans){
            cout<<j<<",";
        }

        cout<<endl;
        //traverse all neighbours of frontnode
        for(auto i:adjList[frontnode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
        
    }
}
void print(unordered_map<int,set<int>> adjList){
    for (auto i:adjList)
    {
        cout<<i.first<<"-->";
        for (auto j:i.second)
        {
            cout<<j<<",";
        }cout<<endl;
    }
    
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int,set<int>> adjList;
    vector<int> ans;
     unordered_map<int,bool> visited;


     
    
    preparedAdjList(adjList,edges);
    print(adjList);
    // traverse all components
    for(int i =0;i<vertex;i++){
        if(!visited[i]){
            cout<<endl;
    //                 for(auto k: visited)
    // {
    //   // Print the element
      
    //   cout << k.first<< "---> "<<k.second<<endl ;
      
    // }
            bfs(adjList,visited,ans,i); 
        }
    }    
    cout << "{";
    for(auto i: ans)
    {
      // Print the element
      
      cout << i<< " , " ;
      
    }
    cout << "}  ";

    cout<<endl;

        for(auto i: visited)
    {
      // Print the element
      
      cout << i.first<< "---> "<<i.second<<endl ;
      
    }
    


   
}



int main()
{
    unordered_map<int,set<int>> adjList;
    vector<pair<int ,int>> edges={{1,2},{0,1},{2,4},{2,3}};
    int vertex;
    cout<<"enter no of vertex : ";
    cin>>vertex;

    BFS(vertex,edges);
    


    cout<<endl;cout<<endl;cout<<endl;cout<<endl;






}