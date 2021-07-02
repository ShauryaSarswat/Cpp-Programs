#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number \n";
    cin>>a;
    if(a==0)
    {
        cout<<"Number is not an integral power factor of two ";
        return 0;
    }
    int n = a-1;
    int z = a&n;
    if(z==0)
    {
        cout<<"Number is an integral power factor of two";
    }
    else
    {
        cout<<"Number is not an integral power factor of two";
    }

}