#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number \n";
    cin>>n;
    int counter = 0;
    while(n>0)
    {
        counter++;
        n = n&n-1;
        
    }
    cout<<counter;
}