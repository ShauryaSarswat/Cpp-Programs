#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maximum=INT_MIN;
    cout<<"The maximum sum of the subarray is \n";
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum = 0;
            for(int k=i;k<=j;k++)
            {
              sum+=arr[k];
            }
            maximum=max(maximum,sum);
            
        }
    }
    cout<<maximum;
    return 0;
}