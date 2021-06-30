#include<iostream>
using namespace std;
void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(j>0 && arr[j]>current)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void pairsum(int arr[],int n,int value)
{
    
    int start = 0;
    int upper = n-1;
    int cursum = 0;
    while(start!=upper)
    {
        cursum = arr[start]+arr[upper];
        if(cursum == value)
        {
            cout<<start<<" "<<upper;
            return;
        }
        else if(cursum < value)
        {
            start++;
        }
        else if(cursum > value)
        {
            upper--;
        }

        
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements of the array \n";
    cin>>n;
    cout<<"Enter the elements of the array \n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int parisumation;
    cout<<"Enter the pairsum value you want to find out \n";
    cin>>parisumation;
    insertionSort(arr,n);
    // printarray(arr,n);
    pairsum(arr,n,parisumation);  
}