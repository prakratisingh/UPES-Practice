//Write a program in C to find the maximum and minimum element in an array
#include<iostream>
#include<unordered_map>
#define MAX_INT 10000
#define MIN_INT 0
using namespace std;
int main()
{
    int min = MAX_INT;
    int max = MIN_INT;
    int arr[] = {12,3,2,4,3,2,5,3,2,1,7,12};
    int n = (sizeof(arr)/sizeof(*arr));
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(auto x:m)
    {
        if(x.first<min)
        {
            min = x.first;
        }
    }
    cout<<"Minimum: "<<min<<endl;
    for(auto x:m)
    {
        if(x.first>max)
        {
            max = x.first;
        }
    }
    cout<<"Maximum: "<<max<<endl;

    return 0;
}