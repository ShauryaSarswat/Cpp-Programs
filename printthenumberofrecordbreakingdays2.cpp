#include<iostream>
using namespace std;
void arrayEnter(int arr[],int &start)
{
    cin>>arr[start];
    start++;
}
int numberOfRecordBreakingDays(int arr[],int n)
{

  int ans = 0;
  int mx = -1;
  int i=0;
  labelLoop:
  if(i<n-1)
  {
    if(mx<arr[i] && arr[i]<arr[i+1])
    {
        ans++;
    }
    mx = max(mx,arr[i]);
    i++;
    goto labelLoop;
  }
  return ans+1;
}

int main()
{
    int n;
    cout<<"Enter the number of elements in your array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
    int start=0;
    enter:
    arrayEnter(arr,start);
    if(start<n)
    {
        goto enter;
    }
    int numberOfDays;
    if(n==1)
    {
        numberOfDays = 1;
    }
    else
    {
        numberOfDays = numberOfRecordBreakingDays(arr,n);
    }
    cout<<numberOfDays<<" is the number of record breaking days ";
    return 0;
    
}