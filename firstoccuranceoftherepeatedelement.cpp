#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int idx[n+2];
    int minIndex = INT_MAX;
    for(int i=0;i<n+1;i++)
    {
        idx[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]==-1)
        {
           idx[arr[i]]=i;
        }
        else
        {
            minIndex = min(minIndex,idx[arr[i]]);
        }
    }
    if(minIndex == INT_MAX)
    {
        cout<<"No element of the array is repeated ";
    }
    else
    cout<<minIndex+1<<" is the position you have asked for ";
    return 0;
}