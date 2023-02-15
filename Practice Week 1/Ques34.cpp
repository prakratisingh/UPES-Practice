/*Write a program in C to insert New value in the array (sorted list ). 
Test Data : 
Input the size of array: 3 
Input 3 elements in the array in ascending order: 
Element - 0: 5 
Element - 1: 7 
Element - 2: 9 
Input the value to be inserted: 8 
Expected Output: 
The exist array list is: 
5 7 9 
After Insert the list is: 
5 7 8 9 
*/
// #include<iostream>
// using namespace std;
// void Insert(int val,int arr[])
// {
//     int length = (sizeof(arr)/sizeof(*arr));
//     for(int i=0;i<length;i++)
//     {
//         if(arr[i]>val)
//         {
//             break;
//         }
//     for(int k=length-2; k>=i; k--)
//     {
//         arr[k+1]=arr[k];            
//     }
//       arr[i]=val;
//     }
// }
// int main()
// {
//     int n;
//     int arr[n];
//     cout<<"Enter array size: ";
//     cin>>n;
//     cout<<"Enter elements in ascending order"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int val;
//     cout<<"Enter value to be inserted: "<<endl;
//     cin>>val;
//     Insert(val,arr);
//     int length = ((sizeof(arr)/sizeof(*arr)));
//     for(int i=0;i<length;i++)
//     {
//         cout<<arr[i];
//     }
// }

#include <iostream>
#include <set>
using namespace std;

int main() {
    std::set<int> x={10,11,13,14};
    cout<<"Enter no to be added: "<<endl;
    int n; 
    cin>>n;
    x.insert(n);


    for (const int& i : x) // access by const reference
        std::cout << i << ' ';
    std::cout << '\n';
    return 0;
}