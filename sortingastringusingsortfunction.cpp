#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cin.ignore();
    getline(cin, s);
    cout<<"Now sorting the characters of your string \n";
    sort(s.begin(),s.end());
    cout<<s;
    return 0;
}