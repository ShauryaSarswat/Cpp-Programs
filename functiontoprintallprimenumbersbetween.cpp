#include<iostream>
using namespace std;
void primenumbersbetween(int a,int b)
{
    
    for(int i=a;i<b;i++)
    {
        int flag=0;
        for(int k=2;k<(i/2)+1;k++)
        {
            if(i%k==0)
            {
                flag=1;
                break;
            }
            
        }
        if(flag==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<'\n';
}
int main()
{
    int upperBound,lowerBound;
    cout<<"Enter the upper and the lower bounds to print all the prime numbers between them \n";
    cin>>upperBound>>lowerBound;
    primenumbersbetween(upperBound,lowerBound);
    return  0;
}