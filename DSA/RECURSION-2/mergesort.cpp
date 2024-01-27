#include <iostream> 
using namespace std;



void mergesort(int arr[],int start,int size){

    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

    int arr[5]={8,4,2,1,3};
    int n=5;
    mergesort(arr,0,n-1);

}