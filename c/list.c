#include <stdio.h>
#include <stdlib.h>

struct node_t {
	int data;
	struct note_t *next;
};

void iterate_list (struct node_t* np) {
	while (np->next != NULL) {
		printf("%d\n", (*np).data);
		np = (*np).next;
	}
}

int main() {
	int size_of_list = 10;
	struct node_t *np_begin = (struct node_t *)malloc(sizeof(struct node_t));
	struct node_t *np = np_begin;

	for (int i = 0; i < size_of_list; i++) {
		(*np).data = i + 1;
		(*np).next = (struct node_t *)malloc(sizeof(struct node_t));
		np = (*np).next;
	}

//	(*np).data = 0;
//	(*np).next = NULL;

	iterate_list (np_begin);

	return 0;
}
