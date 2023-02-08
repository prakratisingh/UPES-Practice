// Write a program to receive the two numbers in variables, and then swap the values of variables, with and without using third variable.
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 2;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<a<<endl;
    cout<<b<<endl;
}