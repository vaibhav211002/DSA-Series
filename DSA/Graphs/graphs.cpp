#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;


class graph {
    public:


    //makes the most importat step of the program 
    unordered_map<int,list<int>> adj;

    void addedge(int u,int v,bool direction){

        //direction = 0 undirected 
        //direction = 1 directed

        //create the graph 
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u); //undirected graph
            
        }

    }

    void print(){
        for (auto i:adj){
            cout<<i.first<<"--> ";
            for (auto j:i.second )
            {
                cout<<j<<",";
            }

            cout<<endl;
            

        }
        }
        
    };







int main()
{
    int n,m;
    cout<<"no. of nodes : ";
    cin>>n;
    cout<<"no. of edges : ";
    cin>>m;

    graph g ;

    for (int i = 0; i <m; i++)
    {
        int u,v;
        cin>>u>>v;
        g.addedge(u,v,1);
    }

    g.print();
    

}