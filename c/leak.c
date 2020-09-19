#include <stdlib.h>
#include <stdio.h>

int main() {
	int array_size = 10000;
	while(1) {
		int * ip;
		ip = (int *)malloc(array_size * sizeof(int));
		if (ip != NULL) {
			for (int i = 0; i < array_size; i++) {
				*(ip + i) = i + 1;
			}
			printf("Success.\n");
		}
		else {
			printf("Error.\n");
		}
		//free(ip);
	}
	return 0;
}
