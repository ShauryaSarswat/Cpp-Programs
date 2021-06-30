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
void printpascalstriangle(int r)
{
  for(int i=1;i<=r;i++)
  {
      for(int j=1;j<=i;j++)
      {
          int combinations = combination(i-1,j-1);
          cout<<combinations<<'\t';
      }
      cout<<'\n';
      cout<<'\n';
  }
}
int main()
{
    int r;
    cout<<"Enter the number of rows you need of pascal's triangle ";
    cin>>r;
    printpascalstriangle(r);
    return 0;
}