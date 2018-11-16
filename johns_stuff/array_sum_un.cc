#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "Enter 10 integers and I'll sum them for you!" << std::endl;

	static int uninitarr[10];

	for (int i = 0; i < 10; ++i) {
		std::cin >> uninitarr[i];
	}

	int acc = 0;
	for (int i = 0; i < 10; ++i) {
		acc += uninitarr[i];
	}

	std::cout << "The total is: " << acc << std::endl;

	return 0; 
}




