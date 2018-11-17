#include <iostream>
#include <string>

double GetSquare(double input) {
	double ret = input;
	ret *= ret;
	
	return ret;
}

int main(int argc, char *argv[]) {
	std::string input = "";
	double inputd = 0.0;
	
	std::cout << "ENTER A NUMBER AND ILL GIVE YOU THE SQUARE OF IT (enter 'stop' to exit)" << std::endl;
	
	bool accepting = true;
	while (accepting) {
		std::cin >> input;
		
		if (input == "stop") {
			accepting = false;
		}
		else {
			inputd = std::stod(input);
			std::cout << "The square is: " << GetSquare(inputd) << std::endl;
		}
	}
	
	return 0;
}
