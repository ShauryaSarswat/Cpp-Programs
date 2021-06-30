#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number upto which you want to find the sum";
    cin>>n;
    int sum=0;
    while(n>0)
    {
        sum+=n;
        n--;
    }
    cout<<sum;
    return 0;
}