#include<iostream>
using namespace std;
int kedaneAgorithimSubarrayMaxSum(int arr[],int n)
{
    int maxSum=INT_MIN,cursum=0;
    for(int i=0;i<n;i++)
    {
        cursum += arr[i];
        if(cursum<0)
        {
            cursum = 0;
        }
        maxSum=max(maxSum,cursum);
    }
    return maxSum;
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array \n";
    cin>>n;
    cout<<"Enter the elements of the array \n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int wrapsum=INT_MIN,nonWrapsum=0;
    nonWrapsum = kedaneAgorithimSubarrayMaxSum(arr,n);
    int cursum = 0;
    for(int i=0;i<n;i++)
    {
        cursum+=arr[i];
        arr[i]=-arr[i];
    }
    int minOut = kedaneAgorithimSubarrayMaxSum(arr,n);
    wrapsum = cursum+minOut;
    int sum = 0;
    sum = max(wrapsum,nonWrapsum);
    cout<<sum<<"is the maximum sum of the subarray ";
    return 0;
    
}