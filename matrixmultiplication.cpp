#include<iostream>
using namespace std;
int main()
{
    int r1,c1;
    cout<<"Enter the number of rows in the matrix 1 \n";
    cin>>r1;
    cout<<"Enter the number of columns in the matrix 1 \n";
    cin>>c1;
    int arr[r1][c1];
    cout<<"Enter the elements of the matrix 1 \n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>arr[i][j];
        }

    } 
    cout<<"Enter the number of rows of the matrix 2 \n";
    int r2;
    cin>>r2;
    if(c1!=r2)
    {
        cout<<"This configuration of the matrix is not possible \n";
        return 0;
    }
    int c2;
    cout<<"Enter the number of columns in the matrix 2\n";
    cin>>c2;
    int arr2[r2][c2];
    cout<<"Enter the elements in the matrix 2 \n";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>arr2[i][j];
        }
    }
    int arr3[r1][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            arr3[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<r2;k++)
            {
                arr3[i][j]+=arr[i][k]*arr2[k][j];
            }
        }
    }
    /*

   1 2    1 2
          
   3 4    3 4

   



    */
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<arr3[i][j]<<" ";
        }cout<<'\n';
    }
    
    return 0;
} 