#include<iostream>
#include<string>
using namespace std;
int main()
{
    //declaring a string 
    string str;
    cout<<"Enter the string ";
    cin>>str;
    cout<<str;
    //second method for duplication characters
    string str2(5,'n');
    cout<<str2;
    cout<<'\n';
    //method for entering a string with spaces 
    string str3;
    cin.ignore();
    cout<<"Enter the string , the spaces are also allowed \n";
    getline(cin, str3);
    cout<<str3;
    cout<<str2.find("shaurya");


  return 0;
}