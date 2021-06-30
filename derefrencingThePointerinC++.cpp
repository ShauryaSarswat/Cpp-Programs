#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of a";
    cin>>a;
    cout<<"\n Now the pointer for a is created \n";
    int *p = &a;
    cout<<p<<" "<<&p<<" "<<&a<<" "<<*p;
}