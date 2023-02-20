//Write a program in C to find the second largest element in an array.
#include<iostream>
using namespace std;
int main()
{
    int max = 0;
    int secondlargest = 0;
    int arr[] = {12,22,5,3,66,7,4,9};
    int length = sizeof(arr)/sizeof(*arr);
    for(int i=0;i<length;i++)
    {
        if(arr[i]>max)
        {
            secondlargest = max;
            max = arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]<max)
        {
            secondlargest = arr[i];
        }
    }
    cout<<"Second largest value in array: "<<secondlargest<<endl;
}