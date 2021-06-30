#include<iostream>
using namespace std;
void pairsummation(int arr[],int n,int value)
{
    int i=0;
    int gal = 0;
    loop1:
    if (i<n-1)
    {
        int j=i+1;
        loop2:
        if(j<n)
        {
            if(arr[i]+arr[j]==value)
            {
                cout<<i<<" "<<j;
                gal++;
                return;
            }
            j++;
            goto loop2;
        }
        i++;
        goto loop1;
        /* code */
    }
    if(gal==0)
    {
        cout<<"The value of the pairsum you have entered is not found in the array \n";
    }
    
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array \n";
    cin>>n;
    cout<<"Enter the elements of the array \n";
    int arr[n];
    int start = 0;
    enter:
    loop:
    if(start<n)
    {
        cin>>arr[start];
        start++;
        goto loop;
    }
    int value;
    cout<<"Enter the values of the pair sum that you want \n";
    cin>>value;
    pairsummation(arr,n,value);
    return 0;



}