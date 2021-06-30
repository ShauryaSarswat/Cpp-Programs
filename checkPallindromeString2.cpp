#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of the string \n";
    cin>>n;
    cout<<"Enter the string \n";
    char arr[n+1];
    cin>>arr;
    int i=0,j=n-1;
    bool flag = true;
    looped:
    if(i<j)
    
    {
        if(arr[i]==arr[j])
        {
            i++;
            j--;
            goto looped;
        }
        else
        {
            cout<<"The string is not pallindrome \n";
            return 0;
        }

    }
    if(flag==true)
    {
        cout<<arr<<" is a pallindrome \n";
    }
    return 0;
}