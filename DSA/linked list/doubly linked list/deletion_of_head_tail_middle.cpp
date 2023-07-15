#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* prev;
    node* next;
    
    //constructor
    node(int d)       //constructing linked lists
    {
        this->data=d;
        this->prev=NULL;
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
        cout<<"memory free : " << val<<endl;
    }
};
 
 void print(node* &head) //printing of linked list
 {
     node* temp = head;
     while(temp!=NULL)
     {
         cout<<temp->data<<" ";
         temp=temp->next;
     }
     
     cout<<endl;
 }
 
 int getlen(node* &head)     //lenght of linked list 
 {
     int len=0;
     node* temp=head;
     while(temp!=NULL)
     {
         len++;
         temp=temp->next ;
     }
     return len;
 }
 
 void inserthead(node* &head,int d)    //insert at head position 
 {
     node* temp= new node(d);
     temp->next=head;
     head->prev=temp;
     head=temp;
 }

void inserttail(node* &tail,int d)      //insert at tail position
{
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertatany(node* &tail,node* &head,int d,int pos)
{
    if(pos==1)
    {
        inserthead(head,d);     //at head position only when the user only gave position 

    }
    else
    {
        node* temp=head;
        int cnt=1;
        while(cnt<pos-1)
        {
            temp=temp->next;
            cnt++;
        }
        
        if(temp->next==NULL)
        {
            inserttail(tail,d);        //at head position only when the user only gave position 
        }
        node* nod= new node(d);
        nod->next=temp->next;
        temp->next->prev=nod;
        temp->next=nod;
        nod->prev=temp;
    }
}

void del(node* &head,node* &tail,int pos)
{
    if(pos==1)       //deletion for head 
    {
       node* temp=head; 
       temp->next->prev=NULL;
       head=temp->next;
       temp->next=NULL;
       delete temp;
    }
    else
    {
        node* curr=head;
        node* prev=NULL;    //deletion for tail and middle 
        int cnt=1;
        while(cnt<pos-1)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    
        
    }
       
}



int main()
{
    node* node1= new node(9);
    node* head=node1;
    node* tail=node1;

    
    print(head);
    cout<<getlen(head)<<endl;
    
    
    for(int i=1;i<5;i++)
    {
        inserthead(head,i);              //insert at tail 
    }
    print(head);
    cout<<"after insertion at tail :: " <<endl;
    
    inserttail(tail,6);
    inserttail(tail,12);         //insert at tail 
    print(head);
    
    cout<<"after generic insertion"<<endl<<endl;
      
      
    //genseric method of insertion of tail/head/middle 
    
    insertatany(tail,head,2,3);
    print(head);
    insertatany(tail,head,4,1);
    print(head);
    insertatany(tail,head,5,4);
    print(head);                     // insertion at any position 

    
    cout<<"deletion"<<endl;
    del(head,tail,1);
    print(head);
    del(head,tail,3);
    print(head);
    del(head,tail,8);
    print(head);

    
    
    
    return 0;
}