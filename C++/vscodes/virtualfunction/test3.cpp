#include<iostream>
using namespace std;
class Base
{
public:
    virtual void show() = 0;
};
  
class Derived : public Base { };
  
int main()
{
  Derived d;
  return 0;
}


//the derived class becomes the abstract class as the virtual function is not defined
