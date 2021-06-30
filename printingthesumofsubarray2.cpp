#include<iostream>
using namespace std;
void printingSum(int arr[],int n)
{
    int i=0;
    loop1:
     if(i<n)
     {
         int j=i;
         loop2:
          if(j<n)
          {
              int summation = 0;
              int k=i;
              loop3:
              if(k<=j)
              {
                 summation+=arr[k];
                 k++;
                 goto loop3; 
              }
              cout<<summation;
              cout<<'\n';
              j++;
              goto loop2;
          }
          i++;
          goto loop1;
     }
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array \n";
    cin>>n;
    int arr[n],start=0;
    cout<<"Enter the elements of the array \n";
    enter:
     if(start<n)
     {
         cin>>arr[start];
         start++;
         goto enter;
     }
     cout<<"Now printing the sum of the subarrays \n";
     printingSum(arr,n);
}