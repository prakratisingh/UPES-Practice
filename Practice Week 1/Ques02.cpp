//Write a program to find sum of all integers greater than 100 & less than 200 and are divisible by 5. 
#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    for(int i=101;i<200;i++)
    {
        if(i%5==0)
        {
            sum = sum+i;
        }
    }
cout<<"Sum: "<<sum<<endl;
    return 0;
}