#include<iostream>
using namespace std;
  
class Person
{
    int id;
    char name[100];
    int marks[3]
    int percentage;

    virtual void setp()=0;
    virtual void disp()=0;
    
    public:
        void set_p();
        void display_p();
};
  
void Person::setp()
{
    cout<<"Enter the Id:";
    cin>>id;
    fflush(stdin);
    cout<<"Enter the Name:";
    cin.get(name,100);
}
  
void Person::display_p()
{
    cout<<endl<<id<<"\t"<<name;
}
  
class Student: private Person
{
    char course[50];
    int fee;
      
    public:
        void set_s();
        void display_s();
};
  
void Student::set_s()
{
    set_p();
    cout<<"Enter the Course Name:";
    fflush(stdin);
    cin.getline(course,50);
    cout<<"Enter the Course Fee:";
    cin>>fee;
}
  
void Student::display_s()
{
    display_p();
    cout<<"\t"<<course<<"\t"<<fee;
}
  
main()
{
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}