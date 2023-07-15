#include <iostream>
#include <queue>
#include <map>
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

pair<bool,int> iSum(node* root){

    //base condition
    if(root->left==NULL && root->right==NULL){
        pair<bool,int> p =make_pair(true,root->data);
        return p;
    }

    pair<bool,int> left=iSum(root->left);

    pair<bool,int> right=iSum(root->right);

    bool leftans=left.first;
    bool rightans=right.first;

    bool condi=root->data==left.second+right.second;

    pair<bool,int> ans;

    if(leftans && rightans && condi){
        ans.first=true;
        ans.second=2*root->data;
    }
    else
    {
        ans.first=false;
    }

    return ans;
    

    



    }

int main()
{
    node* root=NULL;

    root=buildtree(root);

    levelordertraversal(root);
    cout<<endl;

    cout<<"check :: "<< iSum(root).first<<endl;
}


