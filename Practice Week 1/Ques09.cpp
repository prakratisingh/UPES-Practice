//Write a program in C to read 10 numbers from keyboard and find their sum and average. 
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    float sum = 0.0;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        sum = sum+ arr[i];
    }
    float avg = sum/10;

    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<avg<<endl;
}