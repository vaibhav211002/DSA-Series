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

bool detectloop(node* head)
{                                            //normal loop detection
    if(head==NULL)
    {
        return false;
    }
    map<node* ,bool> visited;
    
    node* temp=head;
    while(temp!=NULL)
    {
        //cycle identification using the true element
        if(visited[temp]==true)
        {
            return 1;
        }
        
        visited[temp]=true;
        temp=temp->next;
    }
    
    return false;
}

node* floydetectloop(node* head)          //floyd detection algorithm
{                                         //loop detections 
    if(head==NULL)
    {
        return NULL;
    }
    
    node* slow=head;
    node* fast=head;
    
    while(slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
        
        if(fast==slow)
        {
            cout<<"present at : "<<slow->data<<endl;
            return slow;
        }
    }
    
    
    return NULL;
}

node* getnode(node* head)
{
    if(head==NULL)                       //get starting nodes of repeating
    {
        return NULL;
    }
    
    node* inter =floydetectloop(head);
    node* slow=head;
    while(slow!=inter)
    {
        slow=slow->next;
        inter=inter->next;
    }
    
    return slow ;
}


void  removeloop(node* head)
{
    if(head==NULL)                       //removing loops
    {
        return ;
    }
    
    node* start=getnode(head);
    node* temp=start;
    while(temp->next!=start)
    {
        temp=temp->next;
    }
    temp->next=NULL;
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
    // for(i=0;i<4;i++)
    // {
    //     cout<<"input data"<<endl;
    //     cin>>a;
    //     insertathead(head,a);

        
    // }
        //print(head);
    for(i=0;i<4;i++)
    {
        a++;
        cout<<"input data"<<endl;
        cin>>a;
        insertattail(tail,a);

        
    }
    
    print(head);
    
    //tail->next=head->next;         //loop is created in the program LL 
    
    //print(head);

    if(detectloop(head))
    {
        cout<<"cycle is present"<<endl;
    }
    else
    {
        cout<<"cycle is absent"<<endl;
    }
    
    // cout<<endl;
    // cout<<endl;
    // cout<<"head : "<<head->data<<endl;
    // cout<<"tail : "<<tail->data<<endl;
    
    // if(floydetectloop(head))
    // {
    //     cout<<"cycle is present"<<endl;
    // }
    // else
    // {
    //     cout<<"cycle is absent"<<endl;
    // }
    // node* loop=getnode(head);
    // cout<<"starting is present at ::: "<<loop->data<<endl;
    
    // //print(head);
    // removeloop(head);
    // print(head);
    
    
    
    return 0;
}