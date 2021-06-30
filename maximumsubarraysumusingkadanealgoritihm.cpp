#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of the array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cursum=0;
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cursum+=arr[i];
        if(cursum<0)
        {
            cursum=0;
        }
        maxsum=max(maxsum,cursum);
    }
    cout<<maxsum<<" is the laargest sum of any subarray \n";
    return 0;
}