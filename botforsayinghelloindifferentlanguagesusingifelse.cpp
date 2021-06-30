#include<iostream>
using namespace std;
int main()
{
    char x;
cout<<"Enter a character respective to the language to recieve hello in following language \n";
    cout<<"a \t Hindi \nb \t english \nc \t french \nd \t mandarin \n";
    cin>>x;
    if(x=='a'||x=='A')
    {
       cout<<"NAMASTE ";
    }
    else if(x=='b'||x=='B')
    {
       cout<<"HELLO";
    }
    else if(x=='c'||x=='C')
    {
        cout<<"HOLA";
    }
    else if(x=='d'||x=='D')
    {
        cout<<"NI HAO";

    }
    else
    {
        cout<<"You have entered an unidentified language";
    }

    return 0;
}