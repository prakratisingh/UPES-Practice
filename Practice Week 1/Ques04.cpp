//Write a C program to check whether a given number is even or odd (Using 2 or three method). 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    if(n%2==0)
    {
        cout<<"Even Number"<<endl;
    }
    else
    {
        cout<<"Odd number"<<endl;
    }
    return 0;
}
