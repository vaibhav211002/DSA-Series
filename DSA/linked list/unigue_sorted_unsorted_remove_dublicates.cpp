// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>
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
    
    
    ~node()
    {
        int val=this->data;
        if(this->next==NULL)
        {
            delete next;
            this->next=NULL;
        }
    }
    
};

void insertattail(node* &tail,int d)
{
    node* temp = new node(d);
    tail->next = temp;
    tail=temp;
    
}

void insertpos(node* head ,int pos,int d)
{
    node* temp=head;
    int count=1;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    
    //creating node
    node* newnode= new node(d);
    newnode->next=temp->next;
    temp->next=newnode;
    
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

node* unquiesort(node* head)
{
    //empty lisy 
    if(head==NULL)
    {
        return NULL;
    }
    
    //non empty list
    
    node* curr=head;
    while(curr!=NULL)
    {
        if(curr->next!=NULL && curr->data==curr->next->data)
        {
            node* n_n=curr->next->next;
            node* deletenode =curr->next;
            deletenode->next=NULL;
            delete(deletenode);
            curr->next=n_n;
        }
        else      //not equal
        {
            curr=curr->next;
        }
    }
    return head;
}


//if the LL is unsorted and and we have to dele the element

node* removedub(node* head)
{
    if(head==NULL) 
    {
        return NULL;
    }

    map<int,int> m;
    node* temp=head;
    m[temp->data]=1;
    node* prev=temp;
    temp=temp->next;

    while(temp!=NULL)
    {
        if(m[temp->data]==1)
        {
            prev->next=temp->next;
            free(temp);
        }
        else{

            m[temp->data]=1;
            prev=temp;
        }
        temp=prev->next;

    }

    return head;
}



int main() 
{
    node* node1 =new node(10);
    cout<<node1->data<<endl; //node is created in dynamic memory 
    cout<<node1->next<<endl;
    
    //head pointed to node1
    node* head= node1;
    node* tail= node1;
    int i,a=0;
    // print(head);
    for(i=0;i<4;i++)
    {
        cout<<"input data"<<endl;
        cin>>a;
        insertathead(head,a);

        
    }
        //print(head);
    // for(i=0;i<4;i++)
    // {
    //     a;
    //     cout<<"input data"<<endl;
    //     cin>>a;
    //     insertattail(tail,a);

        
    // }
    
    // insertattail(tail,1);
    // insertattail(tail,1);
    // insertattail(tail,2);
    // insertattail(tail,2);
    print(head);
      

    
    cout<<endl;
    cout<<endl;
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    // head=unquiesort(head);
    // print(head);

   head=removedub(head);
    print(head);
    

    
    
    return 0;
}