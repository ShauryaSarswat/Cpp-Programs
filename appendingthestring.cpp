#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="fam";
    string s2="ily";
    // s1.append(s2);
    // cout<<s1;
    //printing both the strings after appending tigether
    cout<<s1+s2;
    //now using the assignment operator witb=h it
    s1=s1+s2;
    cout<<'\n';
    cout<<s1;
    //acessing the particular character  of  a string
    cout<<'\n';
    cout<<s1[1];
    s1.clear();
    cout<<s1;//checking out which string is greater 
    string str1;
    string str2;
    cout<<"Enter the first string for the comparison ";
    cin.ignore();
    getline(cin, str1);
    cout<<"Enter the second string for comparison";
    cin.ignore();
    getline(cin, str2);
    cout<<s2.compare(s1);
    return 0;
}