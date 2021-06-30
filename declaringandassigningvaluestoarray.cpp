#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the elements of the array at the respective positions : \n";
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the elements of the array at position : "<<'\t'<<i+1<<'\t';
        cin>>arr[i];
    }
    cout<<"The array elements have been entered \nDo you want the elements to be traversed ? \n";
    char ask;
    cin>>ask;
    if(ask=='y')
    {
        for(int i=0;i<5;i++)
        {
            cout<<"Element of the array at position "<<'\t'<<i+1<<'\t'<<arr[i]<<'\n';
        }
    }
    else{
        exit;
    }
    return 0;
    
}