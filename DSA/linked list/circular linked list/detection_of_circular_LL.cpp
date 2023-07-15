#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //consstructor
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
    
    ~node()
    {
        int val=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<val<<endl;
    }
};

void insertnode(node* &head,int ele,int d)
{
    //assuming the element is present in the list
    //empty list
    if(head==NULL)
    {
        node* nod=new node(d);
        head= nod;
        nod->next=nod;
    }
    //non empty list
    
    else
    {
        node* curr =head;
        while(curr->data!=ele)
        {
            curr=curr->next;
        }
        
        //element found and curr is on that element 
        node* temp=new node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}


void print(node* head)
{
    
    node* temp=head;
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    do{
        cout<<head->data<<" ";
        head=head->next;
    }while(head!=temp);
    cout<<endl;
    
    // cout<<head->data<<endl;
    // while(head->next!=temp)
    // {
    //     cout<<head->data<<" ";
    //     head=head->next;
    // }
}


void del(node* &head,int value)
{
    if(head==NULL)
    {
        cout<<"list is already empty"<< endl;
        return;
    }
    else
    {
        //non-empty
        //assuming value is present 
        node* pre=head;
        node* curr=pre->next;
        
        while(curr->data!=value)
        {
            pre=curr;
            curr=curr->next;
        }
        pre->next=curr->next;
        //1 node linked list
        if(curr==pre)
        {
            head=NULL;
        }
        
        //2 node linked lists 
        if(head==curr)
        {
            head=pre;
        }
        curr->next=NULL;
        delete curr;
    }
}
bool is_circular(node* head)
{
    if(head==NULL)
    {                                  //for no node
        return NULL;
    }
    
    node* temp=head->next;
    while(temp!=NULL && temp!=head)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    node* head=NULL;
    insertnode(head,5,7);
    print(head);
    insertnode(head,7,9);
    print(head);
    insertnode(head,7,6);
    print(head);
    insertnode(head,6,5);
    print(head);
    insertnode(head,7,11);
    print(head);
    
    if(is_circular(head))
    {
        cout<<"linked list is circular in nature"<<endl;
    }
    else
    {
        cout<<"linked list is not circular"<<endl;
    }
    

    // del(head,8);
    // print(head);
    // del(head,7);
    // print(head);
}
