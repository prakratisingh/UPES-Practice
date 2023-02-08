//Write a C program to print multiplication table of any number (Using For and While loop). 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    cout<<"Multiplication Table of: "<<n<<endl;
    /*
    //for loop
    for(int i=1;i<=20;i++)
    {
        cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
    }
    */
   int i=1;
   while(i<=20)
   {
    cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
    i++;
   }
   return 0;

}