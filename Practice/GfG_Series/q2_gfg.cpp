// Given an array with N distinct elements,
//  convert the given array to a reduced form where all elements are in range from 0 to N-1. 
// The order of elements is same, i.e., 0 is placed in place of smallest element, 1 is placed for second smallest element,
//  and N-1 is placed for the largest element.

// Note: You don't have to return anything. You just have to change the given array.


#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

int sort(int a[],int n){
    priority_queue<int> pq;
    unordered_map<int,int> m;
    for (int i = 0; i < n; i++)
    {
        pq.push(a[i]);
        m[a[i]]=i;
    }
    while (!pq.empty())
    {
        a[m[pq.top()]]=n-1;
        n--;
        pq.pop();
    }

    for (int i = 0; i < 4; i++)
    {
        cout<<a[i]<<" ,";
    }
    
    
    
    
}
int main(){
    int a[4]={10,40,30,80};
    sort(a,4);
    // cout<<"no output"<<endl;




}