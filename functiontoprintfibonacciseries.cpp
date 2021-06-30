#include<iostream>
using namespace std;
void printfibonacciupton(int a)
{
    int d1=0,d2=1;
    cout<<d1<<" "<<d2<<" ";
    while(a>1)
    {
        int digit = d1+d2;
        d1=d2;
        d2=digit;
        cout<<d2<<" ";
        a--;
    }

}
int main()
{
    int number;
    cout<<"Enter the number of digits you want fibonacci series upto";
    cin>>number;
    printfibonacciupton(number);
    return 0;
    
}