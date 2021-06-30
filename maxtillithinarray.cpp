#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the elements you want your array to have \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int no,mx;
    mx=arr[0];
    cout<<mx<<'\t';
    for(int i=1;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<'\t';
    }
}