#include<iostream>
using namespace std;
int main()
{
    int r1;
    cout<<"Enter the number of the rows in the matrix 1";
    cin>>r1;
    int c1;
    cout<<"Enter the number of coluns in the matrix 1";
    cin>>c1;
    int r2;
    cout<<"Enter the number of columns in the matrix 2";
    cin>>r2;
    if(r2!=c1)
    {
        cout<<"The configuration of the matrix is not valid for multiplication ";
        return 0;
    }
    int c2;
    cout<<"Enter the number of the columns in the matrx 2";
    cin>>c2;
    int arr1[r1][c1];
    cout<<"Enter the elements of the matrix 1 \n";
     int start=0;
 loop1:
 if(start<r1)
 {
     int ended=0;
     loop2:
     if(ended<c1)
     {
         cin>>arr1[start][ended];
         ended++;
         goto loop2;
     }
     start++;
     goto loop1;
 }
 int arr2[r2][c2];
 cout<<"Enter the elements of the matrix 2 \n";
 start=0;
 loop3:
 if(start<r2)
 {
     int ended=0;
     loop4:
     if(ended<c2)
     {
         cin>>arr2[start][ended];
         ended++;
         goto loop4;
     }
     start++;

     goto loop3;
 }
 int arr3[r1][c2];
  for(int i=0;i<r1;i++)
 {
     for(int j=0;j<c2;j++)
     {
         arr3[i][j]=0;
     }
 }
 int i=0;
 loop5:
 if(i<r1)
 {
     int j=0;
     loop6:
     if(j<c2)
     {
         int k=0;
         loop7:
         if(k<r2)
         {
            arr3[i][j]+=arr1[i][k]*arr2[k][j];   
          k++;
          goto loop7;
         }
         j++;
         goto loop6;
     }
     i++;
     goto loop5;
 }
 int j=0;
 loop8:
 if(j<r1)
 {
     int k=0;
     loop9:
     if(k<c2)
     {
         cout<<arr3[j][k]<<'\t';
         k++;
         goto loop9;
     }
     cout<<'\n';
     cout<<'\n';
     j++;
     goto loop8;
 }
}