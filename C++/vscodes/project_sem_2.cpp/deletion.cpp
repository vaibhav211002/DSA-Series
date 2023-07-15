#include <bits/stdc++.h>
using namespace std;
int main()
{

    string line;


    ifstream j;
    j.open("bmw.txt");
    string content((istreambuf_iterator<char>(j)),istreambuf_iterator<char>());
    ifstream k;
    k.open("UP67 TR5432.txt");
    string sub((istreambuf_iterator<char>(k)),istreambuf_iterator<char>());
    k.close();

    int start = content.find(sub);
    if (start!=string::npos)
    {
        content.erase(start,sub.length());
    }
    j.close();

    


    ofstream file;
    file.open("bmw.txt");
    file<<content<<endl;
    file.close();
    


}