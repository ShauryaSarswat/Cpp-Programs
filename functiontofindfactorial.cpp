#include<iostream>
using namespace std;
int factorial(int a)
{
    int factorial=1;
    while(a!=0)
    {
        factorial*=a;
        a--;
    }
    return factorial;
}
int main()
{
    int number;
    cout<<"Enter any number to find the factorial of";
    cin>>number;
    int factorials;
    factorials=factorial(number);
    cout<<factorials;
}