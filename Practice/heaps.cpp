#include <iostream>
#include <queue>
using namespace std;




class heap{
    public:
    int arr[100];
    int size=0;

    void insert(int val){

        size=size+1;
        int index=size;

        arr[index]=val;

        while(index>1){

            int parent=index/2;
            if(arr[index]>arr[parent]){
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else{
                return ;
            }

        }    
    }

    void print(){
        
        for (int i = 1; i <=size; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    
    void deletion(){

        arr[1]=arr[size];
        size--;

        int i=1;

        while(i<size){
            
            print();
            cout<<endl;

            int leftindex=2*i;
            int rightindex=2*i+1;

            if(leftindex<size && arr[leftindex]>arr[i]  && arr[leftindex]>arr[rightindex]){
                swap(arr[leftindex],arr[i]);
                cout<<"value of i :"<<i<<endl;
                i=leftindex;
                cout<<" 2 nd value of i :"<<i<<endl;
            }
            
            else if(rightindex<size && arr[rightindex]>arr[i] && arr[rightindex]>arr[leftindex]){
                swap(arr[rightindex],arr[i]);
                cout<<"value of i :"<<i<<endl;

                i=rightindex;

            }
            else{
                return ;
            }
        }


    }






};


int main(){

    heap h;
    h.insert(7);
    h.insert(10);
    h.insert(4);
    h.insert(3);
    h.insert(20);
    h.insert(15);
    h.print();
    cout<<endl;
    h.deletion();
    cout<<endl;
        h.print();




}