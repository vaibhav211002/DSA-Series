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

void verticaltraversal(node* root){
    map<int, map<int,vector<int>>> nodes;
    queue<pair<node*,pair<int,int>>> q;
    vector<int> ans;

    if(root==NULL){
        return ;
    }

    q.push(make_pair(root,make_pair(0,0)));

    while (!q.empty())
    {
        pair<node*,pair<int,int>> temp=q.front();
        q.pop();
        node* front=temp.first;
        int hd=temp.second.first;
        int lvl=temp.second.second;

        nodes[hd][lvl].push_back(front->data);

        if(front->left){
            q.push(make_pair(front->left,make_pair(hd-1,lvl+1)));
        }

        if(front->right){
            q.push(make_pair(front->right,make_pair(hd+1,lvl+1)));
        }
    }

    for (auto i :nodes)
    {
        //i -> <int,map>
        //map<int,vector<int>>
        for(auto j:i.second){
            for (auto k:j.second)
            {
                /* code */
                ans.push_back(k);
            }
            
        }
    }


    for (auto i :ans)
    {
        cout<<i<<" ";
    }
    
    //1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1 
    


    






}


int main(){
    node* root=NULL;
    root=buildtree(root);
    verticaltraversal(root);
}