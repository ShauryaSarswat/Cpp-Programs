#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows in the array \n";
    cin>>r;
    cout<<"Enter the number of columns in the array \n";
    cin>>c;
    int arr[r][c];
    cout<<"Enter the elements of the matrix \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the value that you want to find in your array \n";
    int value;
    bool flag = 0;
    cin>>value;
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]==value)
            {
                cout<<"The element "<<value<<" is found at "<<i+1<<" row and "<<j+1<<" column ";
                flag=1;
                exit;
            }
        }
    }
    if(flag==0)
    {
        cout<<"The element "<<value<<" is not present in the array \n";

    }

    return 0;
}