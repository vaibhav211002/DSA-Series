#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    string h;
    string k;
    cout<<"enter age and name :: ";
    getline(cin,h);
    ofstream myfile("xyz.txt",ios::ate|ios::app);
    cout<<endl;
    myfile<<h;
    myfile.close();
    cout<<"file write operation performed"<<endl;



    cout<<endl;
    cout<<"reading from the file"<<endl;
    ifstream obj("xyz.txt");
    getline(xyz,k);
    cout<<"array conetent "<<k<<endl;
    cout<<"file read completed"<<endl;







}