#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter a numeric string \n";
    string s;
    cin>>s;
    cout<<"Now converting this string to a number ";
    long int num = to_integer(s);
    
    return 0;
}