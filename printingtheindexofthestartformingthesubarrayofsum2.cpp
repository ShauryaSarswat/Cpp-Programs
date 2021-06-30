#include<iostream>
using namespace std;
void arrayEnter(int arr[],int &start)
{
    cin>>arr[start];
    start++;
}
void indexes(int arr[],int n,int sum)
{
    int cursum=0;
    int i=0,j=0,st=-1,en=-1;
    looping:
    if(j<n && cursum+arr[j]<sum)
    {
        cursum+=arr[j];
        j++;
        goto looping;
    }
    if(cursum==sum)
    {
        cout<<i+1<<" "<<j+1;
    }
    loop2:
    if(j<n)
    {
        cursum+=arr[j];
       inLoop:
       if(cursum>sum)
       {
           cursum-=arr[i];
           i++;
           goto inLoop;
       }
       if(cursum==sum)
       {
           cout<<i+1<<" "<<j+1;
           return;
       }
       j++;
       goto loop2;
    }

}
int main()
{
        int n;
        cout<<"Enter the number of elements in the array";
        cin>>n;
        int arr[n];
        cout<<"Enter the elements of the arrays \n";
            int start=0;
        enter:
        arrayEnter(arr,start);
        if(start<n)
        {
            goto enter;
        }
        cout<<"Enter the sum of the subarray that you want \n";
        int sum;
        cin>>sum;
        indexes(arr,n,sum);
        return 0;
}