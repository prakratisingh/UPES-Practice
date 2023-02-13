//Write a C program to find the length of a string without using the library function. 
#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count=0;
    int i=0;
    while(str[i]!='\0')
    {
        count++;
        ++i;
    }
    cout<<count<<endl;
    return 0;
}