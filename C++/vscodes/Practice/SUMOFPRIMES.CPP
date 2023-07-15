#include <bits/stdc++.h>
using namespace std;
class nam{
  public:
     int data;

     nam(int d)
     {
         data=d;
     }
     
     
      
          friend void result(nam);
          
          friend int check(int);

     


    
};


int check(int f)
     {
         int c=1;
         int i;
          for(i=2;i<f;i++)
          {
            if(f%i==0)
            {
              c++;
            }
          }
          if(c>1)
          {
              return 1;
          }
          else
          {
              return 0;
    
          }
     }
void result(nam a)
{      int i,j;
      int num;
      num=a.data;
      for(i=1;i<num/2;i++)
      {
        for(j=num;j>num/2;j--)
        {
          if(check(i)==0 && check(j)==0)
          {
            if(i+j==num)
            {
              cout<<i<<"+"<<j<<"="<<num<<endl;
            }
          }
        }
      }

}

int main()
{
  cout<<"enter no . : ";
  int u;
  cin>>u;
  nam a(u);
  result(a.data);
}