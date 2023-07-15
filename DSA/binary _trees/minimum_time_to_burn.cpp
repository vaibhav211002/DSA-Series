#include <bits/stdc++.h>
using namespace std;



//code is working but the ans is not coming due to some random error

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

node* createmapping(node* root ,int target,map<node*,node*> &nodetoparent)
{
    node* res;

    nodetoparent[root]=NULL;
    queue<node*>q;
    q.push(root);


    while(!q.empty())
    {
        node* front=q.front();
        q.pop();

        if(front->data==target)
        {
            res=front;
        }

        if(front->left)
        {
            nodetoparent[front->left]=front;
            q.push(front->left);
        }

        if(front->right)
        {
            nodetoparent[front->right]=front;
            q.push(front->right);
        }
    }


    return res;



}




int burntree(node* root,map<node*,node*> &nodetoparent)
{
    map<node*,bool>visited;
    queue<node*> q;

    q.push(root);
    visited[root]=true;
    
    int t=0;
    

    while(!q.empty())
    {
        bool c=0;
        
        int size=q.size();
        for (int i = 0; i <size; i++)
        {

            //process the nodes 
            node* front=q.front();
            q.pop();

            if(front->left && !visited[front->left]){
                c=1;
                q.push(front->left);
                visited[front->left]=1;

            }

            if(front->right && !visited[front->right]){
                c=1;
                q.push(front->right);
                visited[front->right]=1;

            }

            //checks the parent of the code xand gives the value for that parent
            

            if(nodetoparent[front] && !visited[nodetoparent[front]]){
                c=1;
                q.push(nodetoparent[front]);
                visited[nodetoparent[front]]=1;
            }

        }
        
        if(c==1){
            t++;
        }
        

    }

    return t;
}

void mintime(node* root,int target)
{
    map<node*,node*>nodetoparent;
    node* targetnode= createmapping(root,target,nodetoparent);
    int ans=burntree(targetnode,nodetoparent);
    cout<<"time to burn : "<<ans;
}

int main()
{

    //  step 1  mapping of the child node to parent node
    //  step 2  find the target node
    //  step 3  burn the tree in the minimum time

    node* root;
    root=buildtree(root);
    levelordertraversal(root);

    // 1 2 4 -1 -1 5 7 -1 -1 8 -1 -1 3 -1 6 -1 9 -1 10 -1 -1 

    mintime(root,7);



}