#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of a";
    cin>>a;
    int *p=new int();
    *p=a;
    cout<<*p;
    cout<<"is lcoated at "<<p;
    delete(p);
    p=NULL;
    cout<<"after deletion at "<<p;
}