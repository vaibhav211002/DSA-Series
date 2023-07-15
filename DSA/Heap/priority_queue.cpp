#include <bits/stdc++.h>

#include <queue>
using namespace std;
int main()
{

    priority_queue<int> pq;    //max queue

    pq.push(7);
    pq.push(10);
    pq.push(4);
    pq.push(3);
    pq.push(20);
    pq.push(15);

    cout<<"top element : "<<pq.top()<<endl;
    cout<<"size :: "<<pq.size()<<endl;
    pq.pop();
    cout<<"top element : "<<pq.top()<<endl;
    cout<<"size :: "<<pq.size()<<endl;
    pq.pop();
    cout<<"top element : "<<pq.top()<<endl;
    cout<<"size :: "<<pq.size()<<endl;
    pq.pop();
        cout<<"top element : "<<pq.top()<<endl;
    cout<<"size :: "<<pq.size()<<endl;
    pq.pop();
        cout<<"top element : "<<pq.top()<<endl;
    cout<<"size :: "<<pq.size()<<endl;
    pq.pop();
    cout<<"size :: "<<pq.size()<<endl;
        pq.pop();
    cout<<"size :: "<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"not empty "<<endl;
    }
    cout<<"size :: "<<pq.size()<<endl;



    //     priority_queue<int,vector<int>,greater<int>> p;    //min queue

    // p.push(3);
    // p.push(5);
    // p.push(8);
    // p.push(1);
    // p.push(7);

    // cout<<"top element : "<<p.top()<<endl;
    // p.pop();
    // cout<<"top element : "<<p.top()<<endl;
    // p.pop();
    // cout<<"top element : "<<p.top()<<endl;
    // p.pop();
    // cout<<"size of queue : "<< p.size()<<endl;
    // if(p.empty()){
    //     cout<<"empty"<<endl;
    // }
    // else{
    //     cout<<"not empty "<<endl;
    // }
    return 0;
}