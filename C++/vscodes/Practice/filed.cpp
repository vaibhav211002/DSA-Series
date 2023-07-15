#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    
    ofstream f;
    f.open("bas.txt");
    f<<"hi my name is vaibhav bhatt"+'\n';
    f<<"hi my name is saman siddique"+'\n';
    f<<"hi my name is vipul pandey"+'\n';
    f.close();

    string line;

    ifstream g;
    g.open("bas.txt");
    while(g,line,'\n')
    {
        cout<<line<<endl;

    }
}