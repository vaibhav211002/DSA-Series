#include <bits/stdc++.h>
using namespace std;

class comp{
    private:
    int re;
    int img;

    public: 

    comp(int i,int r)
    {
        re=i;
        img=r;
    }

    void set(int a,int b)
    {
        re=a;
        img=b;
    }

    //operator overloading 

    // comp operator+(comp c1)
    // {
    //     comp temp(0,0);
    //     temp.re=re+c1.re;
    //     temp.img=img+c1.img;
    //     return temp;
    // }

    comp operator +(comp c2);

    void display()
    {
        cout<<re<<" + "<<img<<endl;
    }
};

//outside operator overloading 

comp comp::operator+(comp c2)
    {
        comp temp(0,0);
        temp.re=c2.re+re;
        temp.img=c2.re+img;
        return temp;
    }

int main()
{
    comp c(1,2);
    comp d(3,4);
    comp c3=c+d;
    c3.display();
    return 0;
}