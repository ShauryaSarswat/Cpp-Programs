#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows and columns";
    cin>>r>>c;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<'\t';
        }
        cout<<'\n';
        cout<<'\n';
    }
}