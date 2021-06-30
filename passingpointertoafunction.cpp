#include<iostream>
using namespace std;
void sum(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a;
    cout<<"Enter the value of the variable";
    cin>>a;
    int b;
    cout<<"Enter the value of b";
    cin>>b;
    int *ptr = &a;
    int *ptrr = &b;
    sum(&a,&b);
    cout<<a;
    cout<<'\n'<<b;
    return 0;
}