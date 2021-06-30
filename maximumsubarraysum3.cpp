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
    int cursum[n+1];
    cursum[0]=0;
     for(int i=0;i<n;i++)
 {
     cursum[i+1]=cursum[i]+arr[i];
 }
    int maxsum = INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=0;j<i;j++)
        {
           sum=cursum[i]-cursum[j]; 
           maxsum=max(maxsum,sum);
        }
        
    }
    cout<<maxsum<<" is the maximum sum of the subarrays possible ";
    return 0;
}