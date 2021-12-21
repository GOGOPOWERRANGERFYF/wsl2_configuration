#include <stdio.h>
#define NULL_CHAR '\0'
int printAttribute(char *cp);
//int hashFunction(char (*cap)[]);
int hashFunction(char *cp);

int main(void) {
	char hash_array[] = "color";
	//char (*cap)[] = &hash_array;
	char *cp = hash_array;
	hashFunction(cp);
	return 0;
}

//int hashFunction(char (*cap)[]) {
int hashFunction(char *cp) {
	int i;
	unsigned long int uli_temp = 0UL, result;
	// cp[i]必须等于'\0'才符合测试条件,
	// '\0'为第5个元素,数组下标i为4.
	for (i = 0; cp[i] != NULL_CHAR; i++) {
		//uli_temp = uli_temp + cp[i];
		uli_temp += cp[i];
	}
	printf("length of string(exclude null character): %d\n", i);
	result = uli_temp % i;
	printAttribute(cp);
	printf("sum of chars:%lu; key=>hash: %lu;\n",
		   	uli_temp, result);
	return 0;
}

int printAttribute(char *cp) {
	int i;
	printf("attribute:");
	for (i = 0; cp[i] != NULL_CHAR; i++) {
		printf("%c", cp[i]);	 
	}
	printf("; ");
	return 0;
}




