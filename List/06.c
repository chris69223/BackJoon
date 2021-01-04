#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int id;
	char name[20];
	double height;
} Person;

struct list_node {
	Person value;
	struct list_node *prev;
	struct list_node *next;
};

typedef struct {
	struct list_node *head;
	struct list_node *last;
} LinkedList;

LinkedList *new_list() {
	return (LinkedList *)calloc(1, sizeof(LinkedList));
}

void add(LinkedList *l, Person p) {
	struct list_node *node = (struct list_node *)malloc(sizeof(struct list_node));
	node->value = p;
	node->prev = NULL;
	node->next = NULL;

	if (l->head == NULL) {
		l->head = node;
		l->last = node;
	}
	else {
		l->last->next = node;
		node->prev = l->last;
		l->last = node;
	}
}

// move src to beginning of the list when dest is NULL
void move_after(LinkedList *l, struct list_node *dest, struct list_node *src) {
	if (src->prev != NULL) {
		src->prev->next = src->next;
	}
	else {
		l->head = src->next;
	}

	if (src->next != NULL) {
		src->next->prev = src->prev;
	}
	else {
		l->last = src->prev;
	}

	if (dest == NULL) {
		src->next = l->head;
		src->prev = NULL;
		if (l->head == NULL) {
			l->head = l->last = src;
		}
		else {
			l->head->prev = src;
			l->head = src;
		}
	}
	else {
		dest->next->prev = src;
		src->next = dest->next;
		dest->next = src;

		src->prev = dest;

		if (dest == l->last) {
			l->last = src;
		}
	}
}

void free_list(LinkedList *l) {
	struct list_node *node = l->head;
	struct list_node *next = NULL;
	while (node != NULL) {
		next = node->next;
		free(node);
		node = next;
	}

	free(l);
}

int gt(Person *a, Person *b) { // return a > b
	return strcmp(a->name, b->name) > 0;
}

void quicksort(LinkedList *l, struct list_node *begin, struct list_node *end) {
	if (begin == NULL || end == NULL || begin == end) {
		return;
	}

	struct list_node *_begin = begin;
	struct list_node *_end = end;

	struct list_node *pivot = begin;

	struct list_node *node = begin->next;
	struct list_node *next;
	while (node != NULL) {
		next = node->next;
		if (gt(&pivot->value, &node->value)) {
			if (node == _end) {
				_end = node->prev;
			}
			move_after(l, pivot->prev, node);
			if (node->next == _begin) {
				_begin = node;
			}
		}
		if (node == end) {
			break;
		}
		node = next;
	}

	if (pivot != _begin) {
		quicksort(l, _begin, pivot->prev);
	}
	if (pivot != _end) {
		quicksort(l, pivot->next, _end);
	}
}

void print_list(LinkedList *l) {
	struct list_node *iter = l->head;
	if (iter == NULL) {
		return;
	}

	while (
		printf("%d \t%s \t\t\t%.2f\n", iter->value.id, iter->value.name, iter->value.height),
		iter != l->last
		? iter = iter->next,
		1 : 0
		) {
	}

	printf("\n");
}

#define DEFAULT_SOURCE "contacts-small.txt"

int main(int argc, char *argv[]) {
	char *source = DEFAULT_SOURCE;
	if (argc > 1) {
		source = argv[1];
	}

	FILE *fp = fopen(source, "r");

	if (fp == NULL) {
		perror(source);
		return 1;
	}

	LinkedList *list = new_list();

	Person person;

	while (fscanf(fp, "%d %s %lf", &person.id, person.name, &person.height) != EOF) {
		fprintf(stdout, "%d %s %lf\n", person.id, person.name, person.height);
		//add(list, person);
	}
}
	//quicksort(list, list->head, list->last);

	//print_list(list);

	//free_list(list);

