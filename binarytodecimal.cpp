#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int binary,decimal=0;
    cout<<"Enter the binary digit";
    cin>>binary;
    int count=0;
    while(binary!=0)
    {
        int digit=binary%10;
        decimal=decimal+(digit*pow(2,count));
        count++;
        binary=binary/10;
    }
    cout<<decimal;
    return 0;
}