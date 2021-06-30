#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements you want in your array \t";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array at the respective positions : \n";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements of the array at position : "<<i+1<<'\t';
        cin>>arr[i];
    }
    cout<<"Do you want your array elements to be traersed ? \n";
    string ask;
    cin>>ask;
    if(ask=="yes")
    {
        for(int i=0;i<n;i++)
        {
            cout<<"The elements of the array at position \t"<<i+1<<'\t'<<arr[i]<<'\n';
        }
    }
    else
    {
        exit;
    }
    return 0;

}