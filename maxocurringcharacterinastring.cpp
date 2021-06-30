#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string ";
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int charFrequency[26];
    for(int i=0;i<26;i++)
    {
        charFrequency[i]=0;
    }
    for(int i=0;i<s.length();i++)
    {
        charFrequency[s[i]-'a']++;
    }
    char x = 'a';
    int counter = 0;
    int maxFrequency = 0;
    for(int i=0;i<26;i++)
    {
        if(charFrequency[i] > maxFrequency)
        {
            maxFrequency = charFrequency[i];
            x+=i;
            
        }
    }
    cout<<x;

}