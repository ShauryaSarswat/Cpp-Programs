#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows and columns respectiveley";
    cin>>r>>c;
    for(int i=0;i<=r;i++)
    {
        for(int j=c-i;j>0;j--)
        {
            cout<<"*"<<'\t';
        }
        cout<<'\n';
        cout<<'\n';
    }
    return 0;
}