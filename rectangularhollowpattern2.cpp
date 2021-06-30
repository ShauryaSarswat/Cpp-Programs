#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the rows and the columns respectively";
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        if((i==1)||(i==r))
        {
            for(int j=0;j<c;j++)
            {
                cout<<"*"<<'\t';
            }
            cout<<'\n'<<'\n';
        }
        else{
            for(int j=1;j<=c;j++)
            {
                if((j==1)||(j==c))
                {
                    cout<<"*"<<'\t';
                }
                else{
                    cout<<'\t';
                }
            }
            cout<<'\n'<<'\n';
        }
    }
    return 0;
}