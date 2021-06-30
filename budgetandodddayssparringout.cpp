#include<iostream>
using namespace std;
int main()
{
    int savings;
    cout<<"enter the amount of savings";
    cin>>savings;
    int used;
    for(int i=1;i<32;i++)
    {
        if(savings>0){
        if(i%2==0)
        {
            continue;
        }
        else{
            cout<<"Day number \n"<<i;
            cout<<"Enter the amount of money used today \n";
            cin>>used;
            savings-=used;
            cout<<savings<<" left \n";
        }}
        else{
            break;
        }
    }
    return 0;
}