#include <bits/stdc++.h>
using namespace std;






class stak{
    public:
    int top;
    int *arr;
    int size;
     


     stak(int size)
     {
        this->size=size;
        arr =new int[size];
        top=-1;
    }


    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;

        }
        else{
            cout<<"stack overflow"<<endl;
        }

    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }


    }


    int peek(){
        if(top>=0 && top<size ){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }

    }


    bool empty(){
        if(top=-1)
        {
            return true;
        }
        else{
            return false;

        }

    }

};

int main()
{

    stak st(2);

    st.push(22);
    cout<<st.peek()<<endl;

    st.push(32);
    cout<<st.peek()<<endl;


    st.push(56);

    cout<<st.peek()<<endl;

}

