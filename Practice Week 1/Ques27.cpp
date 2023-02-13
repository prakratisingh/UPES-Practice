//Write a program in C to store elements in an array and print it. 
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter size of array: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    //entering
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter element: "<<i<<endl;
        cin>>arr[i];
    }
    //printing
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}