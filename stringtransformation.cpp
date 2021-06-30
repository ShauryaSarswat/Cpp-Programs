#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="Thisisastringbyshaurya";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s;
    //now converting the string to the lowercase
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<'\n'<<s;
    return 0;
}