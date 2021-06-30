#include<iostream>
using namespace std;
int main()
{
    int savings;
    cout<<"Enter the amount of savings ";
    cin>>savings;
    if(savings>5000)
    {
        cout<<"Go for nike";
    }
    else if(savings>2000)
    {
        cout<<"Go for addidas";
    }
    else{
        cout<<"Go for HRX";
    }
    return 0;
}