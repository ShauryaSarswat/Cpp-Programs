#include<iostream>
using namespace std;
void arrayEnter(int arr[],int &start)
{
    cin>>arr[start];
    start++;
}
int valueKeyFound(int arr[],int &start,int value,int upBound)
{
    if(arr[start]==value)
    {   
        return start;
    }
    else if(arr[start]<value)
    { start=(start+upBound-1)/2;
    
        return 0;
    }
    else
    {
        start=start/2;
        return 0;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements you want to have in your array \n";
    cin>>n;
    int arr[n];
    int start=0;
        enter:
    arrayEnter(arr,start);
    if(start<n)
    {
        goto enter;
    }
    cout<<"Enter the value you want to find the index of in the array \n";
    int value;
    cin>>value;
    start=(n-1)/2;
    int key=0;
    check:
    key=valueKeyFound(arr,start,value,n);
    if((key==0)&&(start<n))
    {
        goto check;
    }
    cout<<key+1<<" is the position where the value is found in the array";
}
    