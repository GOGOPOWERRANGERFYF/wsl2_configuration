#include <stdio.h>
#include <stdlib.h>
int main(void){
	void * pointer = NULL;
	pointer = malloc(sizeof(char) * 5);
	printf("%p\n", pointer);
	printf("%p\n", pointer + 1);
	free(pointer);
	return 0;
}


