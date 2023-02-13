//22. Write a program in C to display the number in reverse order. 
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rev=0,rem=0;

    while(n>=1)
    {
        rem = n%10;
        rev = (rev*10)+rem;
        n = n/10;
    }
    cout<<rev<<endl;
}