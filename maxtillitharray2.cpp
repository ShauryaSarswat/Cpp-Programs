#include<iostream>
using namespace std;
void arrayEnter(int arr[],int &start)
{
    cin>>arr[start];
    start++;
}
void maxtillitharray(int arr[],int n)
{
    int i=0;
    int mx=INT_MIN;
    label:
    if(i<n){
    
    mx = max(mx,arr[i]);
    cout<<mx<<'\t';
    i++;
    goto label;
    }
   
}
int main()
{
    int n;
    cout<<"Enter the length of the array \n";
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
    maxtillitharray(arr,n);
    return 0;
}