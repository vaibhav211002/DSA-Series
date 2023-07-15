#include <bits/stdc++.h>
using namespace std;




class Nstack{


    int *arr;
    int *top;
    int *next;

    int n,s;

    int freespot;


    public:


    Nstack(int N,int S){
        n=N;
        s=S;
        arr=new int[s];
        top=new int[n];
        next=new int[s];

        //top initialize
        for (int i = 0; i < n; i++)
        {
            top[i]=-1;
        }


        // next initialize

        for (int i = 0; i <s; i++)
        {
            next[i]=i+1;
        }
        //update last index value to -1

        next[s-1]=-1;

        // initialize freespot

        freespot=0;
        
        
        

    }

    //pushes x into mth stack returns true if it gets pushed into stack and false otherwise

    bool push(int x,int m){

        //check overflow
        if(freespot==-1){
            return false;

        }

        //find index 

        int index=freespot;

        //update freespot

        freespot=next[index];

        //insert element in array 

        arr[index]=x;

        //update next 

        next[index]=top[m-1];

        //update top 
        top[m-1]=index;

        

        return 1;
    }


    bool pop(int m){
        if(top[m-1]==-1){
            return -1;
        }


        int index =top[n-1];

        top[m-1]=next[index];

        next[index]=freespot;

        freespot=index;

        return arr[index];

    }




};









int main()
{
    Nstack a(5,3);
    a.push(1,2);
    a.pop(1);
    return 0;
}