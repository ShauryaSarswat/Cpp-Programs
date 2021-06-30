#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of the rows in the array \n";
    cin>>r;
    cout<<"Enter the number of the columns in the array \n";
    cin>>c;
    int arr[r][c];
    cout<<"Enter the elements of the two dimesional array \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }    
    cout<<"Now will be printing the array in the spiral format \n";
    int rowStart = 0, colStart = 0;
    int rowEnd = r-1, colEnd = c-1;
    while(rowStart<=rowEnd && colStart<=colEnd)
    {
        for(int i=colStart;i<=colEnd;i++)
        {
            cout<<arr[rowStart][i];
            cout<<'\t';
        }
        rowStart++;
        for(int i=rowStart;i<=rowEnd;i++)
        {
            cout<<arr[i][colEnd];
            cout<<'\t';
        }
        colEnd--;
        for(int i=colEnd;i>=colStart;i--)
        {
            cout<<arr[rowEnd][i];
            cout<<'\t';
        }
        rowEnd--;
        for(int i=rowEnd;i>=rowStart;i--)
        {
            cout<<arr[i][colStart];
            cout<<'\t';
        }
        colStart++;
    }
    return 0;
}