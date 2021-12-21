#include <stdio.h>
//#include <stdbool.h>
//int func1(void);
//int func2(void);
//int func3(void);
//int func4(void);
//int func5(void);
int func6(void);

int main(void) {
	func6();
	return 0;
}

int func6(void) {
	int result;
	//int a = 5, result;
	//printf("%d\n", 5 && a);
	//result = 5 && a;
	result = 5 && 6;
	return 0;
}

/*
int func5(void) {
	int array[3] = {1, 2, 3};
	int i, temp;
	for (i = 0; i <= 2; i++) {
		temp = array[i];
	}
	return 0;
}
*/

/*
int func1(void) {
	//int i = 5;
	// je jump if equality
	// 相等比较器 equality comparator
	// 使用XNOR门实现,异或非门电路
	while (5 > 0) {
		//i--;
	}
	return 0;
}
*/

/*
int func2(void) {
	_Bool b1;
	// 1 && 11  编译器直接给出立即数1...
	// 通过语义分析直接给出逻辑表达式的值0或1
	// 整数常量表达式,编译器一般直接计算值
	b1 = 0 && 1;
	return 0;
}                             
*/

/*
int func3(void) {
	// ALU通过比较器(相等比较器和量值比较器)计算出结果
	// 结果为1bit 1或0
	//printf("%d %d\n", 5 > 3, 3 > 5);
	printf("%d\n", "a" && 5);
	return 0;
}

int func4(void) {
	// 仅为个人推测:
	// 我觉得编译器(根据字面量)把非0和非false值直接编译成0值,
	// 根据语言标准/按照语法、语义来说就是隐式转换.
	_Bool bool1 = "a", bool2 = false;
	printf("%d %d\n", bool1, bool2);
	return 0;
}
*/

