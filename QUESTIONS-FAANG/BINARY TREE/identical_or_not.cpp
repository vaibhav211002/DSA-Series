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

//identical trees verification 

bool is_identical(node* root1,node* root2){

    //base case
    if(root1==NULL && root2==NULL){
        return true;
    }

    //checks that the node is empty
    if ((root1!=NULL && root2==NULL)  || (root1==NULL && root2!=NULL)){
        return false;
    }

    //recursive call 
    bool left=is_identical(root1->left,root2->left);
    bool right=is_identical(root1->right,root2->right);

    bool data = root1->data==root2->data;


    if(left && right && data){
        return true ;
    }
    else{
        return false;
    }
    
}

int main()
{
    node* root1=NULL;
    node* root2=NULL;

    root1=buildtree(root1);
    root2=buildtree(root2);

    levelordertraversal(root1);

    cout<<endl;
    cout<<endl;

    levelordertraversal(root2);

    cout<<"IDENTICAL : "<<is_identical(root1,root2);


    // 1 2 3 -1 -1 4 -1 -1 5 6 7 -1 -1 -1 -1 


}