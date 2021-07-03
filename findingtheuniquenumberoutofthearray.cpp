#include<iostream>
using namespace std;
int uniqueNumber(int arr[],int n)
{
    int xorsum = 0;
    for(int i=0;i<n;i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}
int main()
{
    int n;
    cout<<"Enter the number of the array elements \n";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    cout<<uniqueNumber(arr,n);
    return 0;

}