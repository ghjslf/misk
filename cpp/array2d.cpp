#include <iostream>

int main() {

	int N;
	int M;
	std::cin >> N >> M;

	int array[N][M];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			array[i][j] = i*M + j;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			std::cout << array[i][j] << ' ';
		}
		std::cout << '\n';
	}
	// memory investigation
	int *p = reinterpret_cast<int *>(array);
	for (int i = 0; i < N*M; i++) {
		std::cout << *(p + i) << ' ';
	}
	return 0;
}
