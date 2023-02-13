//Write a program in C to print a string in reverse order. 
#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n = str.length();
    char arr[n+1];
    for(int i=0;i<n;i++)
    {
        arr[i] = str[i];
    }
    arr[n] = '\0';

    for(int i=n;i>=0;i--)
    {
        cout<<arr[i];
    }
}