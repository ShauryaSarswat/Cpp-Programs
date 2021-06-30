#include<iostream>
using namespace std;
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
    const int N = 1e6 + 2;
    bool arr2[N];
    for(int i=0;i<N;i++)
    {
        arr2[i]==false;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            arr2[arr[i]]=true;
        }
    }
    int ans = -1;
    for(int i=1;i<N;i++)
    {
        if(arr2[i]==false)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<" is the element position ";
}