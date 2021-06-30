#include<iostream>
using namespace std;
void pairsumproblem(int arr[],int n,int value)
{
    int i=0,j=n-1,cursum=0;
    loop:
    if(i!=j)
    {
        cursum = arr[i]+arr[j];
        if(cursum==value)
        {
            cout<<i<<" "<<j;
            return;
        }
        else if(cursum > value)
        {
            j--;
        }
        else
        {
            i++;
        }
        goto loop;
        
    }
}
int main()
{
    int n;
    cout<<"Enter the length of the array \n";
    cin>>n;
    cout<<"Enter the elements of the array \n";
    int arr[n],start=0;
    enter:
    if(start<n)
    {
        cin>>arr[start];
        start++;
        goto enter;
    }
    int value;
    cout<<"Enter the pairsum problem that you want \n";
    cin>>value;
    pairsumproblem(arr,n,value);

}