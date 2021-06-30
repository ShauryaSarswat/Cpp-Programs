#include<iostream>
using namespace std;
void maximumsum(int arr[],int n)
{
    int maximum = INT_MIN;
    int i=0;
    loop1:
    if(i<n)
    {
        int j=i;
        loop2:
         if(j<n)
         {
             int sum=0;
             int k=i;
             loop3:
             if(k<=j)
             {
                 sum+=arr[k];
                 k++;
                 goto loop3;

             }
             maximum = max(maximum,sum);
             j++;
             goto loop2;

         }
         i++;
         goto loop1;
    }
    cout<<maximum;
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
 int start = 0;
 enter:
 if(start<n)
 {
     cin>>arr[start];
     start++;
     goto enter; }
     maximumsum(arr,n);
     return 0;
}