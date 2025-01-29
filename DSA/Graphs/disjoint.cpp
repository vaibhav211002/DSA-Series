#include <bits/stdc++.h>
using namespace std;

class DijointSets{
    vector<int> rank , parent ;
public:
     DijointSets(int n ){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for ( auto i = 0; i < n; i++)
        {
            parent[i] = i ;
        }
     }

     int findpar(int node){
        if(node==parent[node]){
            return node ;
        }

        return parent[node] = findpar(parent[node]);
    }

    void unionbyrank(int u , int v){
        int ulu = findpar(u);
        int ulv = findpar(v);

        if(ulu == ulv) return  ;

        if(rank[ulu] < rank[ulv]){
            parent[ulu] = ulv ;
        }
        else if(rank[ulu] > rank[ulv]){
            parent[ulv] = ulu ;
        }
        else{
            parent[ulv] = ulu ;
            rank[ulu]++;
        }
    }

    void checkforparent(int u , int v){
    if(findpar(u) == findpar(v)){
        cout<<" same \n";
    }
    else{
        cout<<" Not same \n" ;
    }
    
}


       
};





int main()
{
    DijointSets ds(7);
    ds.unionbyrank(1,2);
    ds.unionbyrank(2,3);
    ds.unionbyrank(4,5);

    ds.checkforparent(4,5);
    ds.unionbyrank(6,7);
    ds.unionbyrank(5,6);

    ds.checkforparent(3,7);
    ds.unionbyrank(3,7);


    return 0;
}