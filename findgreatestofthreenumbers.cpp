#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three numbers";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c){
            cout<<a<<" is the largest of the three";
        }
        else{
            cout<<c<<"  is the largest of the three";
        }
    }
    else if(a<b)
    {
        if(b>c)
        {
            cout<<b<<" is the largest of the three";

        }
        else{
            cout<<c<<" is largest of the three";
        }
    }
    return 0;
}