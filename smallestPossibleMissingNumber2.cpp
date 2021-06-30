#include<iostream>
using namespace std;
void arrayEnter(int arr[],int &start)
{
    cin>>arr[start];
    start++;
}
void arrayAssign(bool arr2[],int &start)
{
    arr2[start]=false;
    start++;
}
void theLeftElement(int arr[],bool arr2[],int n,int N)
{
     int i=0;
 loopi:
 if(i<n)
 {
     if(arr[i]>=0)
     {
         arr2[arr[i]]=true;

     }
     i++;goto loopi;
 }
int j=1;
int ans=-1;
loopOut:
if(j<n)
{
    if(arr2[j]==false)
    {
        ans=j;
        goto breakLabel;
    }
    j++;
    goto loopOut;
}
breakLabel:
cout<<ans<<" is the minimum position that you were actually looking for \n";

}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array \n";
    cin>>n;
    cout<<"Enter the elements of the arrays \n";
    int start=0;
    int arr[n];
    enter:
    arrayEnter(arr,start);
    if(start<n)
    {
        goto enter;
    }
    int N = 1e6 + 2;
    start=0;
    bool arr2[N];
    assignFalse:
    arrayAssign(arr2,start);
    if(start<N)
    {
        goto assignFalse;
    }
    theLeftElement(arr,arr2,n,N);
    
    return 0;
}