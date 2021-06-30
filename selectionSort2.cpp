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
void selectionSort(int arr[],int n)
{
    int start=0;
    loped:
    int are=start+1;
    checked:  
     if(arr[start]>arr[are])
     {
         int temp=arr[start];
         arr[start]=arr[are];
         arr[are]=temp;
     }
     are++;
     if(are<n)
     {
         goto checked;
     }

     start++;
     
     if(start<n-1)
     {
         goto loped;
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
selectionSort(arr,n);
    print:
printArray(arr,start);
if(start<n)
{
    goto print;
}
}