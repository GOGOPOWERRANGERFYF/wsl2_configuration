#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define NAME "FYF"
// 结构体和联合的不完整声明。
typedef union Union Union;
typedef struct Stack Stack;
void stack_init(void);
void push(void);
void pop(void);

// 结构体和联合的定义为声明,要加分号。
typedef union Union {
	char union_char;
	short int union_short_int;
	unsigned short int union_unsigned_short_int;
	int union_int;
	unsigned int union_unsigned_int;
	long int union_long_int;
	unsigned long int union_unsigned_long_int;
	float union_float;
	double union_double;
	void * void_pointer_in_union;
	struct stack * struct_stack_pointer;
} Union;

typedef struct Stack {
	Union stack_element;
} Stack;

// 函数定义,不需要加分号。
int main(void) {
	stack_init();
	return 0;
}

void stack_init(void) {
	struct Stack stack;
	void * void_pointer = NULL;
	void_pointer = malloc(sizeof(union Union));
	printf("%p\n", void_pointer);
	stack.stack_element.struct_stack_pointer = (struct stack *)void_pointer;
	printf("%p\n", stack.stack_element.struct_stack_pointer);
}

void push(void) {
		
}
