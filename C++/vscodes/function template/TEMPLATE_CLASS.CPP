#include <iostream>
using namespace std;


template<typename T>
class weight{

    private:
    T kg;

    public:
    void setdata(T x)
    {
        kg=x;
    }
    T  getdata()
    {
        return kg;
    }
};



int main()
{
    weight <int>obj;
    obj.setdata(5);
    cout<<"value of data  :::::   "<<obj.getdata()<<endl;
}