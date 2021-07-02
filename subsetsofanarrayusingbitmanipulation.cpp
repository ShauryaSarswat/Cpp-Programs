#include<iostream>
using namespace std;
void subsets(int arr[],int a)
{
    for(int i=0;i<(1<<a);i++)
    {
        for(int j=0;j<a;j++)
        {
            if(i&(1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<'\n';
    }
}
int main()
{
    int a;
    cout<<"Enter the value of the number ";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements of the array ";
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    subsets(arr,a);
    return 0;
}