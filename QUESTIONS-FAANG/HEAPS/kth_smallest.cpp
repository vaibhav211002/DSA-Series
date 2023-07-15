#include <bits/stdc++.h>
using namespace std;

#include <queue>

int main()
{

    int arr[5]={7,10,4,20,15};
    cout<<"hi";
    priority_queue<int> pq;
    int k;
    cin>>k;

    for (int i = 0; i <k; i++)
    {

        pq.push(arr[i]);
        cout<<"top most element:"<<pq.top()<<endl;

    }

    cout<<endl;
    while(k<5){
        if(arr[k]<pq.top()){

            pq.pop();
            cout<<"top most element:"<<pq.top()<<endl;
            pq.push(arr[k]);
            k++;
        }
    }

    cout<<"smallest element is : "<<pq.top()<<endl;
    return 0;
}