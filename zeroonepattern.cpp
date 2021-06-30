#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the number of rows";
    cin>>r;
    int count=1;
    for(int i=1;i<=r;i++)
    {
        if(i%2==0)
        {
            count=1;
        }
        else
        {
            count=0;
        }
        for(int j=1;j<=i;j++)
        { if(count%2==0)
          {
              cout<<"1";
          }
          else
          {
              cout<<"0";
          }
            count++;
        }
        cout<<'\n';
        cout<<'\n';

    }
}