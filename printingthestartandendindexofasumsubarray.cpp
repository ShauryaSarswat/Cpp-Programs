#include<iostream>
using namespace std;
int main()
{
     int n;
 cout<<"Enter the number of elements in the array";
 cin>>n;
 int arr[n];
 cout<<"Enter the elements of the arrays \n";
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 int value;
 cout<<"Enter the subarray sum value that you need to compute upto \n";
 cin>>value;
 int i=0,j=0,st=-1,en=-1,sum=0;
 while(j<n && sum+arr[j]<=sum)
 {
     sum+=arr[j];
     j++;

 }
 if(sum==value)
 {
     cout<<i+1<<" "<<j+1;
     return 0;
 }
 while(j<n)
 {
    sum+=arr[j];
    while(sum>value)
    {
        sum-=arr[i];
        i++;
    }
    if(sum==value)
    {
        st=i+1;
        en=j+1;
        break;
    }
    j++;
 }
 cout<<st<<" "<<en;
 return 0;
}
