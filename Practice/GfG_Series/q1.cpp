// Given an array of size N containing only 0s, 1s, and 2s; 
// sort the array in ascending order.


#include <iostream>
#include <queue>
using namespace std ;

int sortpq(int arr[],int n){
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }
    int i=n;
    while (!pq.empty())
    {
        arr[i-1]=pq.top();
        pq.pop();
        i--;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

int sort(int a[],int n){
    int e=n-1;
    int s=0;
    int an[5];


    for(int i=0;i<n;i++){
        if(a[i]==0){
            an[s]=0;
            s++;
        }

        if(a[i]==2){
            an[e]=2;
            e--;
        }
    }

    for ( int i = s; i <=e; i++)
    {
        an[i]=1;

    }
    for (int i = 0; i < n; i++)
    {
        a[i]=an[i];
    }
}

int sort3(int a[],int n){
    int one=0;
    int zero=0;
    int two=0;

    for (int i = 0; i <n; i++)
    {
        if(a[i]==0){
            zero++;
        }
        if(a[i]==1){
            one++;
        }
        if(a[i]==2){
            two++;
        }
    }
    int i=0;
    while (zero!=0)
    {
        a[i]=0;
        zero--;
        i++;
    }
    while (one!=0)
    {
        a[i]=1;
        one--;
        i++;
    }
    while (two!=0)
    {
        a[i]=2;
        two--;
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main(){
    // int arr[3]={};
    // sortpq(arr,3);
    int a[5]={0,2,1,2,0};
    sort3(a,5);
}