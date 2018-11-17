#include <iostream>

extern int MY_INT = 1024;

int main(int argc, char *argv[]) {
	
	std::cout << "Twice my integer is: " << 2*MY_INT << std::endl;
	
	return 0;
}
