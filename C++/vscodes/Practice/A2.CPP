#include<iostream>
#include<cmath>
using namespace std;
class Sphere;
class Cone
{
double rad, height;
public:
Cone(){}
Cone(double r, double h) 
{
rad = r;
height = h;
}
friend double sphereToCone(Sphere S, Cone C);
};
class Sphere
{
double radius;
public:
Sphere(){} 
Sphere(double r)
{
radius = r;
}
friend double sphereToCone(Sphere S, Cone C);
};






double sphereToCone(Sphere S, Cone C)
{
double sphereVolume, coneVolume;
sphereVolume = (4.0/3.0)*3.14*pow(S.radius,3); // Float conversion of 4.0/3.0 is must.
coneVolume = (1.0/3.0)*3.14*pow(C.rad,2)*C.height; // Float conversion of 1.0/3.0 is
cout<<"Sphere Vol: "<<sphereVolume<<endl;
cout<<"Cone Vol: "<<coneVolume<<endl;
return (sphereVolume/coneVolume);
}




int main(void)
{
Sphere S(6); 
Cone C(2,3);
cout<<"No.of Cones created = "<<sphereToCone(S,C);
return 0;

}