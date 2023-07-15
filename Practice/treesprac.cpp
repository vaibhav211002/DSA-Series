#include <iostream>
#include <queue>
using namespace std;

class node{
    public:

    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};


node* buildtree(node* root){

    cout<<"enter the data ";
    int d;
    cin>>d;

    root=new node(d);

    if(d==-1){
        return NULL;
    }

    cout<<"enter the data for insertion in left of "<<d<<endl;
    root->left=buildtree(root->left);
    cout<<"enter the data for insertion in right of "<<d<<endl;
    root->right=buildtree(root->right);

    return root;

}


void traversal(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        node* temp= q.front();
        q.pop();

        if (temp==NULL){

            //PURANA LEVEL 
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }

        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }
}

//left-node-right 
void inorder(node* root){
    //base 
    if(root==NULL){
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


//node-left-right
void preorder(node* root){

    //base
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


//left-right-node
void postorder(node* root){

    if(root==NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root=NULL;
    root=buildtree(root);
    traversal(root);
        cout<<" inorder : "<<endl;
    inorder(root);

    cout<<endl;

    cout<<" preorder : "<<endl;
    preorder(root);

    cout<<endl;


    cout<<" postorder : "<<endl;
    postorder(root);\

    // 11 8 4 -1 -1 6 -1 -1 19 -1 -1

}