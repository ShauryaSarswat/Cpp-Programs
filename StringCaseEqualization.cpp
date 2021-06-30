#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string ";
    cin>>s;
    cin.ignore();
    //Converting to the uppercase

    // for(int i=0;i<s.length();i++)
    // {
    //     if(s[i]>='a' && s[i]<='z')
    //     {
    //         s[i]-=32;
    //     }
    // }
    // cout<<s;
    // //Converting to the lowercase
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
        }
    }
    cout<<s;

}