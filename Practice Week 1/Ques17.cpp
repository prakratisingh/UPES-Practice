/*Write a program in C to print the Floyd's Triangle. 
1 
01 
101 
0101 
10101 
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<flag;
            flag = !flag;
        }
        cout<<endl;
    }
}