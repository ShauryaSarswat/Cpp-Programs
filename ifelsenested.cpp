#include<iostream>
using namespace std;
int main()
{
    int savings;
    cout<<"Enter the amount of savings";
    cin>>savings;
    if(savings>5000)
    {
        if(savings>10000)
        {
            cout<<"buy Air Jordans";
        }
        else{
            cout<<"Buy Nike Air Max";
        }
    }
    else if(savings>2000)
    {
        cout<<"Buy the pumas";
    }
    else{
        cout<<"Buy the red tapes";
    }
    return 0;
}