//Write a C program to find the largest of three numbers. 
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three numbers: "<<endl;
    cin>>a>>b>>c;

    if((a>b)&&(a>c))
        cout<<a<<" is the largest"<<endl;
    else if((b>a)&&(b>c))
        cout<<b<<" is the largest"<<endl;
    else
        cout<<c<<" is the largest"<<endl;
}