#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of rows that you want to have in your array \n";
    int r;
    cin>>r;
    cout<<"Enter the number of columns that you want to have in your array \n";
    int c;
    cin>>c;
    cout<<"Enter the elements of your array \n";
    int arr[r][c];
    int i=0;
    loop:
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
           goto loop;
    }

    cout<<"Printing the elements of your two dimensional array \n";
    int k=0;
    loop3:
     if(k<r)
     {
         int m=0;
         loop4:
         if(m<c)
         {
             cout<<arr[k][m];
             cout<<'\t';
             m++;
             goto loop4;

         }
         k++;
         cout<<'\n';
         cout<<'\n';
         goto loop3;
     }
     return 0;

}