#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string h;
    // cin>>h;
    // ofstream inputFile;
    // inputFile.open("Text.txt",ios::ate | ios::app);
    // if (inputFile.is_open()) 
    // {
    //     cout << "file opened" << endl;
    //     inputFile<<h+"\n";
    // }
    // inputFile.close();

    int c=0;

    string line;
    string fid;
    cin>>fid;
    ifstream inputFil;
    inputFil.open("Text.txt");
    while(getline(inputFil,line,'\n'))
    {
        if(line.find(fid)!=string::npos)
        {
            c++;
        }
    }
    
    inputFil.close();

    ofstream file;
    file.open("Text.txt",ios::app);
    if(c==0)
    {
        file<<fid+"\n";
    }
    cout<<"value"<<c<<endl;
    
}