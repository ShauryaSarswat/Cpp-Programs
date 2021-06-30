#include<iostream>
using namespace std;
int sum(int a)
{
    int sum=0;
    for(int i=1;i<=a;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int number;
    cin>>number;
    int sumo=sum(number);
    cout<<sumo;

}