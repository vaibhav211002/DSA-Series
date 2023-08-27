#include <iostream>
using namespace std;
#include <queue>
#include <vector>

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

void traverseleft(node* root,vector<int>&ans){
    if(root==NULL){
        return ;
    }

    if(root->left==NULL && root->right==NULL){
        return ;

    }

    ans.push_back(root->data);

    if(root->left){
        traverseleft(root->left,ans);
    }else{
        traverseleft(root->right,ans);
    }

    

}

void traverseleaf(node* root,vector<int> &ans){
    //base case
    if(root==NULL){
        return ;
    }

    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
        
    }

    traverseleaf(root->left,ans);
    traverseleaf(root->right,ans);


}

void traverseright(node* root,vector<int> &ans){
    if(root==NULL){
        return ;
    }

    if(root->left==NULL && root->right==NULL){
        return ;

    }

    

    if(root->right){
        traverseright(root->right,ans);
    }else{
        traverseright(root->left,ans);
    }

    ans.push_back(root->data);

}

vector<int> traversal(node* root){

    vector<int>ans;
    if(root==NULL){
        return ans;
    }

    ans.push_back(root->data);
    //left part 
    traverseleft(root->left,ans);

    //subtree
    traverseleaf(root->left,ans);
    traverseleaf(root->right,ans);

    //rightpart
    traverseright(root->right,ans);

    for (auto i :ans)
    {
        cout<<i<<" ";
    }
    



}

int main(){

    node* root=NULL;
    root=buildtree(root);
    cout<<endl;
    levelordertraversal(root);
    cout<<endl;
    traversal(root);

    //1 2 3 -1 -1 5 6 -1 -1 8 -1 -1 4 -1 7 -1 9 10 -1 -1 11 -1 -1 


}