#include <iostream>
#include <queue>
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




// ---------------------------------------------------------------------------------



//checking a tree if it is a binary tree or  not
bool iscbt(node* root,int i ,int cnt){
    if(root==NULL){
        return true;
    }

    if(i>cnt){
        return false;
    }
    else{

        bool leftcbt=iscbt(root->left,2*i+1,cnt);
        bool rightcbt=iscbt(root->right,2*i+2,cnt);
        return (leftcbt && rightcbt);
    }
}
// ---------------------------------------------------------------------------------


// to count the nodes of a binary tree
int countN(node* root){

    //base case 
    if(root==NULL){
        return 0;
    }

    int ans =1+countN(root->left)+countN(root->right);
    return ans ;
    
}
// ---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------

bool ismaxorder(node* root){
    //leaf node

    if(root->left == NULL && root->right==NULL){
        return true;
    }


    //condition for node only left is present in the BT
    if(root->right==NULL){
        return (root->data>root->left->data);
    }
    else{
        bool left =ismaxorder(root->left);
        bool right=ismaxorder(root->right);
    }

    if(left && right && (root->data>root->left->data && root->data>root->right->data)){
        return true;
    }
    else{
        return false;
    }
}



// ---------------------------------------------------------------------------------

// main driver function 
bool isheap(node* root){

    int index=0;
    int totalcount=countN(root);
    int a=iscbt(root,index,totalcount);
    int b=ismaxorder(root);
    if(a && b){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    node* root=NULL;
    root=buildtree(root);
    levelordertraversal(root);
    cout<<"isheap or not "<<isheap(root)<<endl;

    
}