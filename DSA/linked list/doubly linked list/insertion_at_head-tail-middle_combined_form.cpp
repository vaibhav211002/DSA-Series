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

void insertnode(node* &tail,int ele,int d)
{
    //assuming the element is present in the list
    //empty list
    if(tail==NULL)
    {
        node* nod=new node(d);
        tail= nod;
        nod->next=nod;
    }
    //non empty list
    
    else
    {
        node* curr =tail;
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


void print(node* tail)
{
    node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
    
    // cout<<tail->data<<endl;
    // while(tail->next!=temp)
    // {
    //     cout<<tail->data<<" ";
    //     tail=tail->next;
    // }
}


void del(node* &tail,int value)
{
    if(tail==NULL)
    {
        cout<<"list is already empty"<< endl;
        return;
    }
    else
    {
        //non-empty
        //assuming value is present 
        node* pre=tail;
        node* curr=pre->next;
        
        while(curr->data!=value)
        {
            pre=curr;
            curr=curr->next;
        }
        pre->next=curr->next;
        if(tail==curr)
        {
            tail=pre;
        }
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
    node* tail=NULL;
    insertnode(tail,5,8);
    print(tail);
    insertnode(tail,8,7);
    print(tail);
    insertnode(tail,7,6);
    print(tail);
    insertnode(tail,6,5);
    print(tail);
    insertnode(tail,7,11);
    print(tail);
    
    cout<<endl<<"after deletion "<< endl;
    del(tail,7);
    print(tail);
    del(tail,8);
    print(tail);
    del(tail,7);
    print(tail);
}
