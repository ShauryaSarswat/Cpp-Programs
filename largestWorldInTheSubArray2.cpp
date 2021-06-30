#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of the array \n";
    cin>>n;
    cin.ignore();
    cout<<"Enter the elements of the character array \n";
    char arr[n+1];
    cout<<"Enter the elements in the array \n";
    cin.getline(arr, n);
    cin.ignore();
    int i=0;
    int cursum=0,maxsum=0;
    looped:
    {
         if(arr[i]==' '||arr[i]=='\0')
        {
            if(cursum>maxsum)
            {
                maxsum=cursum;
            }
            cursum=0;
        }
        else
        {
            cursum++;
        }
        if(arr[i]=='\0')
        {
            goto loopBreak;
        }
        i++;
        goto looped;
    }
    loopBreak:
    cout<<maxsum;
    return 0;

}