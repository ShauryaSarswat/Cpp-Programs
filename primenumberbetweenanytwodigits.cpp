#include<iostream>
using namespace std;
int main()
{
    int upperbound,lowerbound;
    cout<<"Enter the lower bound and the upper bound number";
    cin>>lowerbound>>upperbound;
    cout<<'\n';
    for(int i=lowerbound;i<=upperbound;i++)
    { int flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            cout<<i<<" is a prime number \n";
        }
    }
}