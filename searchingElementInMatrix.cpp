#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the number of rows in the array \n";
    cin>>r;
    int c;
    cout<<"Enter the number of columns in the array \n";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the element that you want to search for \n";
    int value;
    cin>>value;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==value)
            {
                cout<<arr[i][j]<<" found at index "<<i<<" and "<<j;
                break;
            }
        }
    }
    return 0;
}