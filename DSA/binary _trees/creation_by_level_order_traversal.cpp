#include <bits/stdc++.h>
using namespace std;
 

class node{
    public:

    int data;
    node* left;
    node* right;


    //constructor 

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

//function to buid tree
node* buildtree(node* root)
{
    cout<<"enter the data : ";
    int data;
    cin>>data;

    root=new node(data);
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






void inorder(node* root)
{
    //base case
    if(root==NULL)
    {
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}




void preorder(node* root)
{
    //base case
    if(root==NULL)
    {
        return ;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(node* root)
{
    //base case
    if(root==NULL)
    {
        return ;
    }

    cout<<root->data<<" ";
    postorder(root->left);
    postorder(root->right);
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




node* buildfromlevelorder(node* root)
{
    queue<node*> q;
    cout<<"enter data for root"<<endl;
    int data;
    cin>>data;

    root=new node(data);
    q.push(root);

    while(!q.empty())
    {
        node* temp=q.front();
        cout<<"enter left node for : "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1)
        {
            temp->left=new node(leftdata);
            q.push(temp->left);
        }

        cout<<"enter right node for : "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!=-1)
        {
            temp->right=new node(rightdata);
            q.push(temp->right);
        }



    }
}
int main()
{

    node* root=NULL;

    //CREATION OF TREE 

    root = buildtree(root);

    levelordertraversal(root);

    // // cout<<" inorder : "<<endl;
    // // inorder(root);

    // // cout<<endl;

    // // cout<<" preorder : "<<endl;
    // // preorder(root);

    // // cout<<endl;


    // // cout<<" postorder : "<<endl;
    // // postorder(root);


    // buildfromlevelorder(root);
    // levelordertraversal(root);
    


    return 0;
}