#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string> course;
    string key;
    string value;

    for (int i = 0; i < 4; i++)
    {
        cout<<"input index :  ";
        cin>>key;
        cout<<endl;
        cout<<"input value : ";
        cin>>value;
        cout<<endl;
        course.insert({key,value});
    }

    for (auto i: course)
    {
        cout<<i.first<<"            "<<i.second<<endl;
        cout<<endl;
    }

    cout<<"cout :: "<<course.count("1");
    cout<<endl;



   auto it = course.find("2");
   for ( it ; it!=course.end(); it++)
   {
    cout<<it->first<<"  "<<it->second<<endl;
   }
   
    
    

}