#include <bits/stdc++.h>
using namespace std;






// template <typename T>
// T add(T x,T y)
// {
//     return (x+y); 
// }


// template <typename T,typename A>
// A at(T x,A y)
// {
//     return (x+y); 
// }



template <typename T>
class weight{

    private:
     T kg;


    public:

    void setdata(T x)
    {
        kg=x;
    }

    T getdata()
    {
        return kg;
    }


};


template <typename T ,int size >
class ar{

    public:

    T arr[size];

    void insert()
    {
        int j=1;
        for (int i = 0; i < size; i++)
        {
            arr[i]=j;
            j++;

        }

        cout<<"INTEGER ARRAY"<<endl;
        
    }
    void insert_float()
    {
        float j=1.5;
        for (int i = 0; i < size; i++)
        {
            arr[i]=j;
            j++;

        }
        cout<<"float ARRAY"<<endl;
        
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" "<<endl;
        }
        
    }
};

int main()
{
    // cout<<add<int>(3,4);
    // cout<<endl;

    // cout<<add<float>(4.5,5.9)<<endl;

    // cout<<at<float>(2,4.1);



    weight <int>d;

    d.setdata(67);

    cout<<"value "<<d.getdata()<<endl;

    weight <float>A;

    A.setdata(67.8);

    cout<<"value "<<A.getdata()<<endl;


    ar <int,10> t1;
    t1.insert();
    t1.display();

    ar <float,10> t2;
    t2.insert_float();
    t2.display();
    return 0;

}