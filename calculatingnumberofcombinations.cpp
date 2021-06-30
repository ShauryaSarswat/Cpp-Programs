#include<iostream>
using namespace std;
int factorial(int a)
{
    int f=1;
    while(a!=0)
    {
        f=f*a;
        a--;
    }
    return f;
}
int combination(int n,int r)
{
    int nf,rf,nminusrf,combinations;
    nf=factorial(n);
    rf=factorial(r);
    int x=n-r;
    nminusrf=factorial(x);
    int denomenator=nminusrf*rf;
    combinations=nf/denomenator;
    return combinations;
}
int main()
{
    int n,r;
    int combinations;
    cout<<"Enter the number of total outcomes";
    cin>>n;
    cout<<'\n'<<"Enter the number of favourible outcomes";
    cin>>r;
    combinations=combination(n,r);
    cout<<"Total number of possible combinations are"<<'\t'<<combinations;
    return 0;

}