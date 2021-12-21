#include <stdio.h>
struct person;

typedef struct person {
	char * name_pointer;
} person;


int main(void) {
	//printf("%zd\n", sizeof((int[]){1, 2, 3}));
	person person_1;
	person_1.name_pointer = "Mr chan";

	return 0;
}


