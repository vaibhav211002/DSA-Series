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
};
 
 void print(node* &head) //printing of linked list
 {
     node* temp = head;
     while(temp!=NULL)
     {
         cout<<temp->data;
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
 

int main()
{
    node* node1= new node(10);
    node* head=node1;
    
    print(head);
    cout<<getlen(head)<<endl;
    
    return 0;
}