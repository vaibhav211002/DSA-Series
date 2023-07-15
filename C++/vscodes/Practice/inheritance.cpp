#include <bits/stdc++.h>
using namespace std;
int main()
{
  int sum=0;
  int a[]={2,4,6,8};
  for(int x:a)
  {
    sum=sum+a[x];
    cout<<x<<endl;
  }

  cout<<"sum is "<<sum;
}