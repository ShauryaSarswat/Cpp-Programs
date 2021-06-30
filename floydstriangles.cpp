#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the number of rows";
    cin>>r;
    int sum=0;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        { sum++;
            cout<<sum<<'\t';
        }
        cout<<'\n';
        cout<<'\n';
    }
}