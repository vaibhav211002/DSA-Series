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

int getlen(node* head)
{
    int len=0;
    while(head!=NULL)
    {
        len++;
        head=head->next;
    }
    return len;
}
node* findmiddle(node * head)
{
    int len=getlen(head);
    int ans=(len/2);
    
    node* temp=head;
    int cnt=0;
    while(cnt<ans)
    {
        temp=temp->next;
        cnt++;
    }
    return temp;
}
//optimesed solution   
node* getmid(node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    //2 node 
    if(head->next->next==NULL)
    {
        return head->next;
    }
    node* slow=head;
    node* fast=head->next;
    
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
       
    }
     return slow;
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

    for(i=0;i<5;i++)
    {
        cout<<"input data"<<endl;
        cin>>a;
        insertathead(head,a);

        
    }
    print(head);
    
    cout<<findmiddle(head)->data<<endl;
    cout<<getmid(head)->data<<endl;
    

    return 0;
}