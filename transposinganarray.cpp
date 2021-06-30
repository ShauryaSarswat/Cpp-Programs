#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows and columns \n";
    cin>>r;
    cin>>c;
    int arr[r][c];
    cout<<"Enter the elements in the two dimensional array \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Now creating a new array with the transpose elements as follows \n";
    int arr2[c][r];
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            arr2[i][j]=arr[j][i];
        }
    }

    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<arr2[i][j]<<'\t';
        }
        cout<<'\n';
        cout<<'\n';
    }
    return 0;
}