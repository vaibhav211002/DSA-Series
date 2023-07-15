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

//approch of o(n2)
int height(node* root){
    //base case 
    if(root==NULL){
        return 0;
    }

    int left=height(root->left);
    int right=height(root->right);

    int ans=max(left,right)+1;

    return ans;
}

bool isbal(node* root){

    //base case 
    if(root==NULL){
        return true;
    }

    bool left=isbal(root->left);
    bool right=isbal(root->right);
    bool diff=abs(height(root->left)-height(root->right)<=1);

    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }
}


//approch o(n)
pair<bool,int> isbalfast(node* root){
    //base case 
    if(root==NULL){
        pair<bool,int> p= make_pair(true,0);
        return p;
    }

    pair<bool,int> left=isbalfast(root->left);
    pair<bool,int> right=isbalfast(root->right);

    bool leftans=left.first;
    bool rightans=right.first;



    bool diff=abs((left.second-right.second)<=1);

    pair<bool,int> ans;

    ans.second=max(left.second,right.second)+1;


    if(leftans && rightans && diff){
        ans.first=true;
    }
    else{
        ans.first=false;
    }

    return ans;
}

int main()
{

    node* root=NULL;

    root=buildtree(root);

    levelordertraversal(root);
    // cout<<"tree is balanced :: "<<isbal(root)<<endl;

    cout<<"tree is balanced :: "<<(isbalfast(root)).first<<endl;
    return 0;


    //1 10 5 -1 -1 -1 -1   unbalanced
    //1 10 5 -1 -1 -1 39 -1 -1 balanced 

    
}