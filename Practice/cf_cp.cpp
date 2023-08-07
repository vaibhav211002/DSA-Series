#include <iostream>
using namespace std;


int count(int a[],int n){
    int min=a[n-1];
    int max=a[0];
    int i_max;
    int i_min;

    for (int i = 1; i < n; i++)
    {
        if(max<a[i]){
            max=a[i];
            i_max=i;

        }
    }
    for (int i = n-2; i>=0; i--)
    {
        if(min>a[i]){
            min=a[i];
            i_min=i;
        }
    }

    cout<<"max i_max "<<max<<" "<<i_max<<endl;
    cout<<"min i_min "<<min<<" "<<i_min<<endl;

    int swaps=0;

    if(i_min<i_max){
        swaps--;
    }

    swaps= i_max+(n-i_min)-1;;
    cout<<swaps<<endl;


    


}

int main(){

    int a[4]={33,11,44,22};
    count(a,4);

}