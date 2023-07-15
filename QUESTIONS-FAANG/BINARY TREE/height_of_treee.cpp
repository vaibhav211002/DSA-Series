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
//    int static count=0;


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
            // count++;
            

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


//hero code 

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

int main()
{
    node* root=NULL;

    //CREATION OF TREE 

    root = buildtree(root);

    levelordertraversal(root);

    cout<<"height of tree "<<height(root);
    // cout<<"height of tree "<<count;

}