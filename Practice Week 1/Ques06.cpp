//Write a C program to find whether a given year is a leap year or not.(Century year also).
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year"<<endl;
    cin>>year;

    if(year%4==0)
        cout<<"Leap Year"<<endl;
    else
        cout<<"Not Leap Year"<<endl;
return 0;
}