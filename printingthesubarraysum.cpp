#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        { int sum=0;
            for(int k=i;k<=j;k++)
            {
               sum+=arr[k];
            }
            cout<<sum<<'\n';
        }
    }
}