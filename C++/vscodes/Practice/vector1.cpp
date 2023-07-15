#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    int i;

    cout<<"vector size :: "<<vec.size()<<endl;

    //push 5 values into vector 

    for (int i = 0; i <5; i++)
    {
        vec.push_back(i);
    }

    cout<<"vector size :: "<<vec.size()<<endl;
    

    //display the vector 

    for (int i = 0; i < vec.size(); i++)
    {
        cout<<" value :: "<<i<<"::"<<vec[i]<<endl;
    }
    

    //use iterator 

    vector<int>::iterator v=vec.begin();
    while( v!=vec.end()){
        cout<<"value of vector = "<<*v<<endl;
        v++;
    }
    cout<<"using the auto keyword "<<endl;


    for (auto i = vec.begin(); i!=vec.end(); i++)
    {
        cout<<" value ::  "<<*i<<endl;
    }
    



    vector<int> v1{1,2,3,4,5};
    for (int i = 0; i <v1.size(); i++)
    {
        cout<<v1.at(i)<<" ";
    }


    cout<<endl;
    cout<<"using value :::::: "<<endl;
    for(int value:v1){             //using value of the vector and can be used in all the stl containers 

        cout<<value<<" ";
    }

    auto a=1.0;   //determines the data of a 
    cout<<"using auto in value :: "<<endl;
    
    for(auto &value:v1){
        cout<<" value "<<value<<" ";

    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    
 


    
}