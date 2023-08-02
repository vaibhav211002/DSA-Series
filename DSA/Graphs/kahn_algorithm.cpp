#include <iostream>
#include <map>
using namespace std;

#include<unordered_map>
#include<queue>
#include<list>
#include<set>
void  preparedAdjList ( unordered_map<int,list<int>> &adjList, vector<pair<int, int>> &edges,int n){
    for(int i=0; i<edges.size();i++){
        int u= edges[i].first;
        int v= edges[i].second;
        
        adjList[u].push_back(v);
        
    }


        for (auto i:adjList)
        {
            cout<<i.first<<"-->";
            for (auto j:i.second)
            {
                cout<<j<<",";
            }
            cout<<endl;
            
        }   

    vector<int> indegree(n+1);

    for (auto i:adjList)
    {
        for (auto j:i.second)
        {
            indegree[j]++;
        }
        
    }

    queue<int> q;
    for (int i = 1; i <n+1; i++)
    {
        if(indegree[i]==0){
            q.push(i);
        }
    }

    //do bfs
    vector<int> ans;


    while(!q.empty())
    {
        int front=q.front();
        q.pop();
        ans.push_back(front); 
        for(auto neighbour:adjList[front])
        {
            indegree[neighbour]--;
            if(indegree[neighbour]==0){
                q.push(neighbour);
            }
        }
        

    }

    for (auto i :ans)
    {
        cout<<i<<",";
    }
    
    
    
}


int main()
{
    unordered_map<int,list<int>> adjList;
    vector<pair<int ,int>> edges={{1,2},{1,3},{2,5},{3,5},{5,4}};
    int vertex;
    cout<<"enter no of vertex : ";
    cin>>vertex;

    preparedAdjList(adjList,edges,vertex);
}
