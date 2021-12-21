#include <stdio.h>
int func1(int p1);
void func2(void);

int main(void) {
	//func1(5);
	func2();
	return 0;
}

int func1(int p1) {
	//注释掉p1 = p1;这句代码后生成的汇编代码实际是一样的
	//因为这句代码并没有什么实际意义,被优化掉了
	//但根据语义,它应该把p1的值复制到寄存器,然后再把寄存器的值再复制回内存中p1的存储位置
	//但编译器最终生成的机器码中并没有执行这一"无意义"操作的代码。。。
	//p1 = p1;
	return 0;
}

void func2(void) {

}

