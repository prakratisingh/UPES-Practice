/*Write a program in C to display the first n terms of Fibonacci series.
0 1 1 2 3 5 8 13 ....
*/
#include<iostream>
using namespace std;
static int Fibo(int n)
{
    //base case
    if(n<=1)
        return n;
    //call
    return(Fibo(n-1)+Fibo(n-2));
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<Fibo(i)<<" ";
    }
}