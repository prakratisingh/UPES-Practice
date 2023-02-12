/*Write a C program to check whether a given number is an armstrong number or not. 
An Armstrong number of three digits is an integer such that the sum of the cubes of its digits 
is equal to the number itself.
For example, 153 is an armstrong number
*/
#include<iostream>
#include <math.h>
using namespace std;
bool Armstrong(int n)
{
    int temp=n;
    int s = 0;
    while(temp)
    {
        int r = temp%10;
        int p = floor(pow(r,3));
        cout<<p<<endl;
        s = s+ p;
        temp = temp/10;
    }
    if(n==s)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin>>n;
    cout<<Armstrong(n)<<endl;
}