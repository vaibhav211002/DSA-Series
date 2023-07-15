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

int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int left=height(root->left);
    int right=height(root->right);

    int ans=max(left,right)+1;

    return ans;
}

// method of o(n-sqaure)
int diametre(node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int op1=diametre(root->left);
    int op2=diametre(root->right);
    int op3=height(root->left)+height(root->right)+1;
    return max(op1,max(op2,op3));
}

int main()
{
    
        node* root=NULL;

    //CREATION OF TREE 

    root = buildtree(root);

    levelordertraversal(root);

    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 8 -1 -1 9 -1 -1 

    cout<<"diametere "<<diametre(root);

}