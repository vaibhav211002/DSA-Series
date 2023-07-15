#include <bits/stdc++.h>
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


node* getmid(node* head)
{
    node* slow =head;
    node* fast=head->next;

    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }

    return slow;   
}

//reverse function
node* reverse(node* head)
{
    node* curr=head;
    node* prev=NULL;
    node* next=NULL;

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev = curr;
        curr=next;
    }
    return prev;

}


bool ispalindrome(node* head)
{
    if(head->next==NULL)
    {
        return 1;
    }
    //step-1
    //find middle
    node* middle=getmid(head);

    //reverse the middle other half lists
    node* temp=middle->next;
    middle->next=reverse(temp);

    //reverse ll comares

    node* head1=head;
    node* head2=middle->next;

    while(head2!=NULL)
    {
        if(head1->data!=head2->data)
        {
            return false;
        }

        head1=head1->next;
        head2=head2->next;
    }

    //step 4 repeasp reverse

    temp= middle->next;
    middle->next=reverse(temp);

    return true;
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
    // cout<<node1->data<<endl; //node is created in dynamic memory 
    // cout<<node1->next<<endl;
    
    //head pointed to node1
    node* node1;
    node* head=NULL;
    int i,a=0;
    for(i=0;i<4;i++)
    {
        cout<<"input data"<<endl;
        cin>>a;
        if(head!=NULL){
            insertathead(head,a);
        }
        else{
            node1=new node(a);
            head=node1;
        }

        
    }
    print(head);
    cout<<"the linked list is pallindrome " << ispalindrome(head)<<endl;
    
}