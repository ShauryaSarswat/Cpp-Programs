#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the number of rows in matrix ";
    cin>>r;
    int c;
    cout<<"Enter the number of columns in the matrix ";
    cin>>c;
    int arr[r][c];
    int i=0;
    loop1:
    if(i<r)
    {
        int j=0;
        loop2:
        if(j<c)
        {
            cin>>arr[i][j];
            j++;
            goto loop2;
        }
        i++;
        goto loop1;
    }
    cout<<"Enter the value that you want to search for in the matrix \n";
    int value;
    cin>>value;
    i=0;
    loop3:
    if(i<r)
    {
        int j=0;
        loop4:
        if(j<c)
        {
            if(arr[i][j]==value)
            {
                cout<<"The element "<<value<<" is found at position "<<i<<" and "<<j;
                return 0;
            }
            j++;
            goto loop4;
        }
        i++;
        goto  loop3;
    }
    return 0;
}