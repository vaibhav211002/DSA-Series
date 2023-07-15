#include<iostream>
using namespace std;
class base {
int arr[10];
int f;
};

class b1: private base {int c; };

class b2: private base {int d; };

class derived: public b1, public b2 {};



int main(void)
{
    derived d;
    cout << sizeof(d);
    return 0;
}