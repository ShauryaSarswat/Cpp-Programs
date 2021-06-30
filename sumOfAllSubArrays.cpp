#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of elements in your array \n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
           sum+=arr[j];
           cout<<sum<<'\t';
        }
        
    }
    return 0;
}