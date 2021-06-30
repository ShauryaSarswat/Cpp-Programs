#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number";
    cin>>number;
    if((number%2==0)&&(number%3==0))
    {
         cout<<"The number is divisible by both 2 and 3";
    }
    else if((number%2==0)||(number%3!=0))
    { 
        cout<<"The number is divisible by 2 and not 3";
        
    }
    else if((number%2!=0)||(number%3==0))
    {
        cout<<"The number is divisible by 3 and not 2";
    }
    if((number%2!=0)&&(number%3!=0))
    {
        cout<<"Number is not divisible with either of the two";
    }
    return 0;
}