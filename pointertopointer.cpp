#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of the element \n";
    cin>>a;
    int *p = &a;
    cout<<*p<<" is a variable \n";
    int **q = &p;
    cout<<**q<<" is a variable \n";
}