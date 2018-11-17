#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "Enter 10 integers and I'll sum them for you!" << std::endl;

	static int inputs[] = {1,1,1,1,1,1,1,1,1,1};

	for (int i = 0; i < 10; ++i) {
		std::cin >> inputs[i];
	}

	int acc = 0;
	for (int i = 0; i < 10; ++i) {
		acc += inputs[i];
	}

	std::cout << "The total is: " << acc << std::endl;

	return 0; 
}




