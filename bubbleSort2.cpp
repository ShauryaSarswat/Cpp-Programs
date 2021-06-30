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
void bubbleSort(int arr[],int n)
{
    int counter=1;
    counter1:
    if(counter<n)
    {
        if(arr[counter-1]>arr[counter])
        {
            int temp = arr[counter-1];
            arr[counter-1] = arr[counter];
            arr[counter] = temp;
        }
        counter++;
        goto counter1;
    }
}
int main()
{
    int start=0;
    int n;
    cout<<"Enter the number of elements you want in your array \n";
    cin>>n;
    int arr[n];
        enter:
arrayEnter(arr,start);
if(start<n)
{
    goto enter;
}
  start=0;
bubbleSort(arr,n);
    print:
printArray(arr,start);
if(start<n)
{
    goto print;
}

}