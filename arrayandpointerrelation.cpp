#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    cout<<"Now taking the adress of the first array element in the array \n";
    cout<<*arr;
    cout<<*(arr+1);
    int *p=arr;
    for(int i=0;i<9;i++)
    {
        cout<<*(p+i);
    }
    
}