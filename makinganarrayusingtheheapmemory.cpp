#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of the variable \n";
    cin>>a;
    int *p =new int[4];
    cout<<"Now assigning p the heap memory";
    for(int i=0;i<4;i++)
    {
        *(p+i)=a+10*i;
    }
    cout<<'\n';
    for(int i=0;i<4;i++)
    {
        cout<<*(p+i)<<'\n';
    }
    delete[] p;
    p=NULL;
    return 0;
}