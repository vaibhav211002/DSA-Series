// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int data)
    {
        this->data=data;
        this->next=NULL; 
    }
    
};

void insertattail(node* &tail,int d)
{
    node* temp = new node(d);
    tail->next = temp;
    tail=tail->next;
    
}







void insertathead(node* &head ,int d)    //& is used so it doees not make any copy of the  data since we want to a original linked list not a copy   
{
    //new node created 
    node* temp=new node(d);   //new node created for the formt of the  class nde 
    temp->next=head;   //got its address pointed to the older linked list
    head=temp;       //its head got updated 
}

void print(node* &head)
{
    int i=0;
    node* temp =head;
    
    while(temp!=NULL)
    {
        i++;
        cout<<"data of temp "<<i<<"::"<<temp->data<<endl;
        temp=temp->next;
    }
}

int main() 
{
    node* node1 =new node(10);
    // cout<<node1->data<<endl; //node is created in dynamic memory 
    // cout<<node1->next<<endl;
    
    //head pointed to node1
    node* head= node1;
    node* tail= node1;
    int i,a=0;
    // print(head);


    for(i=0;i<4;i++)
    {
        a++;
        insertathead(head,a);

        
    }
    
    print(head);
    // insertattail(tail,6);
    // cout<<"HI"<<endl;
    // print(head);
    

    return 0;
}