#include<iostream>
using namespace std;
int main()
{
    cout<<"The days you can go out in are numbered as";
    cout<<'\n';
    for(int date=1;date<32;date++)
    {
        if(date%2==0)
        {
            continue;
        }
        else{
            cout<<date<<'\n';
        }
    }
    return 0;
}