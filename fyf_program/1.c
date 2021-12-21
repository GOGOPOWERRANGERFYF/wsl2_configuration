#include <stdio.h>
#include <stdlib.h>

int func1(void);
int func2(void);
int func3(void);

typedef union UN {
    char uc;    
    int ui;
    char uc1;
} UN;

typedef struct ST {
    char sc;    
    int si;
    char sc1;
} ST;

int main(void){
    //int a = 0, b = 1, c = 1;
    //int a = 0b00000000000000000000000000000000;
    //printf("%d %d\n", ~a, b ^ c);
    func3();
    return 0;
}

int func1(void){
    printf("%zd %ld\n", sizeof(NULL), NULL);
    void * vp = malloc(4);
    printf("%p\n", vp);
    vp = NULL;
    //*vp;
    printf("%p %ld\n", vp, vp);
    return 0;
}

int func2(void){
    char c1 = 2, c2 = 4;
    printf("%zd %d\n", sizeof(c1 + c2), c1 + c2);

    UN u1;
    u1.ui = 16;
    printf("%zd\n", sizeof(u1.ui));
    printf("%x\n", u1.ui);
    printf("%x %p %p\n", *&u1.ui, &u1.ui, &u1.ui + 1);
    printf("%x\n", u1.uc);

    ST st1;
    printf("%p %p %p\n", &st1.sc, &st1.si, &st1.sc1);

    return 0;
}

int func3(void){
    char c1 = 'c';
    int i1 = 5 + 5;
    static int result;
    result = (int)c1 + i1;
    printf("%d\n", result);
    return 0;
}

int func5(void){
	int i = 5;
	return 0;
}


