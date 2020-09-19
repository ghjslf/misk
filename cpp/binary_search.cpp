#include <iostream>

void print_array (int array[], int array_size) {
	for (int i = 0; i < array_size; i++)
		std::cout << array[i] << ' ';
}

int binary_search (int array[], int array_size, int desired_value) {

	int left = 0;
	int right = array_size - 1;
	int middle;

	while (left <= right) {
		middle = (left + right) / 2;
		if (desired_value == array[middle])
			return middle;
		if (desired_value < array[middle])
			right = middle - 1;
		else
			left = middle + 1;
	}
	return -1;
}

int main() {

	const int array_size = 10;

	int array[array_size];
	int desired_value = 0;

	for (int i = 0; i < array_size; i++)
		array[i] = (i + 1)*2;

	print_array (array, array_size);

	std::cout << '\n' << "input desired value: ";

	std::cin >> desired_value;

	std::cout << "index of desired value in array: " << binary_search(array, array_size, desired_value) << '\n';

	return 0;
}
