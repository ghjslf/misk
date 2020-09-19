#include <iostream>

int gcd (int first_number, int second_number) {
	while (first_number != second_number) {
		if (first_number > second_number)
			first_number -= second_number;
		else
			second_number -= first_number;
	}
	return first_number;
}

int gcd_recursive (int first_number, int second_number) {
	if (first_number == second_number) return first_number; //base case
	if (first_number > second_number) return gcd (first_number - second_number, second_number); //recursive case
	return gcd (second_number - first_number, first_number);
}

int main () {
	int first_number;
	int second_number;

	std::cin >> first_number;
	std::cin >> second_number;

	std::cout << gcd (first_number, second_number) << std::endl;
	return 0;
}
