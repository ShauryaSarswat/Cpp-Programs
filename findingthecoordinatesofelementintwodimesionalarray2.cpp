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
    cout<<"Enter the value that you want to search in the array \n";
    int value,flag=0;
    cin>>value;
    int k=0;
    loop3:
    if(k<r)
    {
        int m=0;
        loop4:
        if(m<c)
        {
            if(arr[k][m]==value)
            {
                cout<<"The element "<<value<<" is found at "<<k+1<<" row and "<<m+1<<" columns ";
                return 0;
            }
            m++;
            goto loop4;
        }
        k++;
        goto loop3;
    }



}