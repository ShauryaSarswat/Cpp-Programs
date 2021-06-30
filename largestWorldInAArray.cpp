#include<bits/stdc++.h>
int main()
{
    int n;
    std::cout<<"Enter the length of the array \n";
    std::cin>>n;
    std::cin.ignore();
    char arr[n+1];
    std::cout<<"Enter the sentence \n";
    std::cin.getline(arr,100);
    std::cin.ignore();
    int i=0;
    int cursum = 0;
    int maxsum = 0;
    while(1)
    {
        if(arr[i]==' '||arr[i]=='\0')
        {
            if(cursum>maxsum)
            {
                maxsum=cursum;
            }
            cursum=0;
        }
        else
        {
            cursum++;
        }
        if(arr[i]=='\0')
        {
            break;
        }
        i++;
    }
    std::cout<<maxsum;
    return 0;

}