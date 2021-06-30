#include<iostream>
//C++ bhot purani hai
//uske har baar nye cheez ke liye same code likhna hota tha
//jiske baad header file ka concept aaya
//jisme common functions hote the
//lekin program ko btana pdta tha ki ab hum is header file ko use krne wle hai
//uske liye hum log #include ka use krte hai
//<iostream> header file ka use kra hai
using namespace std;
//statement 
//using keyword 
//namespace attribute
//std ek value
//using ki uske aage ane wli cheez apko program me use krni hai
//namespace apse kehta hai ki aap mere aage lgne wle object identifier ke sbhi functions read kr lijiye aur
//yaad krlijiye
//std-standard
//iostream me aane wle sabhi standard type ke functions ko yeh read krke yaad krlega
//std::cout<<;
//cout<<;
int main()
//only exectible funcition
//koi bhi cheez registered main me whi chlegi
//main ke alawa agr koi function hai toh wo visible toh hoga lekin chlega jb hi jb main me call ho
//main agr program me nhi hai
//to program ki build ho skti hai
//runing aur debugging nhi ho skti
{
    char string[100]="Shaurya Sarswat";
    int i=0;
    while(string[i]!= '\0')
    {
        cout<<string[i];//standard printing funciton hota hai
        i++;
    }
    return 0;//return 0 ka concept ssame whi hai jo c me hota hai
    //hr funciton ka ek return type hota hai
    //uske chakkar me hum return 0 use krte hai
    //lekin nye compilers me yeh inbuilt hota hai
}