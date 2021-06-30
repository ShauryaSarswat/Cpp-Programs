#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int number,armstrong;
    cout<<"Enter the number to check wether armstrong or not";
    cin>>number;
    int temp;
    armstrong=0;
    temp=number;
    while(number!=0)
    {
        int digit=number%10;
        armstrong=armstrong+pow(digit,3);
        number=number/10;
    }
    if(armstrong==temp)
    {
        cout<<"The given number is armstrong";
    }
    else
    {
        cout<<"Given number is not armstrong";
    }
    return 0;
}