//Write a program in C to read n number of values in an array and display it in reverse order.
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
    for(int i=n;i>=1;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}