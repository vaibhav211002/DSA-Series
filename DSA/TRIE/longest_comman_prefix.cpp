#include <bits/stdc++.h>
using namespace std;

//class making

class trienode {
    public:
       char data;
       trienode* children[26];
       int childcount;
       bool isterminal;


       trienode(char ch){
        data=ch;
        for (int i = 0; i < 26; i++)
        {
            children[i]=NULL;
        }
        childcount=0;
        isterminal=false;
        
       }
};

//root node
class trie{
    public:
    trienode* root;

    trie(){
        root =new trienode('\0');
    }
    

    //INSERT AT TRIE
    void inserttrie(trienode* root,string word){

        //base case 
        if(word.length()==0){
            root->isterminal=true;
            return ; 
        }
        // cout<<"worked well bitch"<<endl;

        int index=word[0]-'A';

        trienode* child;

        //present 
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else
        {
            //absent
            child =new trienode(word[0]);
            root->childcount++;
            root->children[index]=child;
        }

        //recursion 
        inserttrie(child,word.substr(1));
        



    }
    void  insertword(string word){
        inserttrie(root,word);
    }



    //SEARCH IN THE TRIE
    bool search(trienode* root , string word){

                //base case 
        if(word.length()==0){
            return root->isterminal; 
        }
        // cout<<"worked well bitch"<<endl;

        int index=word[0]-'A';

        trienode* child;

        //present 
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else
        {
            //absent
            return false;
        }

        //recursion 
        return search(child,word.substr(1));
        

    }

    bool searchword(string word){
        return search(root,word);
    }



};



//search for the longest coman prefix

string longe_comman_prefix(trienode*root,string word){

    //base case 
    // string first=word[0];
    string ans="";

    for (int i = 0; i <word.length() ; i++){

        char ch=word[i];

        if(root->childcount==1){
            ans=ans+ch;
            int index=ch-'A';
            root=root->children[index];
        }
        else{
            break;
        }

        if(root->isterminal){
            break;
        }
    }
    return ans;
    

}



int main()
{
    trie  *t=new trie();
    cout<<"worked well bitch"<<endl;
    t->insertword("TIMA");
    t->insertword("TIMAE");
    t->insertword("TIMAR");
    string a="TIMAUY";
    cout<<"prefix :"<<longe_comman_prefix(t->root,a);






    
}
