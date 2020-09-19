#include <iostream>

void factorization (int number) {
	int divisor = 2;
	while (number != 1) {
		if (number % divisor == 0) {
			std::cout << divisor << std::endl;
			number /= divisor;
		}
		else {
			divisor++;
		}
	}
}

int main () {
	int number;
	std::cin >> number;
	factorization (number);
	return 0;
}
