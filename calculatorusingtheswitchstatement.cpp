#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter the two operands for the calculator \n";
    float a,b;
    cin>>a>>b;
    cout<<"Enter the operator to perform the function of";
    cin>>x;
    switch (x)
    {
     case '+':cout<<a+b;break;
     case '-':cout<<a-b;break;
     case '*':cout<<a*b;break;
     case '/':cout<<a/b;break;
     default : cout<<"The operator is invalid";break;
    }
    return 0;

}