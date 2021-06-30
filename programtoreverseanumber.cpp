#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number to be reversed";
    cin>>number;
    int reverse=0;
    while(number!=0)
    {
        int digit=number%10;
        reverse=reverse*10+digit;
        number/=10;
    }
    cout<<reverse;
    return 0;
}