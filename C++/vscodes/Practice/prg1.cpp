#include <bits/stdc++.h>
using namespace std;








class vegetable {
    int no_veg;

    public:

    veg()
    {
        cout<<"ENTER THE NUMBER OF VEGETABLE : ";
        cin>>no_veg;
    }

    int getveg()
    {
        return no_veg;
    }
};


class grocery{
    int no_gro;

    public:

    gro()
    {
        cout<<"ENTER THE NUMBER OF GROCERY : ";
        cin>>no_gro;
    }

    int getgro()
    {
        return no_gro;
    }
};


class foodapp:public vegetable , public grocery{
    int no_of_items;

    public:

    calculate()
    {
        gro();
        veg();
        no_of_items=getgro()+getveg();
        cout<<"VEGETABLE :      "<<getveg()<<endl;
        cout<<"GROCERY :        "<<getgro()<<endl;
        cout<<"TOTAL : "<<no_of_items<<endl;
    }
};

int main()
{
    foodapp item;
    item.calculate();
    return 0;
}