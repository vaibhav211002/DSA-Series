#include <iostream>
#include<map>
using namespace std;



int findmax(int a[],int n){

    int k= INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (k<a[i])
        {
            k=a[i];
        }
    }

    return k;
    
}


int countsort(int a[],int n){

    int max = findmax(a,n);

    int arr[max+1];

    for (int i = 0; i <max+1; i++)
    {
        arr[i]=0;
    }

    for (int i = 0; i < n; i++)
    {
        arr[a[i]]++;
    }

        int i=0;
    int j=0;
    cout<<endl;
    //     for (int i = 0; i <n; i++)
    // {
    //     cout<<a[i]<<",";
    // }

        for (int i = 0; i < max+1; i++)
    {
        if(arr[i]>0){
            cout<<"FREQUENCY OF NUMBER "<<i<<" is "<<arr[i]<<endl;
        }
    }

    while (i<max+1)
    {

        if(arr[i]>0){
            a[j++]=i;
            arr[i]--;
            
        }
        else{
            i++;
        }
    }
    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<",";
    }


    
    
    return 0;


    
    
}
int main()
{

    int a[11]={1,2,3,4,5,2,3,4,6,7,9};
    //countsort(a,11);

    map<int,int> m;

    for (int i = 0; i < 11; i++)
    {
        m[a[i]]++;
    }

    for (auto i:m)
    {
        cout<<i.first <<" occured "<<i.second<<" times"<<endl;
        
    }

        for (auto i:m)
    {
        cout<<i.first <<",";
        
    }

}