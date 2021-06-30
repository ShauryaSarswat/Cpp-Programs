#include<iostream>
using namespace std;
int kedane(int arr[],int n)
{
    int i=0,cursum=0,maxSum=INT_MIN;
    looped:
    if(i<n)
    {
        cursum+=arr[i];
        if(cursum<0)
        {
            cursum = 0;
        }
        maxSum=max(maxSum,cursum);
        i++;
        goto looped;

    }
    return maxSum;

}
int circularMaximumSubArraySum(int arr[],int n)
{
    int normale = kedane(arr,n);
    int cirsum = 0;
    int i=0;
    looped:
    if(i<n)
    {
        cirsum+=arr[i];
        arr[i]=-arr[i];
        i++;
        goto looped;
    }
    int minOut = kedane(arr,n);
    cirsum = cirsum + minOut;
    cirsum = max(cirsum,normale);
    return cirsum;
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array \n";
    cin>>n;
    cout<<"Enter the elements of the array \n";
    int arr[n];
    int i=0;
    enter:
    if(i<n)
    {
        cin>>arr[i];
        i++;
        goto enter;
        
    }
    int sum;
    sum = circularMaximumSubArraySum(arr,n);
    cout<<sum;
}