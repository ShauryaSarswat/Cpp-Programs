#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows and columns";
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
        {
            cout<<'\t';
        }
        for(int k=0;k<i;k++)
        {
            cout<<"*"<<'\t';
        }
        cout<<'\n';
        cout<<'\n';
    }
    return 0;
}