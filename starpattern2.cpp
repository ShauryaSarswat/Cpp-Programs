#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the number of rows";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
        {
            cout<<'\t';
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*"<<'\t';
        }
        cout<<'\n';
        cout<<'\n';
    }
    for(int i=r;i>=1;i--)
{
    for(int j=1;j<=r-i;j++)
    {
        cout<<'\t';
    }
    for(int k=1;k<=2*i-1;k++)
    {
        cout<<"*"<<'\t';
    }
    cout<<'\n';
    cout<<'\n';
}
return 0;
}