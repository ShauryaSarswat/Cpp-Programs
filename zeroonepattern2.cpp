#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the number of rows";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1"<<'\t';
            }
            else
            {
                cout<<"0"<<'\t';
            }
        }
        cout<<'\n';
        cout<<'\n';
    }
    return 0;
}