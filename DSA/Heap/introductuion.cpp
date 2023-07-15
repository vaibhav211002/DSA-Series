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
        print();
        cout<<"index : "<<index<<endl;
        cout<<endl;
        cout<<endl;
        

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
        cout<<endl;
        cout<<endl;
        cout<<endl;
        for (int i = 1; i <=size; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
};







int main()
{
    heap h;
    h.insert(4);
    
    h.insert(10);
    
    h.insert(15);
    
    h.insert(3);
    
    h.insert(7);
    // h.insert(15);
    h.print();

    //
            
    

}