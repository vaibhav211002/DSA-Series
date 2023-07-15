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
    
    ~node()
    {
        int val=this->data;
        if(this->next==NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free of data : "<<val<<endl;
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


void del(node* &head, int pos)
{
    if(pos==1)
    {
        node* temp=head;
        head=head->next;
        //memory free
        temp->next=NULL;
        delete temp;
    }
    else
    {
        node* curr=head;
        node* prev=NULL;
        int c=1;
        while(c<pos)
        {
            prev=curr;
            curr=curr->next;
            c++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
}

node* reverse(node* root)
{
    node* curr=root;
    node* prev=NULL;
    node* next=NULL;
    
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    return prev;
}



node* add(node* &root1,node* &root2)
{
    int carry=0;
    int sum=0;
    int digit=0;

    node* ans=NULL;

    while(root1!=NULL || root2!=NULL || carry!=0)
    {

        int val1;
        if(root1!=NULL){
            val1=root1->data;
        }

        int val2;
        if(root2!=NULL){
            val2=root2->data;
        }

        sum=carry+val1+val2;
        carry=sum/10;
        digit=sum%10;
        insertattail(ans,digit);

        if(root1!=NULL){
            root1=root1->next;
        }

        if(root2!=NULL){
            root2=root2->next;
        }


    }
    return ans;

}


node* addition(node* &root1,node* &root2 )
{
    //reverse the linked lists

    root1=reverse(root1);
    root2=reverse(root2);

    //addition of the link

    node* ans =add(root1,root2);
    ans =reverse(ans);

    return ans;


}

int main()
{

    node* node1;
    node* node2;
    node* root1=NULL;
    node* root2=NULL;
    int i,a=0;
    for(i=0;i<2;i++)
    {
        cout<<"input data"<<endl;
        cin>>a;
        if(root1!=NULL){
            insertathead(root1,a);
        }
        else{
            node1=new node(a);
            root1=node1;
        }
    }

    cout<<"enter of 2nd LL"<<endl;
    
    a=0;
    for(i=0;i<3;i++)
    {
        cout<<"input data"<<endl;
        cin>>a;
        if(root2!=NULL){
            insertathead(root2,a);
        }
        else{
            node1=new node(a);
            root2=node1;
        }
    }
    cout<<endl;
    print(root1);

    cout<<"another data"<<endl;
    print(root2);

    node* ans=addition(root1,root2);
    print(ans);

}