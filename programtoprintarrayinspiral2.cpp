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
    cout<<"Enter the elements in the two dimensional array \n";
    int start=0;
    loop1:
    if(start<r)
    {
        int ended=0;
        loop2:
        if(ended<c)
        {
            cin>>arr[start][ended];
            ended++;
            goto loop2;
        }
        start++;
        goto loop1;
    }

    cout<<"Now printing the array in the spiral format \n";
    int rowstart = 0,colstart = 0;
    int rowend = r-1, colend = c-1;
    loopCreating:
    if(rowstart<=rowend && colstart<=colend)
    {
        int cxtn = colstart;
        loopx1:
        if(colstart<=colend)
        {
            cout<<arr[rowstart][colstart]<<'\t';
            colstart++;
            goto loopx1;
        }
        colstart=cxtn;
        rowstart++;
        int rxtn=rowstart;
        loopx2:
        if(rowstart<=rowend)
        {
            cout<<arr[rowstart][colend]<<'\t';
            rowstart++;
            goto loopx2;
        }
        rowstart=rxtn;
        colend--;
        int cxtm = colend;
        loopx3:
        if(colend>=colstart)
        {
            cout<<arr[rowend][colend]<<'\t';
            colend--;
            goto loopx3;
        }
        colend = cxtm;
        rowend--;
        int rxtm = rowend;
        loopx4:
        if(rowend>=rowstart)
        {
            cout<<arr[rowend][colstart]<<'\t';
            rowend--;
        }
        rowend=rxtm;
        colstart++;

    }
    cout<<arr[rowstart][colstart];
    return 0;
}