#include <iostream>
#include <vector>
using namespace std;
#include <unordered_map>

void permute(string str,vector<string>&ans,int i,unordered_map<string,int> &m){
    //base case
    if(i>=str.size()){
        //ans.push_back(str);
        m[str]++;
        
        return ;
    }

    for (int j = i; j <str.size(); j++)
    {
        swap(str[i],str[j]);
        permute(str,ans,i+1,m);
        swap(str[i],str[j]);

    }


    
    


}

vector<vector<int>> solve(string str){
    vector<string> ans;
    unordered_map<string,int> m;

    int index=0;
    permute(str,ans,index,m);

    for (auto i : m)
    {
  
            ans.push_back(i.first);
        
    }


            for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout<<endl;
    }




}

int main(){
    string s="ABBD";
    
    solve(s);
}

