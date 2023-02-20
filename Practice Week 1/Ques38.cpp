//Write a program in C to separate the individual characters from a string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter the string: "<<endl;
    string str;
    cin>>str;

    int l = str.size();
    for(int i=0;i<l;i++)
    {
        cout<<str[i]<<endl;
    }
    return 0;
}