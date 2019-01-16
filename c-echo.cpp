#include <iostream>

int main(int argv, char** argc) {

	for(int i = 1; i < argv; i++) {
		std::cout << argc[i] << " ";
	}
	std::cout << std::endl;
}
