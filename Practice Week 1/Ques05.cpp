//Write a C program to check whether a given number is positive or negative
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;

    if(n>0)
    {
        cout<<"Positive"<<endl;
    } 
    else{
        cout<<"Negative"<<endl;
    }
    return 0;
}