#include<iostream>
using namespace std;
void arrayEnter(int arr[],int &start)
{
    cin>>arr[start];
    start++;
}
int valueKeyFound(int arr[],int &start,int value)
{
    if(arr[start]==value)
    {   
        return start;
    }
    else
    { start++;
        return 0;
    }
}
int main()
{
    cout<<"Enter the number of elements you want in your array \n";
    int n;
    cin>>n;
    int arr[n];
    int start=0;
    enter:
    arrayEnter(arr,start);
    if(start<n)
    {
        goto enter;
    }
    cout<<"Enter the value you want to find for the array \n";
    int value;
    int key=0;
    start=0;
    cin>>value;
    check:
    key=valueKeyFound(arr,start,value);
    if((key==0)&&(start<n))
    {
        goto check;
    }
    cout<<key+1<<" is the position where the value is found in the array";

    return 0;
}