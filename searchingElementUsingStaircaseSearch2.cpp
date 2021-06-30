#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows in the matrix \n";
    cin>>r;
    cout<<"Enter the number of columns in the matrix \n";
    cin>>c;
    cout<<"Enter the elements of the matrix \n";
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
    int value;
    cout<<"Enter the value that you want to check in the missing array \n";
    cin>>value;
    int k=0,l=c-1;
    loop3:
    if(k<r&&l>0)
    {
        if(arr[k][l]==value)
        {
            cout<<value<<" is found at "<<k<<" and "<<l;
            return 0;
        }
        else if(arr[k][l]>value)
        {
            l--;
            goto loop3;
        }
        else if(arr[k][l]<value)
        {
            k++;
            goto loop3;
        }
    }
    cout<<"The element "<<value<<" was not found inside the array \n";
    return 0;

}