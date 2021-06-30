#include<iostream>
using namespace std;
void arrayEnter(int arr[],int &start)
{
    cin>>arr[start];
    start++;
}
void arrayOneEnter(int arr[],int &start)
{
    arr[start]=-1;
    start++;
}
int minRepeating(int arr[],int idx[],int n)
{
    int minIndex = INT_MAX;
    int i=0;
    loop1:
    if(i<n)
    {
        if(idx[arr[i]]==-1)
        {
            idx[arr[i]]=i;
        }
        else
        {
            minIndex=min(minIndex,idx[arr[i]]);
        }
        i++;
        goto loop1;
    }
    return minIndex+1;
}

int main()
{
       int n;
   cout<<"Enter the number of elements present in the array \n";
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
   int idx[n+1];
   start=0;
   enterOne:
   arrayOneEnter(idx,start);
   if(start<n)
   {
       goto enterOne;
   }
   int minIndex;
   minIndex=minRepeating(arr,idx,n);
   cout<<minIndex<<" is the repeating element at the minimum index";
}