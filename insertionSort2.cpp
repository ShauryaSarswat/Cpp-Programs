#include<iostream>
using namespace std;
void arrayEnter(int arr[],int &start)
{
    cin>>arr[start];
    start++;
}
void printArray(int arr[],int &start)
{
    cout<<arr[start];
    start++;
}
void insertionSort(int arr[],int n)
{
    int i=1;
    loop1:
    if(i<=n-1)
    {
        int current = arr[i];
        int j = i-1;
        loop2:
        if(arr[j]>current&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
            goto loop2;
        }
        arr[j+1]=current;
        i++;
        goto loop1;
    }
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
      start=0;
    insertionSort(arr,n);
        print:
    printArray(arr,start);
    if(start<n)
    {
        goto print;
    }
    return 0;
}