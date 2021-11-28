#include<iostream>
using namespace std;
int main()
{
  int x=2;
   int *a1=&x;
   int *a2=&a1;
   cout<<**a2;

}
