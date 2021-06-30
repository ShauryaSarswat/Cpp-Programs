#include<iostream>
#include<string>
using namespace std;
int main()
{// {
//     string s1="1234";
//     int a = stoi(s1);
//     cout<<a;
//     return 0;
//program to convert integer to string 
int a;
cout<<"Enter the number \n";
cin>>a;
string s=to_string(a);
cout<<s;
return 0;
}