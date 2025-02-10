// Include Of the header files
#include<iostream>

using namespace std;

// Creating An Main Function
int main() {
	// initilize Of the array with three element and size is set to three
	int arr[3] = { 1,2,3 };
	// printing each and every elements of the arry by its address
	std::cout << arr[0] << arr[1] << arr[2] << endl;
	// return 0 to end of the main faunction the int main function needs an return value for ending.

	// Printing The Address Of The Array Using An Pointer
	// Create An Pointer Varible for Storing The Address of The Array
	int* ptr;
	// Set The Address To The Ptr Varible
	ptr = arr;
	// Diplay the Address Of the Array
	std::cout << "The Physical Address Of The Array:" << *arr << endl;
	// Display The Pointer Address
	std::cout << "The Physical Address Of The Array:" << ptr << endl;

	// 1 Dimensional Array
	// Initilization Of The Array
	int a[3];
	// Create An vArible for The looping
	int i;

	// Create An Loop Function To Iterate And Get Input From User
	for (i = 0;i < 3;i++) {
		std::cout << "Enter The Number Of Arr[" << i << "]:";
		std::cin >> a[i];
		std::cout << endl;
	}
	// Display Of The Element Of The Array
	for (i = 0;i < 3;i++) {
		std::cout << "The Element Of Arr[" << i << "]:" << a[i] << endl;
	}

	// Declaration Of The Sum Varible
	int sum = 0;
	int mul = 1;
	int avg = 0;
	// Calculate Of The Sum Of The Array 
	for (i = 0;i < 3;i++) {
		sum = sum + a[i];
		mul = mul * a[i];
	}
	avg = sum / 3;
	std::cout << "The Sum Of The Array:" << sum << endl << "The Average Of The Array:" << avg << endl << "The Multiplication Of The Array:" << mul << endl;

	// Two Dimensional Array
	// Initilize Of The Array
	int aa[3][3];
	// Decelaration Of The Iteration Varible
	int k, j;
	// Creating An Loop To Input Each Element Of The Array
	for (k = 0;k < 3;k++) {
		for (j = 0;j < 3;j++) {
			std::cout << "Enter The The Element Of Arr[" << k << "]" << "[" << j << "]:";
			std::cin >> aa[k][j];
			std::cout << endl;
		}
	}
	// Printing The Elements Of The Array
	for (k = 0;k < 3;k++) {
		for (j = 0;j < 3;j++) {
			std::cout << "The Element Of The Arr[" << k << "]" << "[" << j << "]:" << aa[k][j] << "\n";
		}
	}

	// Creating The Varible For Storing The Sum Avg And Mul Of The Array
	int avg1 = 0;
	int sum1 = 0;
	int mul1 = 1;
	// Looping Function To Calculate The Sum And Mul
	for (k = 0;k < 3;k++) {
		for (j = 0;j < 3;j++) {
			sum1 = sum1 + aa[k][j];
			mul1 = mul1 * aa[k][j];
		}
	}
	// Calculate The Avg Using Sum
	avg1 = sum1 / 9;
	// Display Of The Sum Avg And Mul
	std::cout << "The Sum Of The Array:" << sum1 << endl;
	std::cout << "The Mul Of The Array:" << mul1 << endl;
	std::cout << "The Avg Of The Array:" << avg1 << endl;
	return 0;
}