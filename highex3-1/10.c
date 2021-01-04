#include  <stdio.h>
#include <stdlib.h>
typedef struct department
{
	char name[20];
	int person;
	struct department* link;
}de;

void myPrint(de* dep);

int main()
{
	de *st = NULL;
	st = (de *)malloc(sizeof(de));
	strcpy(st[0].name, "°í¿µ»ó");
	st[0].person = 10;

	printf("%s %d", st[0].name, st[0].person);
	
	return 0;
}

