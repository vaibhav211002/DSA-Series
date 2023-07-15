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
        //cout<<"memory is free of data : "<<val<<endl;
    }
    

    
    
    
};




void insertathead(node* &head ,int d)    //& is used so it doees not make any copy of the  data since we want to a original linked list not a copy   
{
    //new node created 
    node* temp=new node(d);   //new node created for the formt of the  class nde 
    temp->next=head;   //got its address pointed to the older linked list
    head=temp;       //its head got updated 
}


int del(node* &head)
{
    node* curr=head;
    node* prev=NULL;
    
    if(curr->next==NULL){
      int a=curr->data;
      delete curr;
      head=NULL;
      return a;
      }
    else{
      while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
      }
      
      int a=prev->data;
      prev->next=NULL;
      delete curr;
      return a;
    }
        

}
int findmax(int a[],int n){

    int k= INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (k<a[i])
        {
            k=a[i];
        }
    }

    return k;
    
}


int binsort(int a[],int n){

    int max = findmax(a,n);
    
    node **bins;

    bins = new node*[max+1];

    for (int i = 0; i <max+1; i++)
    {
        bins[i]=NULL;
    }

    for (int i = 0; i < n; i++)
    {
        insertathead(bins[a[i]],a[i]);
    }

    int i=0;
    int j=0;
    cout<<endl;


    while (i<max+1)
    {

        while(bins[i]!=NULL){
            a[j++]=del(bins[i]);
        }
        i++;
    }
    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<",";
    }

}

int main()
{
    int a[10]={6,8,3,10,15,6,9,12,6,3};
    binsort(a,10);
}