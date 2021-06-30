#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of the array \n";
    cin>>n;
    cout<<"Enter the elements of the array \n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int value;
    cout<<"Enter the targetted sum \n";
    cin>>value;
    int flag = 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==value)
            {
                cout<<i<<" "<<j<<'\n';
                flag++;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
    {
        cout<<"The sum is not present as a pair in the given array \n";
    
    }
    return 0;
}