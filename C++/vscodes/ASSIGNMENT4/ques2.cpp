#include <iostream>
using namespace std;
class Car {
int a;
public:
Car() {}
Car(int x) { cout << "Car called" << endl; }
friend void showA(Car&);
};
void showA(Car& x) { cout << "Car::a=" << x.a <<
endl; }
class Petrol : virtual public Car {
public:
Petrol(int x) :Car(x) {
cout << "Petrol called" << endl;
}
};
class CNG : virtual public Car {
public:
CNG(int x) :Car(x) {
cout << x << "CNG called" << endl;
}
};
class Hybrid : public Petrol, public CNG {
public:
Hybrid(int x) :CNG(x), Petrol(x) {
cout << " Hybrid called" << endl;
}
};
int main()
{Car a;
showA(a);
Hybrid c1(150);
return 0;
}