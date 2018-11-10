#include <iostream>

double GetSquare(double input) {
	double ret = input;
	ret *= ret;
	
	return ret;
}

int main(int argc, char *argv[]) {
	std::string input = "";
	
	std::cout << "ENTER A NUMBER AND ILL GIVE YOU THE SQUARE OF IT (enter 'stop' to exit)" << std::endl;
	
	bool accepting = true;
	while (accepting) {
		std::cin >> input;
		
		if (input == "stop") {
			accepting = false;
		}
		else {
			std::cout << "The square is: " << std::to_string(GetSquare(stod(input))) << std::endl;
		}
	}
	
	return 0;
}