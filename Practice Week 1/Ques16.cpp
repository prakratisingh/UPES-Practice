//Write a C program to calculate the factorial of a given number.(For large no. also) 
#include<iostream>
using namespace std;
// // long Fact(long n)
// // { 
// //     if(n==0)
// //     {
// //         return 1;
// //     }
// //     return (n * Fact(n-1));
// // }
// // int main()
// // {
// //     long n;
// //     cout<<"Enter number: "<<endl;
// //     cin>>n;
// //     cout<<Fact(n)<<endl;
// // }
// // C++ program to find large
// // factorials using BigInteger
// #define ull unsigned long long

// // Returns Factorial of N
// ull factorial(int N)
// {

// 	// Initialize result
// 	ull f = 1; // Or BigInt 1

// 	// Multiply f with 2, 3, ...N
// 	for (ull i = 2; i <= N; i++)
// 		f *= i;

// 	return f;
// }

// // Driver method
// int main()
// {
//     int N;
// 	cin>>N;
// 	cout << factorial(N) << endl;
// }

// This code is contributed by phasing17

// C++ program to compute factorial of big numbers
#include <iostream>
using namespace std;

// Maximum number of digits in output
#define MAX 500

int multiply(int x, int res[], int res_size);

// This function finds factorial of large numbers
// and prints them
void factorial(int n)
{
	int res[MAX];

	// Initialize result
	res[0] = 1;
	int res_size = 1;

	// Apply simple factorial formula n! = 1 * 2 * 3
	// * 4...*n
	for (int x = 2; x <= n; x++)
		res_size = multiply(x, res, res_size);

	cout << "Factorial of given number is \n";
	for (int i = res_size - 1; i >= 0; i--)
		cout << res[i];
}

// This function multiplies x with the number
// represented by res[].
// res_size is size of res[] or number of digits in the
// number represented by res[]. This function uses simple
// school mathematics for multiplication.
// This function returns the
// new value of res_size
int multiply(int x, int res[], int res_size)
{
	int carry = 0; // Initialize carry

	// One by one multiply n with individual digits of res[]
	for (int i = 0; i < res_size; i++) {
		int prod = res[i] * x + carry;

		// Store last digit of 'prod' in res[]
		res[i] = prod % 10;

		// Put rest in carry
		carry = prod / 10;
	}

	// Put carry in res and increase result size
	while (carry) {
		res[res_size] = carry % 10;
		carry = carry / 10;
		res_size++;
	}
	return res_size;
}

// Driver program
int main()
{
	factorial(100);
	return 0;
}
