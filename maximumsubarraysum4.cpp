#include<iostream>
using namespace std;
void printingmaxsum(int arr[],int n)
{
    int i=0;
    int cursum[n+1];
    cursum[0]=0;
    loop:
    if(i<n)
    {
        cursum[i+1]=cursum[i]+arr[i];
        i++;
        goto loop;
    }

    int j=1,maxsum=INT_MIN;
    loop1:
    if(j<=n)
    { 
        int sum=0,k=0;
        loop2:
        if(k<=j)
        {
            sum=cursum[j]-cursum[k];
            maxsum=max(maxsum,sum);
            k++;
            goto loop2;
        }
        j++;
        goto loop1;
    }
    cout<<maxsum<<" is the maximum subarray sum ";
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
    int start=0;
    enter:
    if(start<n)
    {
        cin>>arr[start];
        start++;
        goto enter;
    }
    printingmaxsum(arr,n);
}