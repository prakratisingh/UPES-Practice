//Write a program in C to count a total number of duplicate elements in an array.
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int> m;
    int n;
    cout<<"Enter no of elements: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter element: "<<i<<endl;
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        m[arr[i]]++;
    }
    int c = 0;
    for(auto x: m)
    {
        if(x.second==2)
        {
            c++;
        }
    }
    cout<<"No. of duplicates: "<<c<<endl;
}