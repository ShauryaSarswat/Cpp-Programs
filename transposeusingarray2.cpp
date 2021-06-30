#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows \n";
    cin>>r;
    cout<<"Enter the number of columns \n";
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

start=0;
loop3:
if(start<r)
{
     int ended = start;
    loop4:
    if(ended<c)
    {
        int temp = arr[start][ended];
        arr[start][ended] = arr[ended][start];
        arr[ended][start] = temp;
        ended++;
        goto loop4;
    }
    start++;
    goto loop3;
}
start=0;
loop5:
if(start<r)
{
    int ended=0;
    loop6:
    if(ended<c)
    {
        cout<<arr[start][ended]<<'\t';
        ended++;
        goto loop6;
    }
    cout<<'\n';
    start++;
    goto loop5;
}

return 0;
}