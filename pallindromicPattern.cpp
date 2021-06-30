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
        
        
            for(int l=i;l>=1;l--)
            {
                cout<<l;
                cout<<'\t';
            }
            for(int m=2;m<=i;m++)
            {
                cout<<m<<'\t';
            
            }
        
        cout<<'\n';
        cout<<'\n';
    }
}