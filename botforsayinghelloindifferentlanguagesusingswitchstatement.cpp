#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter a character respective to the language to recieve hello in following language \n";
    cout<<"a \t Hindi \nb \t english \nc \t french \nd \t mandarin \n";
cin>>x;

  switch (x)
  {
      case 'a':cout<<"NAMASTE";break;
      case 'b':cout<<"HELLO";break;
      case 'c':cout<<"HOLA";break;
      case 'd':cout<<"NI HAO";break;
    default: cout<<"You have entered an unknown language code";

  }

  return 0;
}