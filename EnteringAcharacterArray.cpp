#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of character inside the array \n";
    cin>>n;
    char arr[n+1];
    cout<<"Enter the character array \n";
    // cin>>arr;
    // cout<<"The character array is "<<arr;
    int i=0;
    while(i<20)
    {
        cin>>arr[i];
        i++;
    }
    cout<<arr;
    return 0;
}