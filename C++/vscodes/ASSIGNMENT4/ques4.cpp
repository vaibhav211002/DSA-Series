#include <iostream>
using namespace std;

template <int i>
void fun()
{
i = 20;
cout << i;
}

int main()
{
fun<10>();
return 0;
}