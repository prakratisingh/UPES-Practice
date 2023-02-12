/*Write a c program to check whether a given number is a perfect number or not. 
A number is a perfect number if is equal to sum of its proper divisors, that is, 
sum of its positive divisors excluding the number itself
*/
#include<iostream>
using namespace std;
bool Perfect(int n)
{
    int s = 0;
    int temp = n;
    for(int i=1;i<temp;i++)
    {
        if(temp%i==0)
        {
            s+=i;
        }
    }
    if(s == n)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin>>n;
    cout<<Perfect(n)<<endl;
}