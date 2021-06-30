#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of character array \n";
    cin>>n;
    char arr[n+1];
    //pallindrome
    cin>>arr;
    //shahs/0
    //0 1 2 3 4
    //0 1 2 3 n
    //0 = n
    //1 = n-1 
    //mid == n-x
    int i=0,j=n-1;
    bool flag=true;
    while(i!=j)
    {
        if(arr[i]==arr[j])
        {
            i++;
            j--;
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"The string is pallindrome";
    }
    else
    {
        cout<<"The string is not pallindrome";
    }
    return 0;
}