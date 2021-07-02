#include<iostream>
using namespace std;
bool isPower(int n)
{
    if(n==0){return false;}
    else
    return (n && !(n&n-1));
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<isPower(n);
    return 0;
}