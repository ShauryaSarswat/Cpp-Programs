#include<iostream>
#include<math.h>
using namespace std;
bool pythagorean(int a,int b,int c)
{
   int largest=max(a,max(b,c));
   int secondLargest;
   if(largest==a)
   {
       if(a*a==((b*b)+(c*c)))
       {
           return true;
       }
       else{
           return false;
       }
   }
   else if(largest==b)
   {
        if(b*b==((a*a)+(c*c)))
 {
     return true;
 }
 else{
     return false;
 }
   }
   else
   {
       if(c*c==((b*b)+(a*a)))
 {
     return true;
 }
 else{
     return false;
 }
   }
}
int main()
{
    int a,b,c;
    cout<<"Enter the sides of the triangle";
    cin>>a>>b>>c;
    if(pythagorean(a,b,c))
    {
        cout<<"The entered set is a pythagorean triplet";
    }
    else{
        cout<<"The entered set is not a pythagorean triplet";
    }
    return 0;
}