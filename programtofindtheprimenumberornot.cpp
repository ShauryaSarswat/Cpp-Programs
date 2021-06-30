#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter any number to check wether prime or not";
    cin>>number;
    int flag=0;
    for(int i=2;i<number;i++)
    {
        if(number%i==0)
        { flag++;
          break;

        }
        
    }
    if(flag==0){
        cout<<"prime number was entered by you";
    }
    else{
        cout<<"you have entered a non-prime number";
    }
    return 0;
}