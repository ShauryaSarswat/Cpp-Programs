#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements you want in your array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n-1;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}