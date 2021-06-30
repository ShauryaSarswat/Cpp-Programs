#include<iostream>
using namespace std;
int main()
{
    int c;
    cout<<"Enter the number of columns";
    cin>>c;
    if(c%2==0)
    {
for(int i=1;i<c/2-1;i++)
{
    for(int j=1;j<=c;j++)
    {
        if(((i+j)%4==0)||((i==2)&&(j%4==0)))
        {
            cout<<"*"<<'\t';
        }
        else{
            cout<<'\t';
        }
    }
    cout<<'\n';
    cout<<'\n';
}
    }
    
    
    else{
        for(int i=1;i<=c/2-1;i++)
{
    for(int j=1;j<=c;j++)
    {
        if(((i+j)%4==0)||((i==2)&&(j%4==0)))
        {
            cout<<"*"<<'\t';
        }
        else{
            cout<<'\t';
        }
    }
    cout<<'\n';
    cout<<'\n';
}
    }
    
    
    
}