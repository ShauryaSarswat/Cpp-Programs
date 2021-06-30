#include<iostream>
using namespace std;
int main()
{
    int decimal,binary;
    cout<<"Enter the decimal digit";
    cin>>decimal;
    binary=0;
    int count=1;
    while(decimal!=0)
    {
        binary=binary+((decimal%2)*count);
        decimal=decimal/2;
        count*=10;
    }
    cout<<binary;
    return 0;
}