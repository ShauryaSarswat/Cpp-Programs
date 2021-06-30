#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number to factorial of";
    cin>>number;
    int factorial=1;
    while(number!=0)
    {
        factorial*=number;
        number--;

    }
    cout<<factorial;
    return 0;
}