#include <iostream>

int main() {

	int N;
	std::cin >> N;

	int array[N];

	for (int i = 0; i < N; i++)
		array[i] = i;

	for (int i = 0; i < N; i++)
		std::cout << array[i] << '\n';

	return 0;
}
