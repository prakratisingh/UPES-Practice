//Write a C program to determine whether a given number is prime or not. 
#include<iostream>
using namespace std;
int isPrime(int x)
{
    int count = 0;
    int temp = x;
    for(int i=2;i<=x/2;i++)
    {
        if(temp%i==0)
            count++;
            break;
    }
    if(x==1)
    {
        count = 1;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    if(isPrime(n)==0)
    {
        cout<<"Prime"<<endl;
    }
    else
        cout<<"Not Prime"<<endl;

    return 0;
}