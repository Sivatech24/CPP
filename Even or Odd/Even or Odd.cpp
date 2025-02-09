// define of the header
#include<iostream>

using namespace std;

int oddoreven(int a) {
	int flag = 1;
	if (a % 2 == 0) {
		// std::cout << a << "The Number Is Even.";
	}
	else {
		// std::cout << a << "The Number Is Odd.";
		flag = 0;
	}
	return flag;
}

int main() {
	// Vrible Decleration To Iterate The Loop Unitl The Conditon False
	int flag = 1;
	int i = 1;
	while (i > 0) {
		std::cout << "__________________________________________________________________________________\n";
		std::cout << "|                      Check The Given Number Odd Or Even                        |\n";
		std::cout << "__________________________________________________________________________________\n";
		// Decleration Of The Varible
		int a;
		// Get User Input Number
		std::cout << "|" << "Enter A Number:" << "|";
		std::cin >> a;
		// Using Of the Conditional Statment Verifying Of The Varible
		// If Condition True Print Of The If Block
		// If The If Condition Is False Automatically Execute Of The Else Block
		int check = oddoreven(a);
		if (check == 1) {
			std::cout << "|" << a << "\tThe Number Is Even." << "|\n";
		}
		else if (check == 0) {
			std::cout << "|" << a << "\tThe Number Is Odd." << "|\n";
		}
		else {
			std::cout << "|" << a << "\tInvalid Input." << "|\n";
		}
		std::cout << "|" << "To Continue Loop Enter 1 Exit Loop Enter 0 :" << "|\n";
		std::cin >> i;
		if (i < 0) {
			flag++;
		}
	}
	if (flag > 0) {
		std::cout << "__________________________________________________________________________________\n";
		std::cout << "                     By Coding Master 24                                          \n";
		std::cout << "__________________________________________________________________________________\n";
	}
	return 0;
}