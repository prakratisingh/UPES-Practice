//Write a program in C to print all unique elements in an array.
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    unordered_map<int,int> m;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element: "<<i<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(auto x:m)
    {
        if(x.second==1)
        {
            cout<<x.first<<endl;
        }
    }
    return 0;
}