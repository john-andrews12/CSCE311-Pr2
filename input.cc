#include <iostream>

int main(int argc, char *argv[]) {
	std::string input = "";
	
	std::cout << "ENTER SINGLE WORD INPUT (or '-1' to exit)" << std::endl;
	
	bool accepting = true;
	while (accepting) {
		std::cin >> input;
		
		if (input == "-1") {
			accepting = false;
		}
		else {
			std::cout << "The input was: " << input << std::endl;
		}
	}
	
	return 0;
}