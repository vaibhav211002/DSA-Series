#include <iostream>
#include <stack>
#include <map>
#include <unordered_map>
#include <queue>
using namespace std;


// int height(int node){

//     //base case 

//     if()
// }


int main()
{
    priority_queue<int> pq;
    int ar[5]={1,5,2,6,8};
    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);
    pq.push(8);
    unordered_map<int,int> m;

    
    // cout<<pq.top()<<endl;

    while(pq.size()){

        m[(pq.top())]=pq.size()-1;
        

        pq.pop();
    }
    // cout<<m[8]<<endl;

    // for(auto i : m){
    //     cout<<i.first<<"->>"<<i.second<<endl;;
    // }

    for(int k=0;k<5;k++){
        ar[k]=m[ar[k]];
        cout<<ar[k]<<",";
    }


    

}