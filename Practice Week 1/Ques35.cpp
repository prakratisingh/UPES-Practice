//Write a program in C to delete an element at desired position from an array. 
#include <iostream>
#include <set>
using namespace std;

int main() {
    std::set<int> x={10,11,13,14};
    cout<<"Enter element to be deleted : "<<endl;
    int n; 
    cin>>n;
    x.erase(n);
    for (const int& i : x) // access by const reference
        std::cout << i << ' ';
    std::cout << '\n';
    return 0;
}