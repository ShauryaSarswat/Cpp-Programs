#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string s1;
    // string s2;
    // cout<<"Enter the first string ";
    // cin.ignore();
    // getline(cin, s1);
    // cout<<"Enter the second string ";
    // cin.ignore();
    // getline(cin, s2);
    // if(s1.compare(s2)==0)
    // {
    //     cout<<"both the strings are equal ";
    // }
    // else{
    //     cout<<"The strings are not equal ";
    // }

    //to check wether my string is empty or not
    // string s1;
    // cin>>s1;
    // cout<<s1;
    // cout<<"Checking before using the clear function over the s1 \n";
    // cout<<s1.empty();
    // s1.clear();
    // cout<<"Now checking after using the clear function over the s1 \n";
    // cout<<s1.empty();
    //using the erase function over our string
    // cin.ignore();
    // getline(cin , s1);
    // cout<<"Enter the position from where you want to delete your string characters \n";
    // int pos;
    // cin>>pos;
    // cout<<"Enter how many characters you wanna delete from the position \n";
    // int number;
    // cin>>number;
    // cout<<s1<<" before \n";
    // s1.erase(pos-1,number);
    // cout<<s1<<" after";
    //using the find
    // string s1;
    // cout<<"Enter your string \n";
    // cin.ignore();
    // getline(cin, s1);
    // // cout<<"Enter the sequence you want to find in the string \n";
    // // string s2;
    // // cin.ignore();
    // // getline(cin, s2);
    // // cout<<s1.find(s2);
    // //using the insert function
    // s1.insert(2, "lol");
    // cout<<s1;
    // cout<<'\n';
    // int l=s1.length();
    //using the length function to find out the length of the string 
    // string s1="shaurya";
    // cout<<s1.size();
    //using the size() to traverse the string in a for loop
    // string s1="shaurya";
    // for(int i=0;i<s1.length();i++)
    // {
    //     cout<<s1[i]<<'\n';
    // }
    //using the substring feature
    string s1="shauryaisgood";
    cout<<s1.substr(6,4);
    return 0;
}