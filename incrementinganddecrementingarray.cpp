#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of the variable \n";
    cin>>a;
    int *p = &a;
    cout<<"The value before is "<<p<<'\n';
    p++;
    int *x = p;
    cout<<"The value afterwards is "<<p<<'\n';
    cout<<x-p;
    return 0;
}