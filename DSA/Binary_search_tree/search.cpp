#include <bits/stdc++.h>
using namespace std;


class node{
    public: 

    node *left;
    node *right;
    int data;

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};

node* buildtree(node *root)
{
    cout<<"enter the data ";
    int data;
    cin>>data;

    root= new node(data);

    if(data==-1)
    {
        return NULL;
    }
    cout<<"enter data for insertion in left of "<<data<<endl;
    root->left = buildtree(root -> left);
    cout<<"enter data for insertion of right of "<<data<<endl;
    root->right = buildtree(root -> right);


    return root;

}

void levelordertraversal(node* root)
{
   queue<node*>q;
   q.push(root);
   q.push(NULL);


   while(!q.empty())
   {
    node* temp=q.front();
    
    q.pop();

    
    if(temp==NULL)
    {
        //purana level complete ho chuka hai 
        cout<<endl;
        if(!q.empty())
        {
            //queue still has some child nodes

            q.push(NULL);

        }
    }
    else{
        cout<< temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }

        if(temp->right)
        {
            q.push(temp->right);
        }
    }

   }
}

node* contructbst(node* root,int data){

    //base case
    if(root==NULL){
        root=new node(data);
        return root;
    }

    // now analyze the case according to the side where you want to go

    if(data> root->data)
    {
        root->right=contructbst(root->right,data);

    }
    else{
        root->left=contructbst(root->left,data);

    }

    return root;
}


node* inserttobst(node* root)
{
    int data;
    cin>>data;

    while(data!=-1)
    {
        root=contructbst(root,data);
        cin>>data;
    }
    return root;
}

bool searchbst(node* root,int x){


    node* temp=root;
    while(temp!=NULL){
        
        if(temp!=NULL){
            return true;
        }

        if(temp->data > x){
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }

    }

    return false;
}


int minval(node* root)
{
    node* temp=root;
    node* curr=NULL;
    while (temp!=NULL)
    {
        curr=temp;
        temp=temp->left;
    }

    return curr->data;
    
}




int main()
{

    node* root=NULL;

    root=inserttobst(root);

    cout<<endl;
    levelordertraversal(root);
    cout<<endl;

    cout<<" search bst "<<searchbst(root,27)<<endl;
    cout<<" search bst "<<searchbst(root,20)<<endl;

    cout<<endl;
    cout<<"minimum value "<< minval(root)<<endl;

    return 0;
}


