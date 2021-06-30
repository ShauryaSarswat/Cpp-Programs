#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number to check wether it is prime or not";
    cin>>number;
    bool flag=0;
    for(int i=2;i<(number/2)+1;i++)
    {
        if(number%i==0)
        {
            cout<<"The number is not prime";
            flag=1;
            break;
        }
    
    }
    if(flag==0)
    {
        cout<<"The number is a prime number";
    }
    return 0;
}