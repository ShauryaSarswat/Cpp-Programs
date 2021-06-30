#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int currentDifference,maxDifference=1,lengthofArray,currentMax;
    currentDifference=arr[0]-arr[1];
    currentMax=currentDifference;
    for(int i=1;i<n-1;i++)
    {
          if(currentMax<=maxDifference)
          {
              currentMax=maxDifference;
          }
          if(currentDifference==(arr[i]-arr[i+1]))
          {
              maxDifference++;
          }
          else
          {
              currentMax=maxDifference;
              currentDifference=arr[i]-arr[i+1];
          }
    }
    cout<<currentMax;
}