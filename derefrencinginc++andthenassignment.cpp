#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of a \n";
    cin>>a;
    cout<<"Now creating a pointer \n";
    int *p = &a;
    cout<<a;
    cout<<'\n';
    cout<<*p<<'\n';
    *p=20;
    cout<<a;
    return 0;
}