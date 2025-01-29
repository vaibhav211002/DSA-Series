#include <bits/stdc++.h>
using namespace std;


class node{

    public :
    int data ;
    node* next ; 

    node(int data){
        this->data=data;
        this->next=next;
    }
};

// stack

class stack{

    node* top ;
    public:

    stack(){top = NULL;}

    void push(int x){
        node* temp = new node(x);
        if(!temp){
            return;
        }

        temp->data = x;
        temp->next = top;
        top = temp;
    }

    bool isempty(){
        return top==NULL;
    }

    int peek(){
        if(!isempty()){
            return top->data;
        }
        return 1;
        
    }

    int pop(){
        if(top==NULL){
            return 1;
        }
        else{
            node* temp;
            top = top->next;
            free(temp);
        }
    }

};





int main()
{
    node* node1 =new node(10);
    cout<<node1->data<<endl; //node is created in dynamic memory 
    cout<<node1->next<<endl;
    return 0;
}