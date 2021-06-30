#include<iostream>
using namespace std;
void arrayEnter(int arr[],int &start)
{
    cin>>arr[start];
    start++;
}
int main()
{
    int n;
    cout<<"Enter the number of elements you want in your array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
    int start=0;
     enter:
 arrayEnter(arr,start);
 if(start<n)
 {
     goto enter;
 }

cout<<"Enter the value you want to find the index of in the array \n";
int value;
cin>>value;
int upperBound=n-1;
int lowerBound=0;
int key=0;
for(int i=0;i<n;i++)
{
    int mid=(lowerBound+upperBound)/2;
    if(arr[mid]==value)
    {
         key=mid;
    }
    else if(arr[mid]<value)
    {
       upperBound=mid;
    }
    else{
        lowerBound=mid;
    }

}
cout<<"The element you have searched for is found at "<<key+1;


}