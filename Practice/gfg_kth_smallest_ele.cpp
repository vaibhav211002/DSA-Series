#include <iostream>
#include <queue>
using namespace std;





int main(){


    priority_queue<int> pq;
    pq.push(7);
    pq.push(10);
    pq.push(4);
    pq.push(3);
    pq.push(20);
    pq.push(15);

    cout<<"kth smallest element : ";
    int k;
    cin>>k;
    cout<<pq.size()<<endl;

    int size=pq.size();


    while(size>k){

        pq.pop();
        size--;
    }

    cout<<"kth smallest element "<< pq.top()<<endl;



}