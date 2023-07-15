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
// using the reversal of LL in  the while loop
void reverse(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return ;
    }
    node* prev=NULL;
    node* curr=head;
    node* forward=NULL;
    
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward ;
    }
    head=prev;
    
}

node* reverse1(node* &head)
{
    //base case 
    if(head==NULL || head->next==NULL)
    {
        return head ;
    }
    
    node* chotahead= reverse1(head->next);
    head->next->next=head;
    head->next=NULL;
    return chotahead;
}
void recursive(node* &head,node* &curr,node* &prev)
{
    //base
    if(curr==NULL)
    {
        head=prev ;
        return ;
    }
    
    node* forward = curr->next;
    recursive(head,forward,curr);
    curr->next=prev;
}
//using recursive technique 
node* oreverse(node* &head)
{
    
    //  return reverse1(head);
    node* curr=head;
    node* prev=NULL;
    recursive(head,curr,prev);
    return head;
    
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
    cout<<node1->data<<endl; //node is created in dynamic memory 
    cout<<node1->next<<endl;
    
    //head pointed to node1
    node* head= node1;
    int i,a=0;

    for(i=0;i<4;i++)
    {
        cout<<"input data"<<endl;
        cin>>a;
        insertathead(head,a);

        
    }
    
    print(head);
    oreverse(head);           //reversal using iterative merthod 
    cout<<"after reversal"<<endl;
    print(head);

    return 0;
}