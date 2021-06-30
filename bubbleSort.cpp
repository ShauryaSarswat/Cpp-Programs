#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements you want in your array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of elements in the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int counter = 1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}