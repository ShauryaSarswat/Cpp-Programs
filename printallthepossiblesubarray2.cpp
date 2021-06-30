#include<iostream>
using namespace std;
void printallsubarray(int arr[],int n)
{
    int i=0;
    loop1:
    if(i<n)
    {
        int j=i;
        loop2:
           if(j<n)
           {
               int k=i;
               loop3:
               if(k<=j)
               {
                   cout<<arr[k];
                   k++;
                   goto loop3;
               }
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
    cout<<"Enter the length of the array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
    int start=0;
    enter:
    if(start<n)
    {
        cin>>arr[start];
        start++;
        goto enter;
    }
    printallsubarray(arr,n);

}