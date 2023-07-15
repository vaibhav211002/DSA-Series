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

 //deletion functiom 

    void deletefromheap(){

        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return ;
        }

        int i=1;
                    int leftindex = 2*i;
            int rightindex = 2*i+1;



        arr[1]=arr[size];
        size--;

        while(i<size){

            
            int leftindex = 2*i;
            int rightindex = 2*i+1;

            if(leftindex < size && arr[i] < arr[leftindex] && arr[leftindex] > arr[rightindex]){
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            if(rightindex < size && arr[i] < arr[rightindex] && arr[leftindex] < arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i=rightindex;
            }
            else{
                return ;
            }

        }

    }
};



int main()
{
    heap h;
    h.insert(7);
    h.insert(10);
    h.insert(4);
    h.insert(3);
    h.insert(20);
    h.insert(15);
    h.print();

    h.deletefromheap();

    cout<<"after deletion "<<endl;
    h.print();
            
    

}