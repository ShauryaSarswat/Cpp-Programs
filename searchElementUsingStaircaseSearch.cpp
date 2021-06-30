#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of the rows in the matrix \n";
    cin>>r;
    cout<<"Enter the number of columns in the matrix \n";
    cin>>c;
    int arr[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int i=0,j=c-1;
    int count = 0;
    int value;
    cout<<"Enter the value that you want to search for in the matrix \n";
    cin>>value;
    bool found = false;
    while(i<r&&j>=0)
    {
        if(arr[i][j]>value)
        {
          j--;
        }
        else if(arr[i][j]<value)
        {
            i++;
        }
        else if(arr[i][j]==value)
        {
            count++;

            cout<<value<<" at position "<<i<<" and "<<j;
            return 0;
        }
    }
    if(count==0)
    {
        cout<<"The element was not found in the matrix \n";
    }
    return 0;
}