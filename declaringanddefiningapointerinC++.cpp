#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p = &a;
    cout<<a<<" has an address of "<<p;
    return 0;
}