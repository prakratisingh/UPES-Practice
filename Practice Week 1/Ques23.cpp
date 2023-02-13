//Write a program in C to check whether a number is a palindrome or not. 
#include<iostream>
using namespace std;
int Reverse(int x)
{
    int rev = 0;
    int rem = 0;
    while(x>=1)
    {
        rem = x%10;
        rev = (rev*10)+rem;
        x = x/10;
    }
    cout<<rev<<endl;
    return rev;
}
int main()
{
    int n;
    cin>>n;
    int rev = Reverse(n);
    if(rev==n)
    {
        cout<<"Pallindrome"<<endl;
    }
    else
        cout<<"Not Pallindrome"<<endl;
}