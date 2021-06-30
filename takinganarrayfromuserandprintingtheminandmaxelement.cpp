#include<iostream>
using namespace std;
void enterArray(int arr[],int &start)
{ 
    cin>>arr[start];
    start++;
}
void printarray(int arr[],int &start)
{
    cout<<"The element of the array at the position"<<arr[start]<<'\n';
    start++;
}
void maxify(int arr[],int &start,int &maxNo)
{ maxNo=max(maxNo,arr[start]);
    start++;
}
void minify(int arr[],int &start,int &minNo)
{
    minNo=min(minNo,arr[start]);
    start++;
}
int main()
{
    cout<<"Enter the number of elements you want your array to have \n";
    int n;
    int start=0;
    cin>>n;
    int temp;
    temp = n;
    int arr[n];
    enter:
    cout<<"Enter the elements of the array at position "<<start<<'\n';
    enterArray(arr,start);
    if(n>start)
    {
        goto enter;
    }
    start=0;
    print :
    printarray(arr,start);
    if(start<n)
    {
        goto print;
    }
    start=0;
    int max=arr[start];
    int min=arr[start];
findMax :
maxify(arr,start,max);
if(start<n)
{
    goto findMax;
}
start=0;
findMin :
minify(arr,start,min);
if(start<n)
{
    goto findMin;
}
cout<<"Maximum value is : "<<max;
cout<<"Minimum value is : "<<min;

}








