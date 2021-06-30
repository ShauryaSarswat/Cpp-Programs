#include<iostream>
using namespace std;
void printmaxsum(int arr[],int n)
{
    int i=0;
    int cursum = 0,maxsum=INT_MIN;
    looped:
    if(i<n)
    {
        cursum+=arr[i];
        if(cursum<0)
        {
            cursum = 0;

        }
        maxsum=max(maxsum,cursum);
        i++;
        goto looped;
        

    }

 cout<<maxsum<<" is the maximum sum of the subarray ";
}
int main()
{
    cout<<"Enter the number of elements in the array \n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    printmaxsum(arr,n);
}