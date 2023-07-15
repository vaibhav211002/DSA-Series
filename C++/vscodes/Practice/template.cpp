#include <bits/stdc++.h>
using namespace std;


void func(long int ar[], int b)
{
    int a=ar[0];
    int k=ar[0];
    int sum=0;
    for (int i = 1; i < b; i++)
    {
        if(ar[i]<ar[0]){
            a=ar[i];
        }
        else{
            k=ar[i];
        }

        sum=sum+ar[i];
        
    }
    cout<<"largest :: "<<b<<endl;
    cout<<"smallest :: "<<a<<endl;


    cout<<"AVERAGE :: "<<sum/b<<endl;
}







template <typename T>
void func(T ar[], T b)k
{
    int a=ar[0];
    int k=ar[0];
    int sum=0;
    for (int i = 1; i < b; i++)
    {
        if(ar[i]<ar[0]){
            a=ar[i];
        }
        else{
            k=ar[i];
        }

        sum=sum+ar[i];
        
    }
    cout<<"largest :: "<<k<<endl;
    cout<<"smallest :: "<<a<<endl;


    cout<<"AVERAGE :: "<<sum/b<<endl;
}

int main()
{
    int arr[5]={1,2,3,4,5};

    cout<<"template function ::::: "<<endl;
    func<int>(arr,5);

    cout<<"overloading function ::: "<<endl;
    func(arr,5);




}