#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows and columns respectively";
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"*"<<'\t';
        }
        cout<<'\n';
        cout<<'\n';
    }
    return 0;
}