#include <bits/stdc++.h>
using namespace std;

class heap
{
    public:
    int arr[100];

    int size=0;

    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while (index>1)
        {
            int parent =index/2;
            if (arr[index]>arr[parent])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
            



        }
        
    }

    void print(){
        for (int i = 1; i <=size; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
};


void heapify(int arr[],int size ,int i){

    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<size && arr[largest]<arr[left]){
        largest=left;
    }

    if(right<size && arr[largest]<arr[right]){
        largest=right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,size,largest);
    }

    return;
}



int main()
{
    heap h;

    cout<<"after deletion "<<endl;

    int arr[6]={-1,54,56,55,52,50};
    int n=5;

    for (int i = n/2; i>0; i--)
    {
        heapify(arr,n,i);
    }

    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<"  ";
    }
}