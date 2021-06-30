#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array \n";
    cin>>n;
    int arr[n];
    int mx=-1;
    int counter=0;
    cout<<"Enter the elements of the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    if(n==1)
    {
        cout<<"1 is the number of record breaking days ";
    }
    
    else{

    for(int i=0;i<n-1;i++)
    {
        if(mx<arr[i] && arr[i]>arr[i+1])
        {
            counter++;
        }
        mx = max(mx,arr[i]);

    }
    cout<<counter<<" is the number of record breaking days ";
    }
}