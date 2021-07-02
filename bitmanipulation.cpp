#include<iostream>
using namespace std;
int checkBit(int a,int pos)
{
    return ((a&(1<<pos))!=0);
}
int setBit(int a,int pos)
{
    return (a|(1<<pos));
}
int clearBit(int a,int pos)
{
    int post = ~(1<<pos);
    return a&post;
}
int updateBit(int a,int pos,int value)
{
    int post = ~(1<<pos);
    a = a&post;
    return a|(value<<pos);
}
int main()
{
  int number;
  cout<<"Enter the number \n";
  cin>>number;
  int position;
//   cin>>position;
//   cout<<checkBit(number, position);
//   cout<<"\n Enter the position you want to set bit of ";
//   cin>>position;
//   cout<<setBit(number,position);
//   cin>>position;
//   cout<<clearBit(number,position);
  cin>>position;
  int value;
  cin>>value;
  cout<<updateBit(number,position,value);
}