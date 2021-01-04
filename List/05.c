#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DEFAULT_SOURCE "info1.txt"

typedef struct {
	char name[30];
	int id;
	char author[30];

}Book;

int main(int argc, char *argv[]) {
	char *source = DEFAULT_SOURCE;
	if (argc > 1) {
		source = argv[1];
	}
	Book book;
	FILE *fp = fopen(source, "r");

	if (fp == NULL) {
		perror(source);
		return 1;
	}

	
	while (fscanf(fp, "%s %s", book.name, book.author) != EOF) {
		fprintf(stdout, "%s %s\n", book.name, book.author);
		//add(list, person);
	}
	fclose(fp);
}