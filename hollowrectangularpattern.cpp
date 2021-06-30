#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows and columns respectively";
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        if(i==1)
        { 
            for(int j=0;j<c;j++)
            {
                cout<<"*"<<'\t';
            }
          cout<<'\n';
          cout<<'\n';
        }
        else if(i==r)
        {
            for(int j=0;j<c;j++){
                cout<<"*"<<'\t';
            }
            cout<<'\n';
            cout<<'\n';
        }
        else
        {
            for(int j=1;j<=c;j++)
            {
                if(j==1)
                {
                    cout<<"*"<<'\t';
                }
                else if(j==c)
                {
                    cout<<"*"<<'\t';
                }
                else{
                    cout<<"\t";
                }
            }
            cout<<'\n';
            cout<<'\n';
        }
    }
    return 0;
}