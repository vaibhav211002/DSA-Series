#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void shortestpath(char path[],vector<char>&spath,int n){
    int x=0,y=0;

    for (int i = 0; i <n; i++)
    {
        if(path[i]=='N'){
            y++;
        }
        if(path[i]=='S'){
            y--;
        }
        if(path[i]=='E'){
            x++;
        }
        if(path[i]=='W'){
            x--;
        }
    }

    while (x!=0)
    {
        if(x>0){
            spath.push_back('E');
            x--;
        }
        else{
            spath.push_back('W');
            x++;
        }

    }

    while (y!=0)
    {
        if(y>0){
            spath.push_back('N');
            y--;
        }
        else{
            spath.push_back('S');
            y++;
        }
    }
    
    
    
}




int main(){

    int n=6;

    char path[6];

    for (int i = 0; i < n; i++){
        cin>>path[i];
    }

    vector<char> spath;

    shortestpath(path,spath,n);

    for (auto i : spath)
    {
        cout<<i<<" ";
    }

    // S S S N E E E W

    
    
}