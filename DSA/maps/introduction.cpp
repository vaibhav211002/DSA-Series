#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main()
{

    //creation 
    unordered_map<string,int> m;

    //insertion -1 

    pair<string,int> p= make_pair("babber",3);
    m.insert(p);

    //insertion method -2
    pair<string,int> pair2("love",2);
    m.insert(pair2);


    // method -3 
    m["mera"]=1;

    // entry is updated
    m["mera"]=1;

    //dublicate entry is not allowed
    

    //searching
    cout<< m["mera"]<<endl;      //will create a new entry with initial value as 0 
    cout<< m.at("babber")<<endl;

    //size
    cout<<m.size()<<endl;
    

    //to check presence
    cout<<m.count("mera")<<endl;

    //erase
    m.erase("mera");
        cout<<m.size()<<endl;


    //traversal

    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    //using iterator

    unordered_map<string,int> :: iterator it=m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    



     


    return 0;
}