#include <bits/stdc++.h>
using namespace std;

//class making

class trienode {
    public:
       char data;
       trienode* children[26];
       bool isterminal;


       trienode(char ch){
        data=ch;
        for (int i = 0; i < 26; i++)
        {
            children[i]=NULL;
        }
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

// REMOVE WORD LOGIC + SPACE OPTIMISATION 


};




int main()
{
    trie  *t=new trie();
    cout<<"worked well bitch"<<endl;
    t->insertword("ABCD");
    t->insertword("TIME");
    t->insertword("ROHIT");

    cout<<"worked well bitch"<<endl;
    cout<<"find or not :"<<t->searchword("ABCD")<<endl;
    cout<<"find or not :"<<t->searchword("TIME")<<endl;
    cout<<"find or not :"<<t->searchword("HIT")<<endl;


    
}
