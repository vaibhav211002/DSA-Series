#include <bits/stdc++.h>
using namespace std;


//parent class 
class Publication{
    public :
    string title;
    float price;

    getdata()
    {
        title="TAPE";
        float p;
        cout<<"ENTER THE PRICE : ";
        cin>>p;
        price=p;
    }

};

//child class -1 
class Tape:public Publication{
    public:
    float play_time;


    getdata()
    {
        cout<<"ENTER THE NO. OF MINUTES PLAYED : ";
        float a;
        cin>>a;
        play_time=a;
    }

    putdata()
    {
        cout<<"TITLE : "<<title<<endl;
        cout<<"PRICE : "<<price<<endl;
        cout<<"PLAY TIME : "<<play_time<<endl;
    }


};

class Book:public Publication{
    public:
    int page_count;

    getdata()
    {
        float p;
        title="BOOK";
        cout<<"ENTER THE PRICE : ";
        cin>>p;
        price=p;
        float a;
        cout<<"ENTER THE NO. OF PAGES : ";
        cin>>a;
        page_count=a;
    }

    putdata()
    {
        cout<<"TITLE : "<<title<<endl;
        cout<<"PRICE : "<<price<<endl;
        cout<<"PAGE COUNT : "<<page_count<<endl;
    }
};



int main()
{
    Book b1;
    Tape t1;
    t1.getdata();
    b1.getdata();
    t1.putdata();
    b1.putdata();
    return  0;


}