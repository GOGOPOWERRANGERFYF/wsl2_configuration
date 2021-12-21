/*
 * 迭代枚举变量
 * iterate 迭代;
 * foreach 遍历;
*/
#include <stdio.h> 
int foreachColors(void);
typedef enum colors {red, green, blue} colors;

int main(void) {
	//int reslut = 0;
	//colors my_colors;
	//if (my_colors == red) {
	//	reslut = 1;
	//} else {
	//	reslut = 0;
	//}
	////printf("%d %d %d\n", red, green, blue);
	////printf("%zd\n", sizeof(red));
	foreachColors();
	return 0;
}

int foreachColors(void) {
	char *char_pointer_array[] = {"red", "green", "blue"};
	colors my_colors;
	// 字符指针数组
	for (my_colors = red; my_colors <= blue ; my_colors++) {
		printf(char_pointer_array[my_colors]);
		printf("\n");
	}
	return 0;
}



