#include<iostream>
using namespace std;
int main()
{
    int key,value;
    int n;
    cout<<"Enter the number of elements you want in your array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the values of the different elements in your array \n";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element of the ";
        cin>>arr[i];
    }
    cout<<"Enter the value you want to find the position of int the array \n";
    cin>>value;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            key=i;
        }
    }
    cout<<"The element having the value you searched for is found at the position "<<key+1;
    return 0;
}