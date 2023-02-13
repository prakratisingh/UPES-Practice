//Write a program in C to convert a decimal number into binary without using an array. 
#include<iostream>
using namespace std;
int main()
{
    int rem,n,rev=0; 
    cin>>n;
    while(n>0) 
    {
        rem=n%2;
        n=n/2;
        cout<<rem;
    }
} 
