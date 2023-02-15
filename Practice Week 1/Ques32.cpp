//Write a program in C to count the frequency of each element of an array.
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int arr[] = {12,3,2,4,3,2,5,3,2,1,7,12};
    int n = (sizeof(arr)/sizeof(*arr));
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(auto x:m)
    {
        cout<<"Frequency of "<<x.first<<" = "<<x.second<<endl;
    }
    return 0;
}