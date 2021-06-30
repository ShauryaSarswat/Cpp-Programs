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
    cout<<"Enter the elements of the array \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Your two dimensional array is being completely initialized as follows\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j];
            cout<<'\t';
        }
        cout<<'\n';
        cout<<'\n';
    }
    return 0;
}